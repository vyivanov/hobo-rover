#include "inc/uart-stdio.hpp"

#include <scmRTOS.h>

#include <chrono>
#include <cstdint>

namespace {

using DummyPrintProc   = OS::process<OS::pr1, 128>;
const auto dummy_print = DummyPrintProc{"dummy-print"};

} // namespace

template <>
OS_PROCESS void DummyPrintProc::exec() {
  const char* proc_name = OS::get_proc(OS::pr1)->name();
  const auto proc_sleep = std::chrono::milliseconds{250};
  auto proc_count       = uint32_t{0};

  while (true) {
    MAVIC_LOG("proc=%s, count=%lu", proc_name, proc_count);
    proc_count += 1;

    OS::sleep(proc_sleep.count());
  }
}
