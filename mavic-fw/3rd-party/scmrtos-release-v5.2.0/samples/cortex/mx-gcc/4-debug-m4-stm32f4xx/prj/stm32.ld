/**
 * Common part of linker script for STM32 microcontrollers.
 * This script is included to device-specific script, and should not
 * be used directly.
 */ 

ENTRY(Reset_Handler)

/**
 * This constant is used to check that at least STACK_SIZE of RAM
 * is available for stack. If not, linker will issue an error.
 */
STACK_SIZE = 0x100 ;

/**
 * This constant is used to check that at least HEAP_SIZE of RAM
 * is available for heap. If not, linker will issue an error.
 */
HEAP_SIZE = 0x100 ;


/**
 * Initial user stack pointer = end of RAM (stack grows downwards).
 * ARM Architecture Procedure Call Standard (AAPCS) requires
 * 8 byte stack alignment. 
 */
PROVIDE ( _estack = ALIGN(ORIGIN(RAM) + LENGTH(RAM) - 8 ,8) );

SECTIONS
{
	/* Interrupt vector table */
	.isr_vector :
	{
		. = ALIGN(4);
		KEEP(*(.isr_vector))
		. = ALIGN(4);
	} >FLASH

	.text :
	{
		__ctors_start__ = .;
		KEEP(SORT(*)(.init_array)) /* eabi uses .init_array for static constructor lists */
		__ctors_end__ = .;

		__dtors_start__ = .;
		__dtors_end__ = .;
        
		. = ALIGN(4);
		*(.text)                   /* remaining code */
		*(.text.*)
		*(.rodata)                 /* read-only data (constants) */
		*(.rodata.*)

		*(.eh_frame_hdr)
		*(.eh_frame)
		*(.ARM.extab* .gnu.linkonce.armextab.*)

		. = ALIGN(4);
	} >FLASH

	/* .ARM.exidx is sorted, so has to go in its own output section.  */
	__exidx_start = .;
	.ARM.exidx :
	{
		*(.ARM.exidx* .gnu.linkonce.armexidx.*)
	} >FLASH
	__exidx_end = .;

	. = ALIGN(4);
	_etext = .;
	_sidata = _etext;          /* start of initialized data (in FLASH, LMA) */

	/** 
	 * Initialized data section. Placed into flash at LMA address,
	 * copied to RAM by startup code (VMA address). 
	 */
	.data :
	{
		. = ALIGN(4);
		_sdata = .;                /* start of .data label (in RAM, VMA) */
		*(.data)
		*(.data.*)
	} > RAM AT > FLASH

	/**
	 * RAM functions section. 
	 */
	.ramfunc :
	{
		. = ALIGN(4);
		*(.ramfunc)
		*(.ramfunc.*)
		. = ALIGN(4);
		_edata = .;                /* end of .data label */
	} > RAM AT > FLASH

	/**
	 * .bss section - uninitialized data
	 */
	.bss (NOLOAD):
	{
		. = ALIGN(4);
		_sbss = .;                 /* start of .bss label (for startup) */
		*(.bss)
		*(.bss.*)
		*(COMMON)
		. = ALIGN(4);
		_ebss = .;                 /* end of .bss label (for startup) */
	} >RAM

	/**
	 * .noinit section - uninitialized data
	 */
	.noinit (NOLOAD):
	{
		. = ALIGN(4);
		_start_of_noinit = .;
		*(.noinit)
		*(.noinit.*)
		. = ALIGN(4);
		_end_of_noinit = .;   
		_end = .;                  /* end of used ram (start of heap) */
		__end = .;                 /* the same */
	} >RAM
	
	/**
	 * Battery backed RAM data
	 */
	.battram (NOLOAD):
	{
		. = ALIGN(4);
		_start_of_batt_ram = .;
		*(.battram)
		*(.battram.*)
		_end_of_batt_ram = .;
	} > BATTRAM

	/**
	 * Core coupled RAM data (STM32F4-specific)
	 */
	.ccram :
	{
		. = ALIGN(4);
		_start_of_ccram = .;
		*(.ccram)
		*(.ccram.*)
		_end_of_ccram = .;
	} > CCRAM

	/**
	 * This is the user stack and heap section
	 * This is just to check that there is enough RAM left for the User mode stack
	 * and heap. It should generate an error if it's full.
	 */
	._usr_stack_heap :
	{
		. = ALIGN(4);
		. = . + STACK_SIZE ;
		. = . + HEAP_SIZE ;
		. = ALIGN(4);
	} >RAM


	PROVIDE( _heap = _ebss );
	PROVIDE ( _eheap = _estack - STACK_SIZE );

	/**
	 * After that it's only debugging information.
	 */

	DISCARD :    /* remove the debugging information from the standard libraries */
	{
		libc.a ( * )
		libm.a ( * )
		libgcc.a ( * )
	}

	/* Stabs debugging sections.  */
	.stab          0 : { *(.stab) }
	.stabstr       0 : { *(.stabstr) }
	.stab.excl     0 : { *(.stab.excl) }
	.stab.exclstr  0 : { *(.stab.exclstr) }
	.stab.index    0 : { *(.stab.index) }
	.stab.indexstr 0 : { *(.stab.indexstr) }
	.comment       0 : { *(.comment) }
	/**
	 * DWARF debug sections.
	 * Symbols in the DWARF debugging sections are relative to the beginning
	 * of the section so we begin them at 0.
	 */

	/* DWARF 1 */
	.debug          0 : { *(.debug) }
	.line           0 : { *(.line) }

	/* GNU DWARF 1 extensions */
	.debug_srcinfo  0 : { *(.debug_srcinfo) }
	.debug_sfnames  0 : { *(.debug_sfnames) }
	
	/* DWARF 1.1 and DWARF 2 */
	.debug_aranges  0 : { *(.debug_aranges) }
	.debug_pubnames 0 : { *(.debug_pubnames) }

	/* DWARF 2 */
	.debug_info     0 : { *(.debug_info .gnu.linkonce.wi.*) }
	.debug_abbrev   0 : { *(.debug_abbrev) }
	.debug_line     0 : { *(.debug_line) }
	.debug_frame    0 : { *(.debug_frame) }
	.debug_str      0 : { *(.debug_str) }
	.debug_loc      0 : { *(.debug_loc) }
	.debug_macinfo  0 : { *(.debug_macinfo) }

	/* SGI/MIPS DWARF 2 extensions */
	.debug_weaknames 0 : { *(.debug_weaknames) }
	.debug_funcnames 0 : { *(.debug_funcnames) }
	.debug_typenames 0 : { *(.debug_typenames) }
	.debug_varnames  0 : { *(.debug_varnames) }
}
