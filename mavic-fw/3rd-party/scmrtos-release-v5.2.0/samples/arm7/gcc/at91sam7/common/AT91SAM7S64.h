// - ----------------------------------------------------------------------------
// -          ATMEL Microcontroller Software Support  -  ROUSSET  -
// - ----------------------------------------------------------------------------
// -  DISCLAIMER:  THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
// -  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// -  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
// -  DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
// -  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// -  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
// -  OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
// -  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
// -  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
// -  EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// - ----------------------------------------------------------------------------
// - File Name           : AT91SAM7S64.h
// - Object              : AT91SAM7S64 definitions
// - Generated           : AT91 SW Application Group  03/08/2005 (15:46:05)
// - 
// - CVS Reference       : /AT91SAM7S64.pl/1.18/Wed Feb  9 15:26:02 2005//
// - CVS Reference       : /SYS_SAM7S.pl/1.2/Tue Feb  1 17:01:52 2005//
// - CVS Reference       : /MC_SAM7S.pl/1.2/Tue Feb  1 17:01:00 2005//
// - CVS Reference       : /PMC_SAM7S_USB.pl/1.4/Tue Feb  8 13:58:22 2005//
// - CVS Reference       : /RSTC_SAM7S.pl/1.1/Tue Feb  1 16:16:35 2005//
// - CVS Reference       : /RTTC_6081A.pl/1.2/Tue Nov  9 14:43:58 2004//
// - CVS Reference       : /PITC_6079A.pl/1.2/Tue Nov  9 14:43:56 2004//
// - CVS Reference       : /WDTC_6080A.pl/1.3/Tue Nov  9 14:44:00 2004//
// - CVS Reference       : /VREG_6085B.pl/1.1/Tue Feb  1 16:05:48 2005//
// - CVS Reference       : /UDP_6083C.pl/1.1/Mon Jan 31 13:01:46 2005//
// - CVS Reference       : /AIC_6075A.pl/1.1/Fri Jun 28 10:36:48 2002//
// - CVS Reference       : /PIO_6057A.pl/1.2/Thu Feb  3 10:18:28 2005//
// - CVS Reference       : /DBGU_6059D.pl/1.1/Mon Jan 31 13:15:32 2005//
// - CVS Reference       : /US_6089C.pl/1.1/Mon Jul 12 18:23:26 2004//
// - CVS Reference       : /SPI_6088D.pl/1.2/Mon Feb 14 07:24:18 2005//
// - CVS Reference       : /SSC_6078A.pl/1.1/Tue Jul 13 07:45:40 2004//
// - CVS Reference       : /TC_6082A.pl/1.6/Fri Feb 18 13:53:30 2005//
// - CVS Reference       : /TWI_6061A.pl/1.1/Tue Jul 13 07:38:06 2004//
// - CVS Reference       : /PDC_6074C.pl/1.2/Thu Feb  3 08:48:54 2005//
// - CVS Reference       : /ADC_6051C.pl/1.1/Fri Oct 17 09:12:38 2003//
// - CVS Reference       : /PWM_6044D.pl/1.1/Tue Apr 27 14:53:52 2004//
// - ----------------------------------------------------------------------------

#ifndef AT91SAM7S64_H
#define AT91SAM7S64_H

#ifndef __ASSEMBLER__

typedef volatile unsigned int AT91_REG;// Hardware register definition

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR System Peripherals
// *****************************************************************************
typedef struct _AT91S_SYS {
    AT91_REG     AIC_SMR[32];   // Source Mode Register
    AT91_REG     AIC_SVR[32];   // Source Vector Register
    AT91_REG     AIC_IVR;   // IRQ Vector Register
    AT91_REG     AIC_FVR;   // FIQ Vector Register
    AT91_REG     AIC_ISR;   // Interrupt Status Register
    AT91_REG     AIC_IPR;   // Interrupt Pending Register
    AT91_REG     AIC_IMR;   // Interrupt Mask Register
    AT91_REG     AIC_CISR;  // Core Interrupt Status Register
    AT91_REG     Reserved0[2];  // 
    AT91_REG     AIC_IECR;  // Interrupt Enable Command Register
    AT91_REG     AIC_IDCR;  // Interrupt Disable Command Register
    AT91_REG     AIC_ICCR;  // Interrupt Clear Command Register
    AT91_REG     AIC_ISCR;  // Interrupt Set Command Register
    AT91_REG     AIC_EOICR;     // End of Interrupt Command Register
    AT91_REG     AIC_SPU;   // Spurious Vector Register
    AT91_REG     AIC_DCR;   // Debug Control Register (Protect)
    AT91_REG     Reserved1[1];  // 
    AT91_REG     AIC_FFER;  // Fast Forcing Enable Register
    AT91_REG     AIC_FFDR;  // Fast Forcing Disable Register
    AT91_REG     AIC_FFSR;  // Fast Forcing Status Register
    AT91_REG     Reserved2[45];     // 
    AT91_REG     DBGU_CR;   // Control Register
    AT91_REG     DBGU_MR;   // Mode Register
    AT91_REG     DBGU_IER;  // Interrupt Enable Register
    AT91_REG     DBGU_IDR;  // Interrupt Disable Register
    AT91_REG     DBGU_IMR;  // Interrupt Mask Register
    AT91_REG     DBGU_CSR;  // Channel Status Register
    AT91_REG     DBGU_RHR;  // Receiver Holding Register
    AT91_REG     DBGU_THR;  // Transmitter Holding Register
    AT91_REG     DBGU_BRGR;     // Baud Rate Generator Register
    AT91_REG     Reserved3[7];  // 
    AT91_REG     DBGU_CIDR;     // Chip ID Register
    AT91_REG     DBGU_EXID;     // Chip ID Extension Register
    AT91_REG     DBGU_FNTR;     // Force NTRST Register
    AT91_REG     Reserved4[45];     // 
    AT91_REG     DBGU_RPR;  // Receive Pointer Register
    AT91_REG     DBGU_RCR;  // Receive Counter Register
    AT91_REG     DBGU_TPR;  // Transmit Pointer Register
    AT91_REG     DBGU_TCR;  // Transmit Counter Register
    AT91_REG     DBGU_RNPR;     // Receive Next Pointer Register
    AT91_REG     DBGU_RNCR;     // Receive Next Counter Register
    AT91_REG     DBGU_TNPR;     // Transmit Next Pointer Register
    AT91_REG     DBGU_TNCR;     // Transmit Next Counter Register
    AT91_REG     DBGU_PTCR;     // PDC Transfer Control Register
    AT91_REG     DBGU_PTSR;     // PDC Transfer Status Register
    AT91_REG     Reserved5[54];     // 
    AT91_REG     PIOA_PER;  // PIO Enable Register
    AT91_REG     PIOA_PDR;  // PIO Disable Register
    AT91_REG     PIOA_PSR;  // PIO Status Register
    AT91_REG     Reserved6[1];  // 
    AT91_REG     PIOA_OER;  // Output Enable Register
    AT91_REG     PIOA_ODR;  // Output Disable Registerr
    AT91_REG     PIOA_OSR;  // Output Status Register
    AT91_REG     Reserved7[1];  // 
    AT91_REG     PIOA_IFER;     // Input Filter Enable Register
    AT91_REG     PIOA_IFDR;     // Input Filter Disable Register
    AT91_REG     PIOA_IFSR;     // Input Filter Status Register
    AT91_REG     Reserved8[1];  // 
    AT91_REG     PIOA_SODR;     // Set Output Data Register
    AT91_REG     PIOA_CODR;     // Clear Output Data Register
    AT91_REG     PIOA_ODSR;     // Output Data Status Register
    AT91_REG     PIOA_PDSR;     // Pin Data Status Register
    AT91_REG     PIOA_IER;  // Interrupt Enable Register
    AT91_REG     PIOA_IDR;  // Interrupt Disable Register
    AT91_REG     PIOA_IMR;  // Interrupt Mask Register
    AT91_REG     PIOA_ISR;  // Interrupt Status Register
    AT91_REG     PIOA_MDER;     // Multi-driver Enable Register
    AT91_REG     PIOA_MDDR;     // Multi-driver Disable Register
    AT91_REG     PIOA_MDSR;     // Multi-driver Status Register
    AT91_REG     Reserved9[1];  // 
    AT91_REG     PIOA_PPUDR;    // Pull-up Disable Register
    AT91_REG     PIOA_PPUER;    // Pull-up Enable Register
    AT91_REG     PIOA_PPUSR;    // Pull-up Status Register
    AT91_REG     Reserved10[1];     // 
    AT91_REG     PIOA_ASR;  // Select A Register
    AT91_REG     PIOA_BSR;  // Select B Register
    AT91_REG     PIOA_ABSR;     // AB Select Status Register
    AT91_REG     Reserved11[9];     // 
    AT91_REG     PIOA_OWER;     // Output Write Enable Register
    AT91_REG     PIOA_OWDR;     // Output Write Disable Register
    AT91_REG     PIOA_OWSR;     // Output Write Status Register
    AT91_REG     Reserved12[469];   // 
    AT91_REG     PMC_SCER;  // System Clock Enable Register
    AT91_REG     PMC_SCDR;  // System Clock Disable Register
    AT91_REG     PMC_SCSR;  // System Clock Status Register
    AT91_REG     Reserved13[1];     // 
    AT91_REG     PMC_PCER;  // Peripheral Clock Enable Register
    AT91_REG     PMC_PCDR;  // Peripheral Clock Disable Register
    AT91_REG     PMC_PCSR;  // Peripheral Clock Status Register
    AT91_REG     Reserved14[1];     // 
    AT91_REG     PMC_MOR;   // Main Oscillator Register
    AT91_REG     PMC_MCFR;  // Main Clock  Frequency Register
    AT91_REG     Reserved15[1];     // 
    AT91_REG     PMC_PLLR;  // PLL Register
    AT91_REG     PMC_MCKR;  // Master Clock Register
    AT91_REG     Reserved16[3];     // 
    AT91_REG     PMC_PCKR[3];   // Programmable Clock Register
    AT91_REG     Reserved17[5];     // 
    AT91_REG     PMC_IER;   // Interrupt Enable Register
    AT91_REG     PMC_IDR;   // Interrupt Disable Register
    AT91_REG     PMC_SR;    // Status Register
    AT91_REG     PMC_IMR;   // Interrupt Mask Register
    AT91_REG     Reserved18[36];    // 
    AT91_REG     RSTC_RCR;  // Reset Control Register
    AT91_REG     RSTC_RSR;  // Reset Status Register
    AT91_REG     RSTC_RMR;  // Reset Mode Register
    AT91_REG     Reserved19[5];     // 
    AT91_REG     RTTC_RTMR;     // Real-time Mode Register
    AT91_REG     RTTC_RTAR;     // Real-time Alarm Register
    AT91_REG     RTTC_RTVR;     // Real-time Value Register
    AT91_REG     RTTC_RTSR;     // Real-time Status Register
    AT91_REG     PITC_PIMR;     // Period Interval Mode Register
    AT91_REG     PITC_PISR;     // Period Interval Status Register
    AT91_REG     PITC_PIVR;     // Period Interval Value Register
    AT91_REG     PITC_PIIR;     // Period Interval Image Register
    AT91_REG     WDTC_WDCR;     // Watchdog Control Register
    AT91_REG     WDTC_WDMR;     // Watchdog Mode Register
    AT91_REG     WDTC_WDSR;     // Watchdog Status Register
    AT91_REG     Reserved20[5];     // 
    AT91_REG     VREG_MR;   // Voltage Regulator Mode Register
} AT91S_SYS, *AT91PS_SYS;


// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Advanced Interrupt Controller
// *****************************************************************************
typedef struct _AT91S_AIC {
    AT91_REG     AIC_SMR[32];   // Source Mode Register
    AT91_REG     AIC_SVR[32];   // Source Vector Register
    AT91_REG     AIC_IVR;   // IRQ Vector Register
    AT91_REG     AIC_FVR;   // FIQ Vector Register
    AT91_REG     AIC_ISR;   // Interrupt Status Register
    AT91_REG     AIC_IPR;   // Interrupt Pending Register
    AT91_REG     AIC_IMR;   // Interrupt Mask Register
    AT91_REG     AIC_CISR;  // Core Interrupt Status Register
    AT91_REG     Reserved0[2];  // 
    AT91_REG     AIC_IECR;  // Interrupt Enable Command Register
    AT91_REG     AIC_IDCR;  // Interrupt Disable Command Register
    AT91_REG     AIC_ICCR;  // Interrupt Clear Command Register
    AT91_REG     AIC_ISCR;  // Interrupt Set Command Register
    AT91_REG     AIC_EOICR;     // End of Interrupt Command Register
    AT91_REG     AIC_SPU;   // Spurious Vector Register
    AT91_REG     AIC_DCR;   // Debug Control Register (Protect)
    AT91_REG     Reserved1[1];  // 
    AT91_REG     AIC_FFER;  // Fast Forcing Enable Register
    AT91_REG     AIC_FFDR;  // Fast Forcing Disable Register
    AT91_REG     AIC_FFSR;  // Fast Forcing Status Register
} AT91S_AIC, *AT91PS_AIC;

// -------- AIC_SMR : (AIC Offset: 0x0) Control Register -------- 
#define AT91C_AIC_PRIOR       ((unsigned int) 0x7 <<  0) // (AIC) Priority Level
#define     AT91C_AIC_PRIOR_LOWEST               ((unsigned int) 0x0) // (AIC) Lowest priority level
#define     AT91C_AIC_PRIOR_HIGHEST              ((unsigned int) 0x7) // (AIC) Highest priority level
#define AT91C_AIC_SRCTYPE     ((unsigned int) 0x3 <<  5) // (AIC) Interrupt Source Type
#define     AT91C_AIC_SRCTYPE_INT_LEVEL_SENSITIVE  ((unsigned int) 0x0 <<  5) // (AIC) Internal Sources Code Label Level Sensitive
#define     AT91C_AIC_SRCTYPE_INT_EDGE_TRIGGERED   ((unsigned int) 0x1 <<  5) // (AIC) Internal Sources Code Label Edge triggered
#define     AT91C_AIC_SRCTYPE_EXT_HIGH_LEVEL       ((unsigned int) 0x2 <<  5) // (AIC) External Sources Code Label High-level Sensitive
#define     AT91C_AIC_SRCTYPE_EXT_POSITIVE_EDGE    ((unsigned int) 0x3 <<  5) // (AIC) External Sources Code Label Positive Edge triggered
// -------- AIC_CISR : (AIC Offset: 0x114) AIC Core Interrupt Status Register -------- 
#define AT91C_AIC_NFIQ        ((unsigned int) 0x1 <<  0) // (AIC) NFIQ Status
#define AT91C_AIC_NIRQ        ((unsigned int) 0x1 <<  1) // (AIC) NIRQ Status
// -------- AIC_DCR : (AIC Offset: 0x138) AIC Debug Control Register (Protect) -------- 
#define AT91C_AIC_DCR_PROT    ((unsigned int) 0x1 <<  0) // (AIC) Protection Mode
#define AT91C_AIC_DCR_GMSK    ((unsigned int) 0x1 <<  1) // (AIC) General Mask

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Peripheral DMA Controller
// *****************************************************************************
typedef struct _AT91S_PDC {
    AT91_REG     PDC_RPR;   // Receive Pointer Register
    AT91_REG     PDC_RCR;   // Receive Counter Register
    AT91_REG     PDC_TPR;   // Transmit Pointer Register
    AT91_REG     PDC_TCR;   // Transmit Counter Register
    AT91_REG     PDC_RNPR;  // Receive Next Pointer Register
    AT91_REG     PDC_RNCR;  // Receive Next Counter Register
    AT91_REG     PDC_TNPR;  // Transmit Next Pointer Register
    AT91_REG     PDC_TNCR;  // Transmit Next Counter Register
    AT91_REG     PDC_PTCR;  // PDC Transfer Control Register
    AT91_REG     PDC_PTSR;  // PDC Transfer Status Register
} AT91S_PDC, *AT91PS_PDC;

// -------- PDC_PTCR : (PDC Offset: 0x20) PDC Transfer Control Register -------- 
#define AT91C_PDC_RXTEN       ((unsigned int) 0x1 <<  0) // (PDC) Receiver Transfer Enable
#define AT91C_PDC_RXTDIS      ((unsigned int) 0x1 <<  1) // (PDC) Receiver Transfer Disable
#define AT91C_PDC_TXTEN       ((unsigned int) 0x1 <<  8) // (PDC) Transmitter Transfer Enable
#define AT91C_PDC_TXTDIS      ((unsigned int) 0x1 <<  9) // (PDC) Transmitter Transfer Disable
// -------- PDC_PTSR : (PDC Offset: 0x24) PDC Transfer Status Register -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Debug Unit
// *****************************************************************************
typedef struct _AT91S_DBGU {
    AT91_REG     DBGU_CR;   // Control Register
    AT91_REG     DBGU_MR;   // Mode Register
    AT91_REG     DBGU_IER;  // Interrupt Enable Register
    AT91_REG     DBGU_IDR;  // Interrupt Disable Register
    AT91_REG     DBGU_IMR;  // Interrupt Mask Register
    AT91_REG     DBGU_CSR;  // Channel Status Register
    AT91_REG     DBGU_RHR;  // Receiver Holding Register
    AT91_REG     DBGU_THR;  // Transmitter Holding Register
    AT91_REG     DBGU_BRGR;     // Baud Rate Generator Register
    AT91_REG     Reserved0[7];  // 
    AT91_REG     DBGU_CIDR;     // Chip ID Register
    AT91_REG     DBGU_EXID;     // Chip ID Extension Register
    AT91_REG     DBGU_FNTR;     // Force NTRST Register
    AT91_REG     Reserved1[45];     // 
    AT91_REG     DBGU_RPR;  // Receive Pointer Register
    AT91_REG     DBGU_RCR;  // Receive Counter Register
    AT91_REG     DBGU_TPR;  // Transmit Pointer Register
    AT91_REG     DBGU_TCR;  // Transmit Counter Register
    AT91_REG     DBGU_RNPR;     // Receive Next Pointer Register
    AT91_REG     DBGU_RNCR;     // Receive Next Counter Register
    AT91_REG     DBGU_TNPR;     // Transmit Next Pointer Register
    AT91_REG     DBGU_TNCR;     // Transmit Next Counter Register
    AT91_REG     DBGU_PTCR;     // PDC Transfer Control Register
    AT91_REG     DBGU_PTSR;     // PDC Transfer Status Register
} AT91S_DBGU, *AT91PS_DBGU;

// -------- DBGU_CR : (DBGU Offset: 0x0) Debug Unit Control Register -------- 
#define AT91C_US_RSTRX        ((unsigned int) 0x1 <<  2) // (DBGU) Reset Receiver
#define AT91C_US_RSTTX        ((unsigned int) 0x1 <<  3) // (DBGU) Reset Transmitter
#define AT91C_US_RXEN         ((unsigned int) 0x1 <<  4) // (DBGU) Receiver Enable
#define AT91C_US_RXDIS        ((unsigned int) 0x1 <<  5) // (DBGU) Receiver Disable
#define AT91C_US_TXEN         ((unsigned int) 0x1 <<  6) // (DBGU) Transmitter Enable
#define AT91C_US_TXDIS        ((unsigned int) 0x1 <<  7) // (DBGU) Transmitter Disable
#define AT91C_US_RSTSTA       ((unsigned int) 0x1 <<  8) // (DBGU) Reset Status Bits
// -------- DBGU_MR : (DBGU Offset: 0x4) Debug Unit Mode Register -------- 
#define AT91C_US_PAR          ((unsigned int) 0x7 <<  9) // (DBGU) Parity type
#define     AT91C_US_PAR_EVEN                 ((unsigned int) 0x0 <<  9) // (DBGU) Even Parity
#define     AT91C_US_PAR_ODD                  ((unsigned int) 0x1 <<  9) // (DBGU) Odd Parity
#define     AT91C_US_PAR_SPACE                ((unsigned int) 0x2 <<  9) // (DBGU) Parity forced to 0 (Space)
#define     AT91C_US_PAR_MARK                 ((unsigned int) 0x3 <<  9) // (DBGU) Parity forced to 1 (Mark)
#define     AT91C_US_PAR_NONE                 ((unsigned int) 0x4 <<  9) // (DBGU) No Parity
#define     AT91C_US_PAR_MULTI_DROP           ((unsigned int) 0x6 <<  9) // (DBGU) Multi-drop mode
#define AT91C_US_CHMODE       ((unsigned int) 0x3 << 14) // (DBGU) Channel Mode
#define     AT91C_US_CHMODE_NORMAL               ((unsigned int) 0x0 << 14) // (DBGU) Normal Mode: The USART channel operates as an RX/TX USART.
#define     AT91C_US_CHMODE_AUTO                 ((unsigned int) 0x1 << 14) // (DBGU) Automatic Echo: Receiver Data Input is connected to the TXD pin.
#define     AT91C_US_CHMODE_LOCAL                ((unsigned int) 0x2 << 14) // (DBGU) Local Loopback: Transmitter Output Signal is connected to Receiver Input Signal.
#define     AT91C_US_CHMODE_REMOTE               ((unsigned int) 0x3 << 14) // (DBGU) Remote Loopback: RXD pin is internally connected to TXD pin.
// -------- DBGU_IER : (DBGU Offset: 0x8) Debug Unit Interrupt Enable Register -------- 
#define AT91C_US_RXRDY        ((unsigned int) 0x1 <<  0) // (DBGU) RXRDY Interrupt
#define AT91C_US_TXRDY        ((unsigned int) 0x1 <<  1) // (DBGU) TXRDY Interrupt
#define AT91C_US_ENDRX        ((unsigned int) 0x1 <<  3) // (DBGU) End of Receive Transfer Interrupt
#define AT91C_US_ENDTX        ((unsigned int) 0x1 <<  4) // (DBGU) End of Transmit Interrupt
#define AT91C_US_OVRE         ((unsigned int) 0x1 <<  5) // (DBGU) Overrun Interrupt
#define AT91C_US_FRAME        ((unsigned int) 0x1 <<  6) // (DBGU) Framing Error Interrupt
#define AT91C_US_PARE         ((unsigned int) 0x1 <<  7) // (DBGU) Parity Error Interrupt
#define AT91C_US_TXEMPTY      ((unsigned int) 0x1 <<  9) // (DBGU) TXEMPTY Interrupt
#define AT91C_US_TXBUFE       ((unsigned int) 0x1 << 11) // (DBGU) TXBUFE Interrupt
#define AT91C_US_RXBUFF       ((unsigned int) 0x1 << 12) // (DBGU) RXBUFF Interrupt
#define AT91C_US_COMM_TX      ((unsigned int) 0x1 << 30) // (DBGU) COMM_TX Interrupt
#define AT91C_US_COMM_RX      ((unsigned int) 0x1 << 31) // (DBGU) COMM_RX Interrupt
// -------- DBGU_IDR : (DBGU Offset: 0xc) Debug Unit Interrupt Disable Register -------- 
// -------- DBGU_IMR : (DBGU Offset: 0x10) Debug Unit Interrupt Mask Register -------- 
// -------- DBGU_CSR : (DBGU Offset: 0x14) Debug Unit Channel Status Register -------- 
// -------- DBGU_FNTR : (DBGU Offset: 0x48) Debug Unit FORCE_NTRST Register -------- 
#define AT91C_US_FORCE_NTRST  ((unsigned int) 0x1 <<  0) // (DBGU) Force NTRST in JTAG

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Parallel Input Output Controler
// *****************************************************************************
typedef struct _AT91S_PIO {
    AT91_REG     PIO_PER;   // PIO Enable Register
    AT91_REG     PIO_PDR;   // PIO Disable Register
    AT91_REG     PIO_PSR;   // PIO Status Register
    AT91_REG     Reserved0[1];  // 
    AT91_REG     PIO_OER;   // Output Enable Register
    AT91_REG     PIO_ODR;   // Output Disable Registerr
    AT91_REG     PIO_OSR;   // Output Status Register
    AT91_REG     Reserved1[1];  // 
    AT91_REG     PIO_IFER;  // Input Filter Enable Register
    AT91_REG     PIO_IFDR;  // Input Filter Disable Register
    AT91_REG     PIO_IFSR;  // Input Filter Status Register
    AT91_REG     Reserved2[1];  // 
    AT91_REG     PIO_SODR;  // Set Output Data Register
    AT91_REG     PIO_CODR;  // Clear Output Data Register
    AT91_REG     PIO_ODSR;  // Output Data Status Register
    AT91_REG     PIO_PDSR;  // Pin Data Status Register
    AT91_REG     PIO_IER;   // Interrupt Enable Register
    AT91_REG     PIO_IDR;   // Interrupt Disable Register
    AT91_REG     PIO_IMR;   // Interrupt Mask Register
    AT91_REG     PIO_ISR;   // Interrupt Status Register
    AT91_REG     PIO_MDER;  // Multi-driver Enable Register
    AT91_REG     PIO_MDDR;  // Multi-driver Disable Register
    AT91_REG     PIO_MDSR;  // Multi-driver Status Register
    AT91_REG     Reserved3[1];  // 
    AT91_REG     PIO_PPUDR;     // Pull-up Disable Register
    AT91_REG     PIO_PPUER;     // Pull-up Enable Register
    AT91_REG     PIO_PPUSR;     // Pull-up Status Register
    AT91_REG     Reserved4[1];  // 
    AT91_REG     PIO_ASR;   // Select A Register
    AT91_REG     PIO_BSR;   // Select B Register
    AT91_REG     PIO_ABSR;  // AB Select Status Register
    AT91_REG     Reserved5[9];  // 
    AT91_REG     PIO_OWER;  // Output Write Enable Register
    AT91_REG     PIO_OWDR;  // Output Write Disable Register
    AT91_REG     PIO_OWSR;  // Output Write Status Register
} AT91S_PIO, *AT91PS_PIO;


// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Clock Generator Controler
// *****************************************************************************
typedef struct _AT91S_CKGR {
    AT91_REG     CKGR_MOR;  // Main Oscillator Register
    AT91_REG     CKGR_MCFR;     // Main Clock  Frequency Register
    AT91_REG     Reserved0[1];  // 
    AT91_REG     CKGR_PLLR;     // PLL Register
} AT91S_CKGR, *AT91PS_CKGR;

// -------- CKGR_MOR : (CKGR Offset: 0x0) Main Oscillator Register -------- 
#define AT91C_CKGR_MOSCEN     ((unsigned int) 0x1 <<  0) // (CKGR) Main Oscillator Enable
#define AT91C_CKGR_OSCBYPASS  ((unsigned int) 0x1 <<  1) // (CKGR) Main Oscillator Bypass
#define AT91C_CKGR_OSCOUNT    ((unsigned int) 0xFF <<  8) // (CKGR) Main Oscillator Start-up Time
// -------- CKGR_MCFR : (CKGR Offset: 0x4) Main Clock Frequency Register -------- 
#define AT91C_CKGR_MAINF      ((unsigned int) 0xFFFF <<  0) // (CKGR) Main Clock Frequency
#define AT91C_CKGR_MAINRDY    ((unsigned int) 0x1 << 16) // (CKGR) Main Clock Ready
// -------- CKGR_PLLR : (CKGR Offset: 0xc) PLL B Register -------- 
#define AT91C_CKGR_DIV        ((unsigned int) 0xFF <<  0) // (CKGR) Divider Selected
#define     AT91C_CKGR_DIV_0                    ((unsigned int) 0x0) // (CKGR) Divider output is 0
#define     AT91C_CKGR_DIV_BYPASS               ((unsigned int) 0x1) // (CKGR) Divider is bypassed
#define AT91C_CKGR_PLLCOUNT   ((unsigned int) 0x3F <<  8) // (CKGR) PLL Counter
#define AT91C_CKGR_OUT        ((unsigned int) 0x3 << 14) // (CKGR) PLL Output Frequency Range
#define     AT91C_CKGR_OUT_0                    ((unsigned int) 0x0 << 14) // (CKGR) Please refer to the PLL datasheet
#define     AT91C_CKGR_OUT_1                    ((unsigned int) 0x1 << 14) // (CKGR) Please refer to the PLL datasheet
#define     AT91C_CKGR_OUT_2                    ((unsigned int) 0x2 << 14) // (CKGR) Please refer to the PLL datasheet
#define     AT91C_CKGR_OUT_3                    ((unsigned int) 0x3 << 14) // (CKGR) Please refer to the PLL datasheet
#define AT91C_CKGR_MUL        ((unsigned int) 0x7FF << 16) // (CKGR) PLL Multiplier
#define AT91C_CKGR_USBDIV     ((unsigned int) 0x3 << 28) // (CKGR) Divider for USB Clocks
#define     AT91C_CKGR_USBDIV_0                    ((unsigned int) 0x0 << 28) // (CKGR) Divider output is PLL clock output
#define     AT91C_CKGR_USBDIV_1                    ((unsigned int) 0x1 << 28) // (CKGR) Divider output is PLL clock output divided by 2
#define     AT91C_CKGR_USBDIV_2                    ((unsigned int) 0x2 << 28) // (CKGR) Divider output is PLL clock output divided by 4

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Power Management Controler
// *****************************************************************************
typedef struct _AT91S_PMC {
    AT91_REG     PMC_SCER;  // System Clock Enable Register
    AT91_REG     PMC_SCDR;  // System Clock Disable Register
    AT91_REG     PMC_SCSR;  // System Clock Status Register
    AT91_REG     Reserved0[1];  // 
    AT91_REG     PMC_PCER;  // Peripheral Clock Enable Register
    AT91_REG     PMC_PCDR;  // Peripheral Clock Disable Register
    AT91_REG     PMC_PCSR;  // Peripheral Clock Status Register
    AT91_REG     Reserved1[1];  // 
    AT91_REG     PMC_MOR;   // Main Oscillator Register
    AT91_REG     PMC_MCFR;  // Main Clock  Frequency Register
    AT91_REG     Reserved2[1];  // 
    AT91_REG     PMC_PLLR;  // PLL Register
    AT91_REG     PMC_MCKR;  // Master Clock Register
    AT91_REG     Reserved3[3];  // 
    AT91_REG     PMC_PCKR[3];   // Programmable Clock Register
    AT91_REG     Reserved4[5];  // 
    AT91_REG     PMC_IER;   // Interrupt Enable Register
    AT91_REG     PMC_IDR;   // Interrupt Disable Register
    AT91_REG     PMC_SR;    // Status Register
    AT91_REG     PMC_IMR;   // Interrupt Mask Register
} AT91S_PMC, *AT91PS_PMC;

// -------- PMC_SCER : (PMC Offset: 0x0) System Clock Enable Register -------- 
#define AT91C_PMC_PCK         ((unsigned int) 0x1 <<  0) // (PMC) Processor Clock
#define AT91C_PMC_UDP         ((unsigned int) 0x1 <<  7) // (PMC) USB Device Port Clock
#define AT91C_PMC_PCK0        ((unsigned int) 0x1 <<  8) // (PMC) Programmable Clock Output
#define AT91C_PMC_PCK1        ((unsigned int) 0x1 <<  9) // (PMC) Programmable Clock Output
#define AT91C_PMC_PCK2        ((unsigned int) 0x1 << 10) // (PMC) Programmable Clock Output
// -------- PMC_SCDR : (PMC Offset: 0x4) System Clock Disable Register -------- 
// -------- PMC_SCSR : (PMC Offset: 0x8) System Clock Status Register -------- 
// -------- CKGR_MOR : (PMC Offset: 0x20) Main Oscillator Register -------- 
// -------- CKGR_MCFR : (PMC Offset: 0x24) Main Clock Frequency Register -------- 
// -------- CKGR_PLLR : (PMC Offset: 0x2c) PLL B Register -------- 
// -------- PMC_MCKR : (PMC Offset: 0x30) Master Clock Register -------- 
#define AT91C_PMC_CSS         ((unsigned int) 0x3 <<  0) // (PMC) Programmable Clock Selection
#define     AT91C_PMC_CSS_SLOW_CLK             ((unsigned int) 0x0) // (PMC) Slow Clock is selected
#define     AT91C_PMC_CSS_MAIN_CLK             ((unsigned int) 0x1) // (PMC) Main Clock is selected
#define     AT91C_PMC_CSS_PLL_CLK              ((unsigned int) 0x3) // (PMC) Clock from PLL is selected
#define AT91C_PMC_PRES        ((unsigned int) 0x7 <<  2) // (PMC) Programmable Clock Prescaler
#define     AT91C_PMC_PRES_CLK                  ((unsigned int) 0x0 <<  2) // (PMC) Selected clock
#define     AT91C_PMC_PRES_CLK_2                ((unsigned int) 0x1 <<  2) // (PMC) Selected clock divided by 2
#define     AT91C_PMC_PRES_CLK_4                ((unsigned int) 0x2 <<  2) // (PMC) Selected clock divided by 4
#define     AT91C_PMC_PRES_CLK_8                ((unsigned int) 0x3 <<  2) // (PMC) Selected clock divided by 8
#define     AT91C_PMC_PRES_CLK_16               ((unsigned int) 0x4 <<  2) // (PMC) Selected clock divided by 16
#define     AT91C_PMC_PRES_CLK_32               ((unsigned int) 0x5 <<  2) // (PMC) Selected clock divided by 32
#define     AT91C_PMC_PRES_CLK_64               ((unsigned int) 0x6 <<  2) // (PMC) Selected clock divided by 64
// -------- PMC_PCKR : (PMC Offset: 0x40) Programmable Clock Register -------- 
// -------- PMC_IER : (PMC Offset: 0x60) PMC Interrupt Enable Register -------- 
#define AT91C_PMC_MOSCS       ((unsigned int) 0x1 <<  0) // (PMC) MOSC Status/Enable/Disable/Mask
#define AT91C_PMC_LOCK        ((unsigned int) 0x1 <<  2) // (PMC) PLL Status/Enable/Disable/Mask
#define AT91C_PMC_MCKRDY      ((unsigned int) 0x1 <<  3) // (PMC) MCK_RDY Status/Enable/Disable/Mask
#define AT91C_PMC_PCK0RDY     ((unsigned int) 0x1 <<  8) // (PMC) PCK0_RDY Status/Enable/Disable/Mask
#define AT91C_PMC_PCK1RDY     ((unsigned int) 0x1 <<  9) // (PMC) PCK1_RDY Status/Enable/Disable/Mask
#define AT91C_PMC_PCK2RDY     ((unsigned int) 0x1 << 10) // (PMC) PCK2_RDY Status/Enable/Disable/Mask
// -------- PMC_IDR : (PMC Offset: 0x64) PMC Interrupt Disable Register -------- 
// -------- PMC_SR : (PMC Offset: 0x68) PMC Status Register -------- 
// -------- PMC_IMR : (PMC Offset: 0x6c) PMC Interrupt Mask Register -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Reset Controller Interface
// *****************************************************************************
typedef struct _AT91S_RSTC {
    AT91_REG     RSTC_RCR;  // Reset Control Register
    AT91_REG     RSTC_RSR;  // Reset Status Register
    AT91_REG     RSTC_RMR;  // Reset Mode Register
} AT91S_RSTC, *AT91PS_RSTC;

// -------- RSTC_RCR : (RSTC Offset: 0x0) Reset Control Register -------- 
#define AT91C_RSTC_PROCRST    ((unsigned int) 0x1 <<  0) // (RSTC) Processor Reset
#define AT91C_RSTC_PERRST     ((unsigned int) 0x1 <<  2) // (RSTC) Peripheral Reset
#define AT91C_RSTC_EXTRST     ((unsigned int) 0x1 <<  3) // (RSTC) External Reset
#define AT91C_RSTC_KEY        ((unsigned int) 0xFF << 24) // (RSTC) Password
// -------- RSTC_RSR : (RSTC Offset: 0x4) Reset Status Register -------- 
#define AT91C_RSTC_URSTS      ((unsigned int) 0x1 <<  0) // (RSTC) User Reset Status
#define AT91C_RSTC_BODSTS     ((unsigned int) 0x1 <<  1) // (RSTC) Brownout Detection Status
#define AT91C_RSTC_RSTTYP     ((unsigned int) 0x7 <<  8) // (RSTC) Reset Type
#define     AT91C_RSTC_RSTTYP_POWERUP              ((unsigned int) 0x0 <<  8) // (RSTC) Power-up Reset. VDDCORE rising.
#define     AT91C_RSTC_RSTTYP_WAKEUP               ((unsigned int) 0x1 <<  8) // (RSTC) WakeUp Reset. VDDCORE rising.
#define     AT91C_RSTC_RSTTYP_WATCHDOG             ((unsigned int) 0x2 <<  8) // (RSTC) Watchdog Reset. Watchdog overflow occured.
#define     AT91C_RSTC_RSTTYP_SOFTWARE             ((unsigned int) 0x3 <<  8) // (RSTC) Software Reset. Processor reset required by the software.
#define     AT91C_RSTC_RSTTYP_USER                 ((unsigned int) 0x4 <<  8) // (RSTC) User Reset. NRST pin detected low.
#define     AT91C_RSTC_RSTTYP_BROWNOUT             ((unsigned int) 0x5 <<  8) // (RSTC) Brownout Reset occured.
#define AT91C_RSTC_NRSTL      ((unsigned int) 0x1 << 16) // (RSTC) NRST pin level
#define AT91C_RSTC_SRCMP      ((unsigned int) 0x1 << 17) // (RSTC) Software Reset Command in Progress.
// -------- RSTC_RMR : (RSTC Offset: 0x8) Reset Mode Register -------- 
#define AT91C_RSTC_URSTEN     ((unsigned int) 0x1 <<  0) // (RSTC) User Reset Enable
#define AT91C_RSTC_URSTIEN    ((unsigned int) 0x1 <<  4) // (RSTC) User Reset Interrupt Enable
#define AT91C_RSTC_ERSTL      ((unsigned int) 0xF <<  8) // (RSTC) User Reset Enable
#define AT91C_RSTC_BODIEN     ((unsigned int) 0x1 << 16) // (RSTC) Brownout Detection Interrupt Enable

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Real Time Timer Controller Interface
// *****************************************************************************
typedef struct _AT91S_RTTC {
    AT91_REG     RTTC_RTMR;     // Real-time Mode Register
    AT91_REG     RTTC_RTAR;     // Real-time Alarm Register
    AT91_REG     RTTC_RTVR;     // Real-time Value Register
    AT91_REG     RTTC_RTSR;     // Real-time Status Register
} AT91S_RTTC, *AT91PS_RTTC;

// -------- RTTC_RTMR : (RTTC Offset: 0x0) Real-time Mode Register -------- 
#define AT91C_RTTC_RTPRES     ((unsigned int) 0xFFFF <<  0) // (RTTC) Real-time Timer Prescaler Value
#define AT91C_RTTC_ALMIEN     ((unsigned int) 0x1 << 16) // (RTTC) Alarm Interrupt Enable
#define AT91C_RTTC_RTTINCIEN  ((unsigned int) 0x1 << 17) // (RTTC) Real Time Timer Increment Interrupt Enable
#define AT91C_RTTC_RTTRST     ((unsigned int) 0x1 << 18) // (RTTC) Real Time Timer Restart
// -------- RTTC_RTAR : (RTTC Offset: 0x4) Real-time Alarm Register -------- 
#define AT91C_RTTC_ALMV       ((unsigned int) 0x0 <<  0) // (RTTC) Alarm Value
// -------- RTTC_RTVR : (RTTC Offset: 0x8) Current Real-time Value Register -------- 
#define AT91C_RTTC_CRTV       ((unsigned int) 0x0 <<  0) // (RTTC) Current Real-time Value
// -------- RTTC_RTSR : (RTTC Offset: 0xc) Real-time Status Register -------- 
#define AT91C_RTTC_ALMS       ((unsigned int) 0x1 <<  0) // (RTTC) Real-time Alarm Status
#define AT91C_RTTC_RTTINC     ((unsigned int) 0x1 <<  1) // (RTTC) Real-time Timer Increment

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Periodic Interval Timer Controller Interface
// *****************************************************************************
typedef struct _AT91S_PITC {
    AT91_REG     PITC_PIMR;     // Period Interval Mode Register
    AT91_REG     PITC_PISR;     // Period Interval Status Register
    AT91_REG     PITC_PIVR;     // Period Interval Value Register
    AT91_REG     PITC_PIIR;     // Period Interval Image Register
} AT91S_PITC, *AT91PS_PITC;

// -------- PITC_PIMR : (PITC Offset: 0x0) Periodic Interval Mode Register -------- 
#define AT91C_PITC_PIV        ((unsigned int) 0xFFFFF <<  0) // (PITC) Periodic Interval Value
#define AT91C_PITC_PITEN      ((unsigned int) 0x1 << 24) // (PITC) Periodic Interval Timer Enabled
#define AT91C_PITC_PITIEN     ((unsigned int) 0x1 << 25) // (PITC) Periodic Interval Timer Interrupt Enable
// -------- PITC_PISR : (PITC Offset: 0x4) Periodic Interval Status Register -------- 
#define AT91C_PITC_PITS       ((unsigned int) 0x1 <<  0) // (PITC) Periodic Interval Timer Status
// -------- PITC_PIVR : (PITC Offset: 0x8) Periodic Interval Value Register -------- 
#define AT91C_PITC_CPIV       ((unsigned int) 0xFFFFF <<  0) // (PITC) Current Periodic Interval Value
#define AT91C_PITC_PICNT      ((unsigned int) 0xFFF << 20) // (PITC) Periodic Interval Counter
// -------- PITC_PIIR : (PITC Offset: 0xc) Periodic Interval Image Register -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Watchdog Timer Controller Interface
// *****************************************************************************
typedef struct _AT91S_WDTC {
    AT91_REG     WDTC_WDCR;     // Watchdog Control Register
    AT91_REG     WDTC_WDMR;     // Watchdog Mode Register
    AT91_REG     WDTC_WDSR;     // Watchdog Status Register
} AT91S_WDTC, *AT91PS_WDTC;

// -------- WDTC_WDCR : (WDTC Offset: 0x0) Periodic Interval Image Register -------- 
#define AT91C_WDTC_WDRSTT     ((unsigned int) 0x1 <<  0) // (WDTC) Watchdog Restart
#define AT91C_WDTC_KEY        ((unsigned int) 0xFF << 24) // (WDTC) Watchdog KEY Password
// -------- WDTC_WDMR : (WDTC Offset: 0x4) Watchdog Mode Register -------- 
#define AT91C_WDTC_WDV        ((unsigned int) 0xFFF <<  0) // (WDTC) Watchdog Timer Restart
#define AT91C_WDTC_WDFIEN     ((unsigned int) 0x1 << 12) // (WDTC) Watchdog Fault Interrupt Enable
#define AT91C_WDTC_WDRSTEN    ((unsigned int) 0x1 << 13) // (WDTC) Watchdog Reset Enable
#define AT91C_WDTC_WDRPROC    ((unsigned int) 0x1 << 14) // (WDTC) Watchdog Timer Restart
#define AT91C_WDTC_WDDIS      ((unsigned int) 0x1 << 15) // (WDTC) Watchdog Disable
#define AT91C_WDTC_WDD        ((unsigned int) 0xFFF << 16) // (WDTC) Watchdog Delta Value
#define AT91C_WDTC_WDDBGHLT   ((unsigned int) 0x1 << 28) // (WDTC) Watchdog Debug Halt
#define AT91C_WDTC_WDIDLEHLT  ((unsigned int) 0x1 << 29) // (WDTC) Watchdog Idle Halt
// -------- WDTC_WDSR : (WDTC Offset: 0x8) Watchdog Status Register -------- 
#define AT91C_WDTC_WDUNF      ((unsigned int) 0x1 <<  0) // (WDTC) Watchdog Underflow
#define AT91C_WDTC_WDERR      ((unsigned int) 0x1 <<  1) // (WDTC) Watchdog Error

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Voltage Regulator Mode Controller Interface
// *****************************************************************************
typedef struct _AT91S_VREG {
    AT91_REG     VREG_MR;   // Voltage Regulator Mode Register
} AT91S_VREG, *AT91PS_VREG;

// -------- VREG_MR : (VREG Offset: 0x0) Voltage Regulator Mode Register -------- 
#define AT91C_VREG_PSTDBY     ((unsigned int) 0x1 <<  0) // (VREG) Voltage Regulator Power Standby Mode

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Memory Controller Interface
// *****************************************************************************
typedef struct _AT91S_MC {
    AT91_REG     MC_RCR;    // MC Remap Control Register
    AT91_REG     MC_ASR;    // MC Abort Status Register
    AT91_REG     MC_AASR;   // MC Abort Address Status Register
    AT91_REG     Reserved0[21];     // 
    AT91_REG     MC_FMR;    // MC Flash Mode Register
    AT91_REG     MC_FCR;    // MC Flash Command Register
    AT91_REG     MC_FSR;    // MC Flash Status Register
} AT91S_MC, *AT91PS_MC;

// -------- MC_RCR : (MC Offset: 0x0) MC Remap Control Register -------- 
#define AT91C_MC_RCB          ((unsigned int) 0x1 <<  0) // (MC) Remap Command Bit
// -------- MC_ASR : (MC Offset: 0x4) MC Abort Status Register -------- 
#define AT91C_MC_UNDADD       ((unsigned int) 0x1 <<  0) // (MC) Undefined Addess Abort Status
#define AT91C_MC_MISADD       ((unsigned int) 0x1 <<  1) // (MC) Misaligned Addess Abort Status
#define AT91C_MC_ABTSZ        ((unsigned int) 0x3 <<  8) // (MC) Abort Size Status
#define     AT91C_MC_ABTSZ_BYTE                 ((unsigned int) 0x0 <<  8) // (MC) Byte
#define     AT91C_MC_ABTSZ_HWORD                ((unsigned int) 0x1 <<  8) // (MC) Half-uint16_t
#define     AT91C_MC_ABTSZ_WORD                 ((unsigned int) 0x2 <<  8) // (MC) Word
#define AT91C_MC_ABTTYP       ((unsigned int) 0x3 << 10) // (MC) Abort Type Status
#define     AT91C_MC_ABTTYP_DATAR                ((unsigned int) 0x0 << 10) // (MC) Data Read
#define     AT91C_MC_ABTTYP_DATAW                ((unsigned int) 0x1 << 10) // (MC) Data Write
#define     AT91C_MC_ABTTYP_FETCH                ((unsigned int) 0x2 << 10) // (MC) Code Fetch
#define AT91C_MC_MST0         ((unsigned int) 0x1 << 16) // (MC) Master 0 Abort Source
#define AT91C_MC_MST1         ((unsigned int) 0x1 << 17) // (MC) Master 1 Abort Source
#define AT91C_MC_SVMST0       ((unsigned int) 0x1 << 24) // (MC) Saved Master 0 Abort Source
#define AT91C_MC_SVMST1       ((unsigned int) 0x1 << 25) // (MC) Saved Master 1 Abort Source
// -------- MC_FMR : (MC Offset: 0x60) MC Flash Mode Register -------- 
#define AT91C_MC_FRDY         ((unsigned int) 0x1 <<  0) // (MC) Flash Ready
#define AT91C_MC_LOCKE        ((unsigned int) 0x1 <<  2) // (MC) Lock Error
#define AT91C_MC_PROGE        ((unsigned int) 0x1 <<  3) // (MC) Programming Error
#define AT91C_MC_NEBP         ((unsigned int) 0x1 <<  7) // (MC) No Erase Before Programming
#define AT91C_MC_FWS          ((unsigned int) 0x3 <<  8) // (MC) Flash Wait State
#define     AT91C_MC_FWS_0FWS                 ((unsigned int) 0x0 <<  8) // (MC) 1 cycle for Read, 2 for Write operations
#define     AT91C_MC_FWS_1FWS                 ((unsigned int) 0x1 <<  8) // (MC) 2 cycles for Read, 3 for Write operations
#define     AT91C_MC_FWS_2FWS                 ((unsigned int) 0x2 <<  8) // (MC) 3 cycles for Read, 4 for Write operations
#define     AT91C_MC_FWS_3FWS                 ((unsigned int) 0x3 <<  8) // (MC) 4 cycles for Read, 4 for Write operations
#define AT91C_MC_FMCN         ((unsigned int) 0xFF << 16) // (MC) Flash Microsecond Cycle Number
// -------- MC_FCR : (MC Offset: 0x64) MC Flash Command Register -------- 
#define AT91C_MC_FCMD         ((unsigned int) 0xF <<  0) // (MC) Flash Command
#define     AT91C_MC_FCMD_START_PROG           ((unsigned int) 0x1) // (MC) Starts the programming of th epage specified by PAGEN.
#define     AT91C_MC_FCMD_LOCK                 ((unsigned int) 0x2) // (MC) Starts a lock sequence of the sector defined by the bits 4 to 7 of the field PAGEN.
#define     AT91C_MC_FCMD_PROG_AND_LOCK        ((unsigned int) 0x3) // (MC) The lock sequence automatically happens after the programming sequence is completed.
#define     AT91C_MC_FCMD_UNLOCK               ((unsigned int) 0x4) // (MC) Starts an unlock sequence of the sector defined by the bits 4 to 7 of the field PAGEN.
#define     AT91C_MC_FCMD_ERASE_ALL            ((unsigned int) 0x8) // (MC) Starts the erase of the entire flash.If at least a page is locked, the command is cancelled.
#define     AT91C_MC_FCMD_SET_GP_NVM           ((unsigned int) 0xB) // (MC) Set General Purpose NVM bits.
#define     AT91C_MC_FCMD_CLR_GP_NVM           ((unsigned int) 0xD) // (MC) Clear General Purpose NVM bits.
#define     AT91C_MC_FCMD_SET_SECURITY         ((unsigned int) 0xF) // (MC) Set Security Bit.
#define AT91C_MC_PAGEN        ((unsigned int) 0x3FF <<  8) // (MC) Page Number
#define AT91C_MC_KEY          ((unsigned int) 0xFF << 24) // (MC) Writing Protect Key
// -------- MC_FSR : (MC Offset: 0x68) MC Flash Command Register -------- 
#define AT91C_MC_SECURITY     ((unsigned int) 0x1 <<  4) // (MC) Security Bit Status
#define AT91C_MC_GPNVM0       ((unsigned int) 0x1 <<  8) // (MC) Sector 0 Lock Status
#define AT91C_MC_GPNVM1       ((unsigned int) 0x1 <<  9) // (MC) Sector 1 Lock Status
#define AT91C_MC_GPNVM2       ((unsigned int) 0x1 << 10) // (MC) Sector 2 Lock Status
#define AT91C_MC_GPNVM3       ((unsigned int) 0x1 << 11) // (MC) Sector 3 Lock Status
#define AT91C_MC_GPNVM4       ((unsigned int) 0x1 << 12) // (MC) Sector 4 Lock Status
#define AT91C_MC_GPNVM5       ((unsigned int) 0x1 << 13) // (MC) Sector 5 Lock Status
#define AT91C_MC_GPNVM6       ((unsigned int) 0x1 << 14) // (MC) Sector 6 Lock Status
#define AT91C_MC_GPNVM7       ((unsigned int) 0x1 << 15) // (MC) Sector 7 Lock Status
#define AT91C_MC_LOCKS0       ((unsigned int) 0x1 << 16) // (MC) Sector 0 Lock Status
#define AT91C_MC_LOCKS1       ((unsigned int) 0x1 << 17) // (MC) Sector 1 Lock Status
#define AT91C_MC_LOCKS2       ((unsigned int) 0x1 << 18) // (MC) Sector 2 Lock Status
#define AT91C_MC_LOCKS3       ((unsigned int) 0x1 << 19) // (MC) Sector 3 Lock Status
#define AT91C_MC_LOCKS4       ((unsigned int) 0x1 << 20) // (MC) Sector 4 Lock Status
#define AT91C_MC_LOCKS5       ((unsigned int) 0x1 << 21) // (MC) Sector 5 Lock Status
#define AT91C_MC_LOCKS6       ((unsigned int) 0x1 << 22) // (MC) Sector 6 Lock Status
#define AT91C_MC_LOCKS7       ((unsigned int) 0x1 << 23) // (MC) Sector 7 Lock Status
#define AT91C_MC_LOCKS8       ((unsigned int) 0x1 << 24) // (MC) Sector 8 Lock Status
#define AT91C_MC_LOCKS9       ((unsigned int) 0x1 << 25) // (MC) Sector 9 Lock Status
#define AT91C_MC_LOCKS10      ((unsigned int) 0x1 << 26) // (MC) Sector 10 Lock Status
#define AT91C_MC_LOCKS11      ((unsigned int) 0x1 << 27) // (MC) Sector 11 Lock Status
#define AT91C_MC_LOCKS12      ((unsigned int) 0x1 << 28) // (MC) Sector 12 Lock Status
#define AT91C_MC_LOCKS13      ((unsigned int) 0x1 << 29) // (MC) Sector 13 Lock Status
#define AT91C_MC_LOCKS14      ((unsigned int) 0x1 << 30) // (MC) Sector 14 Lock Status
#define AT91C_MC_LOCKS15      ((unsigned int) 0x1 << 31) // (MC) Sector 15 Lock Status

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Serial Parallel Interface
// *****************************************************************************
typedef struct _AT91S_SPI {
    AT91_REG     SPI_CR;    // Control Register
    AT91_REG     SPI_MR;    // Mode Register
    AT91_REG     SPI_RDR;   // Receive Data Register
    AT91_REG     SPI_TDR;   // Transmit Data Register
    AT91_REG     SPI_SR;    // Status Register
    AT91_REG     SPI_IER;   // Interrupt Enable Register
    AT91_REG     SPI_IDR;   // Interrupt Disable Register
    AT91_REG     SPI_IMR;   // Interrupt Mask Register
    AT91_REG     Reserved0[4];  // 
    AT91_REG     SPI_CSR[4];    // Chip Select Register
    AT91_REG     Reserved1[48];     // 
    AT91_REG     SPI_RPR;   // Receive Pointer Register
    AT91_REG     SPI_RCR;   // Receive Counter Register
    AT91_REG     SPI_TPR;   // Transmit Pointer Register
    AT91_REG     SPI_TCR;   // Transmit Counter Register
    AT91_REG     SPI_RNPR;  // Receive Next Pointer Register
    AT91_REG     SPI_RNCR;  // Receive Next Counter Register
    AT91_REG     SPI_TNPR;  // Transmit Next Pointer Register
    AT91_REG     SPI_TNCR;  // Transmit Next Counter Register
    AT91_REG     SPI_PTCR;  // PDC Transfer Control Register
    AT91_REG     SPI_PTSR;  // PDC Transfer Status Register
} AT91S_SPI, *AT91PS_SPI;

// -------- SPI_CR : (SPI Offset: 0x0) SPI Control Register -------- 
#define AT91C_SPI_SPIEN       ((unsigned int) 0x1 <<  0) // (SPI) SPI Enable
#define AT91C_SPI_SPIDIS      ((unsigned int) 0x1 <<  1) // (SPI) SPI Disable
#define AT91C_SPI_SWRST       ((unsigned int) 0x1 <<  7) // (SPI) SPI Software reset
#define AT91C_SPI_LASTXFER    ((unsigned int) 0x1 << 24) // (SPI) SPI Last Transfer
// -------- SPI_MR : (SPI Offset: 0x4) SPI Mode Register -------- 
#define AT91C_SPI_MSTR        ((unsigned int) 0x1 <<  0) // (SPI) Master/Slave Mode
#define AT91C_SPI_PS          ((unsigned int) 0x1 <<  1) // (SPI) Peripheral Select
#define     AT91C_SPI_PS_FIXED                ((unsigned int) 0x0 <<  1) // (SPI) Fixed Peripheral Select
#define     AT91C_SPI_PS_VARIABLE             ((unsigned int) 0x1 <<  1) // (SPI) Variable Peripheral Select
#define AT91C_SPI_PCSDEC      ((unsigned int) 0x1 <<  2) // (SPI) Chip Select Decode
#define AT91C_SPI_FDIV        ((unsigned int) 0x1 <<  3) // (SPI) Clock Selection
#define AT91C_SPI_MODFDIS     ((unsigned int) 0x1 <<  4) // (SPI) Mode Fault Detection
#define AT91C_SPI_LLB         ((unsigned int) 0x1 <<  7) // (SPI) Clock Selection
#define AT91C_SPI_PCS         ((unsigned int) 0xF << 16) // (SPI) Peripheral Chip Select
#define AT91C_SPI_DLYBCS      ((unsigned int) 0xFF << 24) // (SPI) Delay Between Chip Selects
// -------- SPI_RDR : (SPI Offset: 0x8) Receive Data Register -------- 
#define AT91C_SPI_RD          ((unsigned int) 0xFFFF <<  0) // (SPI) Receive Data
#define AT91C_SPI_RPCS        ((unsigned int) 0xF << 16) // (SPI) Peripheral Chip Select Status
// -------- SPI_TDR : (SPI Offset: 0xc) Transmit Data Register -------- 
#define AT91C_SPI_TD          ((unsigned int) 0xFFFF <<  0) // (SPI) Transmit Data
#define AT91C_SPI_TPCS        ((unsigned int) 0xF << 16) // (SPI) Peripheral Chip Select Status
// -------- SPI_SR : (SPI Offset: 0x10) Status Register -------- 
#define AT91C_SPI_RDRF        ((unsigned int) 0x1 <<  0) // (SPI) Receive Data Register Full
#define AT91C_SPI_TDRE        ((unsigned int) 0x1 <<  1) // (SPI) Transmit Data Register Empty
#define AT91C_SPI_MODF        ((unsigned int) 0x1 <<  2) // (SPI) Mode Fault Error
#define AT91C_SPI_OVRES       ((unsigned int) 0x1 <<  3) // (SPI) Overrun Error Status
#define AT91C_SPI_ENDRX       ((unsigned int) 0x1 <<  4) // (SPI) End of Receiver Transfer
#define AT91C_SPI_ENDTX       ((unsigned int) 0x1 <<  5) // (SPI) End of Receiver Transfer
#define AT91C_SPI_RXBUFF      ((unsigned int) 0x1 <<  6) // (SPI) RXBUFF Interrupt
#define AT91C_SPI_TXBUFE      ((unsigned int) 0x1 <<  7) // (SPI) TXBUFE Interrupt
#define AT91C_SPI_NSSR        ((unsigned int) 0x1 <<  8) // (SPI) NSSR Interrupt
#define AT91C_SPI_TXEMPTY     ((unsigned int) 0x1 <<  9) // (SPI) TXEMPTY Interrupt
#define AT91C_SPI_SPIENS      ((unsigned int) 0x1 << 16) // (SPI) Enable Status
// -------- SPI_IER : (SPI Offset: 0x14) Interrupt Enable Register -------- 
// -------- SPI_IDR : (SPI Offset: 0x18) Interrupt Disable Register -------- 
// -------- SPI_IMR : (SPI Offset: 0x1c) Interrupt Mask Register -------- 
// -------- SPI_CSR : (SPI Offset: 0x30) Chip Select Register -------- 
#define AT91C_SPI_CPOL        ((unsigned int) 0x1 <<  0) // (SPI) Clock Polarity
#define AT91C_SPI_NCPHA       ((unsigned int) 0x1 <<  1) // (SPI) Clock Phase
#define AT91C_SPI_CSAAT       ((unsigned int) 0x1 <<  3) // (SPI) Chip Select Active After Transfer
#define AT91C_SPI_BITS        ((unsigned int) 0xF <<  4) // (SPI) Bits Per Transfer
#define     AT91C_SPI_BITS_8                    ((unsigned int) 0x0 <<  4) // (SPI) 8 Bits Per transfer
#define     AT91C_SPI_BITS_9                    ((unsigned int) 0x1 <<  4) // (SPI) 9 Bits Per transfer
#define     AT91C_SPI_BITS_10                   ((unsigned int) 0x2 <<  4) // (SPI) 10 Bits Per transfer
#define     AT91C_SPI_BITS_11                   ((unsigned int) 0x3 <<  4) // (SPI) 11 Bits Per transfer
#define     AT91C_SPI_BITS_12                   ((unsigned int) 0x4 <<  4) // (SPI) 12 Bits Per transfer
#define     AT91C_SPI_BITS_13                   ((unsigned int) 0x5 <<  4) // (SPI) 13 Bits Per transfer
#define     AT91C_SPI_BITS_14                   ((unsigned int) 0x6 <<  4) // (SPI) 14 Bits Per transfer
#define     AT91C_SPI_BITS_15                   ((unsigned int) 0x7 <<  4) // (SPI) 15 Bits Per transfer
#define     AT91C_SPI_BITS_16                   ((unsigned int) 0x8 <<  4) // (SPI) 16 Bits Per transfer
#define AT91C_SPI_SCBR        ((unsigned int) 0xFF <<  8) // (SPI) Serial Clock Baud Rate
#define AT91C_SPI_DLYBS       ((unsigned int) 0xFF << 16) // (SPI) Serial Clock Baud Rate
#define AT91C_SPI_DLYBCT      ((unsigned int) 0xFF << 24) // (SPI) Delay Between Consecutive Transfers

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Analog to Digital Convertor
// *****************************************************************************
typedef struct _AT91S_ADC {
    AT91_REG     ADC_CR;    // ADC Control Register
    AT91_REG     ADC_MR;    // ADC Mode Register
    AT91_REG     Reserved0[2];  // 
    AT91_REG     ADC_CHER;  // ADC Channel Enable Register
    AT91_REG     ADC_CHDR;  // ADC Channel Disable Register
    AT91_REG     ADC_CHSR;  // ADC Channel Status Register
    AT91_REG     ADC_SR;    // ADC Status Register
    AT91_REG     ADC_LCDR;  // ADC Last Converted Data Register
    AT91_REG     ADC_IER;   // ADC Interrupt Enable Register
    AT91_REG     ADC_IDR;   // ADC Interrupt Disable Register
    AT91_REG     ADC_IMR;   // ADC Interrupt Mask Register
    AT91_REG     ADC_CDR0;  // ADC Channel Data Register 0
    AT91_REG     ADC_CDR1;  // ADC Channel Data Register 1
    AT91_REG     ADC_CDR2;  // ADC Channel Data Register 2
    AT91_REG     ADC_CDR3;  // ADC Channel Data Register 3
    AT91_REG     ADC_CDR4;  // ADC Channel Data Register 4
    AT91_REG     ADC_CDR5;  // ADC Channel Data Register 5
    AT91_REG     ADC_CDR6;  // ADC Channel Data Register 6
    AT91_REG     ADC_CDR7;  // ADC Channel Data Register 7
    AT91_REG     Reserved1[44];     // 
    AT91_REG     ADC_RPR;   // Receive Pointer Register
    AT91_REG     ADC_RCR;   // Receive Counter Register
    AT91_REG     ADC_TPR;   // Transmit Pointer Register
    AT91_REG     ADC_TCR;   // Transmit Counter Register
    AT91_REG     ADC_RNPR;  // Receive Next Pointer Register
    AT91_REG     ADC_RNCR;  // Receive Next Counter Register
    AT91_REG     ADC_TNPR;  // Transmit Next Pointer Register
    AT91_REG     ADC_TNCR;  // Transmit Next Counter Register
    AT91_REG     ADC_PTCR;  // PDC Transfer Control Register
    AT91_REG     ADC_PTSR;  // PDC Transfer Status Register
} AT91S_ADC, *AT91PS_ADC;

// -------- ADC_CR : (ADC Offset: 0x0) ADC Control Register -------- 
#define AT91C_ADC_SWRST       ((unsigned int) 0x1 <<  0) // (ADC) Software Reset
#define AT91C_ADC_START       ((unsigned int) 0x1 <<  1) // (ADC) Start Conversion
// -------- ADC_MR : (ADC Offset: 0x4) ADC Mode Register -------- 
#define AT91C_ADC_TRGEN       ((unsigned int) 0x1 <<  0) // (ADC) Trigger Enable
#define     AT91C_ADC_TRGEN_DIS                  ((unsigned int) 0x0) // (ADC) Hradware triggers are disabled. Starting a conversion is only possible by software
#define     AT91C_ADC_TRGEN_EN                   ((unsigned int) 0x1) // (ADC) Hardware trigger selected by TRGSEL field is enabled.
#define AT91C_ADC_TRGSEL      ((unsigned int) 0x7 <<  1) // (ADC) Trigger Selection
#define     AT91C_ADC_TRGSEL_TIOA0                ((unsigned int) 0x0 <<  1) // (ADC) Selected TRGSEL = TIAO0
#define     AT91C_ADC_TRGSEL_TIOA1                ((unsigned int) 0x1 <<  1) // (ADC) Selected TRGSEL = TIAO1
#define     AT91C_ADC_TRGSEL_TIOA2                ((unsigned int) 0x2 <<  1) // (ADC) Selected TRGSEL = TIAO2
#define     AT91C_ADC_TRGSEL_TIOA3                ((unsigned int) 0x3 <<  1) // (ADC) Selected TRGSEL = TIAO3
#define     AT91C_ADC_TRGSEL_TIOA4                ((unsigned int) 0x4 <<  1) // (ADC) Selected TRGSEL = TIAO4
#define     AT91C_ADC_TRGSEL_TIOA5                ((unsigned int) 0x5 <<  1) // (ADC) Selected TRGSEL = TIAO5
#define     AT91C_ADC_TRGSEL_EXT                  ((unsigned int) 0x6 <<  1) // (ADC) Selected TRGSEL = External Trigger
#define AT91C_ADC_LOWRES      ((unsigned int) 0x1 <<  4) // (ADC) Resolution.
#define     AT91C_ADC_LOWRES_10_BIT               ((unsigned int) 0x0 <<  4) // (ADC) 10-bit resolution
#define     AT91C_ADC_LOWRES_8_BIT                ((unsigned int) 0x1 <<  4) // (ADC) 8-bit resolution
#define AT91C_ADC_SLEEP       ((unsigned int) 0x1 <<  5) // (ADC) Sleep Mode
#define     AT91C_ADC_SLEEP_NORMAL_MODE          ((unsigned int) 0x0 <<  5) // (ADC) Normal Mode
#define     AT91C_ADC_SLEEP_MODE                 ((unsigned int) 0x1 <<  5) // (ADC) Sleep Mode
#define AT91C_ADC_PRESCAL     ((unsigned int) 0x3F <<  8) // (ADC) Prescaler rate selection
#define AT91C_ADC_STARTUP     ((unsigned int) 0x1F << 16) // (ADC) Startup Time
#define AT91C_ADC_SHTIM       ((unsigned int) 0xF << 24) // (ADC) Sample & Hold Time
// --------     ADC_CHER : (ADC Offset: 0x10) ADC Channel Enable Register -------- 
#define AT91C_ADC_CH0         ((unsigned int) 0x1 <<  0) // (ADC) Channel 0
#define AT91C_ADC_CH1         ((unsigned int) 0x1 <<  1) // (ADC) Channel 1
#define AT91C_ADC_CH2         ((unsigned int) 0x1 <<  2) // (ADC) Channel 2
#define AT91C_ADC_CH3         ((unsigned int) 0x1 <<  3) // (ADC) Channel 3
#define AT91C_ADC_CH4         ((unsigned int) 0x1 <<  4) // (ADC) Channel 4
#define AT91C_ADC_CH5         ((unsigned int) 0x1 <<  5) // (ADC) Channel 5
#define AT91C_ADC_CH6         ((unsigned int) 0x1 <<  6) // (ADC) Channel 6
#define AT91C_ADC_CH7         ((unsigned int) 0x1 <<  7) // (ADC) Channel 7
// --------     ADC_CHDR : (ADC Offset: 0x14) ADC Channel Disable Register -------- 
// --------     ADC_CHSR : (ADC Offset: 0x18) ADC Channel Status Register -------- 
// -------- ADC_SR : (ADC Offset: 0x1c) ADC Status Register -------- 
#define AT91C_ADC_EOC0        ((unsigned int) 0x1 <<  0) // (ADC) End of Conversion
#define AT91C_ADC_EOC1        ((unsigned int) 0x1 <<  1) // (ADC) End of Conversion
#define AT91C_ADC_EOC2        ((unsigned int) 0x1 <<  2) // (ADC) End of Conversion
#define AT91C_ADC_EOC3        ((unsigned int) 0x1 <<  3) // (ADC) End of Conversion
#define AT91C_ADC_EOC4        ((unsigned int) 0x1 <<  4) // (ADC) End of Conversion
#define AT91C_ADC_EOC5        ((unsigned int) 0x1 <<  5) // (ADC) End of Conversion
#define AT91C_ADC_EOC6        ((unsigned int) 0x1 <<  6) // (ADC) End of Conversion
#define AT91C_ADC_EOC7        ((unsigned int) 0x1 <<  7) // (ADC) End of Conversion
#define AT91C_ADC_OVRE0       ((unsigned int) 0x1 <<  8) // (ADC) Overrun Error
#define AT91C_ADC_OVRE1       ((unsigned int) 0x1 <<  9) // (ADC) Overrun Error
#define AT91C_ADC_OVRE2       ((unsigned int) 0x1 << 10) // (ADC) Overrun Error
#define AT91C_ADC_OVRE3       ((unsigned int) 0x1 << 11) // (ADC) Overrun Error
#define AT91C_ADC_OVRE4       ((unsigned int) 0x1 << 12) // (ADC) Overrun Error
#define AT91C_ADC_OVRE5       ((unsigned int) 0x1 << 13) // (ADC) Overrun Error
#define AT91C_ADC_OVRE6       ((unsigned int) 0x1 << 14) // (ADC) Overrun Error
#define AT91C_ADC_OVRE7       ((unsigned int) 0x1 << 15) // (ADC) Overrun Error
#define AT91C_ADC_DRDY        ((unsigned int) 0x1 << 16) // (ADC) Data Ready
#define AT91C_ADC_GOVRE       ((unsigned int) 0x1 << 17) // (ADC) General Overrun
#define AT91C_ADC_ENDRX       ((unsigned int) 0x1 << 18) // (ADC) End of Receiver Transfer
#define AT91C_ADC_RXBUFF      ((unsigned int) 0x1 << 19) // (ADC) RXBUFF Interrupt
// -------- ADC_LCDR : (ADC Offset: 0x20) ADC Last Converted Data Register -------- 
#define AT91C_ADC_LDATA       ((unsigned int) 0x3FF <<  0) // (ADC) Last Data Converted
// -------- ADC_IER : (ADC Offset: 0x24) ADC Interrupt Enable Register -------- 
// -------- ADC_IDR : (ADC Offset: 0x28) ADC Interrupt Disable Register -------- 
// -------- ADC_IMR : (ADC Offset: 0x2c) ADC Interrupt Mask Register -------- 
// -------- ADC_CDR0 : (ADC Offset: 0x30) ADC Channel Data Register 0 -------- 
#define AT91C_ADC_DATA        ((unsigned int) 0x3FF <<  0) // (ADC) Converted Data
// -------- ADC_CDR1 : (ADC Offset: 0x34) ADC Channel Data Register 1 -------- 
// -------- ADC_CDR2 : (ADC Offset: 0x38) ADC Channel Data Register 2 -------- 
// -------- ADC_CDR3 : (ADC Offset: 0x3c) ADC Channel Data Register 3 -------- 
// -------- ADC_CDR4 : (ADC Offset: 0x40) ADC Channel Data Register 4 -------- 
// -------- ADC_CDR5 : (ADC Offset: 0x44) ADC Channel Data Register 5 -------- 
// -------- ADC_CDR6 : (ADC Offset: 0x48) ADC Channel Data Register 6 -------- 
// -------- ADC_CDR7 : (ADC Offset: 0x4c) ADC Channel Data Register 7 -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Synchronous Serial Controller Interface
// *****************************************************************************
typedef struct _AT91S_SSC {
    AT91_REG     SSC_CR;    // Control Register
    AT91_REG     SSC_CMR;   // Clock Mode Register
    AT91_REG     Reserved0[2];  // 
    AT91_REG     SSC_RCMR;  // Receive Clock ModeRegister
    AT91_REG     SSC_RFMR;  // Receive Frame Mode Register
    AT91_REG     SSC_TCMR;  // Transmit Clock Mode Register
    AT91_REG     SSC_TFMR;  // Transmit Frame Mode Register
    AT91_REG     SSC_RHR;   // Receive Holding Register
    AT91_REG     SSC_THR;   // Transmit Holding Register
    AT91_REG     Reserved1[2];  // 
    AT91_REG     SSC_RSHR;  // Receive Sync Holding Register
    AT91_REG     SSC_TSHR;  // Transmit Sync Holding Register
    AT91_REG     Reserved2[2];  // 
    AT91_REG     SSC_SR;    // Status Register
    AT91_REG     SSC_IER;   // Interrupt Enable Register
    AT91_REG     SSC_IDR;   // Interrupt Disable Register
    AT91_REG     SSC_IMR;   // Interrupt Mask Register
    AT91_REG     Reserved3[44];     // 
    AT91_REG     SSC_RPR;   // Receive Pointer Register
    AT91_REG     SSC_RCR;   // Receive Counter Register
    AT91_REG     SSC_TPR;   // Transmit Pointer Register
    AT91_REG     SSC_TCR;   // Transmit Counter Register
    AT91_REG     SSC_RNPR;  // Receive Next Pointer Register
    AT91_REG     SSC_RNCR;  // Receive Next Counter Register
    AT91_REG     SSC_TNPR;  // Transmit Next Pointer Register
    AT91_REG     SSC_TNCR;  // Transmit Next Counter Register
    AT91_REG     SSC_PTCR;  // PDC Transfer Control Register
    AT91_REG     SSC_PTSR;  // PDC Transfer Status Register
} AT91S_SSC, *AT91PS_SSC;

// -------- SSC_CR : (SSC Offset: 0x0) SSC Control Register -------- 
#define AT91C_SSC_RXEN        ((unsigned int) 0x1 <<  0) // (SSC) Receive Enable
#define AT91C_SSC_RXDIS       ((unsigned int) 0x1 <<  1) // (SSC) Receive Disable
#define AT91C_SSC_TXEN        ((unsigned int) 0x1 <<  8) // (SSC) Transmit Enable
#define AT91C_SSC_TXDIS       ((unsigned int) 0x1 <<  9) // (SSC) Transmit Disable
#define AT91C_SSC_SWRST       ((unsigned int) 0x1 << 15) // (SSC) Software Reset
// -------- SSC_RCMR : (SSC Offset: 0x10) SSC Receive Clock Mode Register -------- 
#define AT91C_SSC_CKS         ((unsigned int) 0x3 <<  0) // (SSC) Receive/Transmit Clock Selection
#define     AT91C_SSC_CKS_DIV                  ((unsigned int) 0x0) // (SSC) Divided Clock
#define     AT91C_SSC_CKS_TK                   ((unsigned int) 0x1) // (SSC) TK Clock signal
#define     AT91C_SSC_CKS_RK                   ((unsigned int) 0x2) // (SSC) RK pin
#define AT91C_SSC_CKO         ((unsigned int) 0x7 <<  2) // (SSC) Receive/Transmit Clock Output Mode Selection
#define     AT91C_SSC_CKO_NONE                 ((unsigned int) 0x0 <<  2) // (SSC) Receive/Transmit Clock Output Mode: None RK pin: Input-only
#define     AT91C_SSC_CKO_CONTINOUS            ((unsigned int) 0x1 <<  2) // (SSC) Continuous Receive/Transmit Clock RK pin: Output
#define     AT91C_SSC_CKO_DATA_TX              ((unsigned int) 0x2 <<  2) // (SSC) Receive/Transmit Clock only during data transfers RK pin: Output
#define AT91C_SSC_CKI         ((unsigned int) 0x1 <<  5) // (SSC) Receive/Transmit Clock Inversion
#define AT91C_SSC_START       ((unsigned int) 0xF <<  8) // (SSC) Receive/Transmit Start Selection
#define     AT91C_SSC_START_CONTINOUS            ((unsigned int) 0x0 <<  8) // (SSC) Continuous, as soon as the receiver is enabled, and immediately after the end of transfer of the previous data.
#define     AT91C_SSC_START_TX                   ((unsigned int) 0x1 <<  8) // (SSC) Transmit/Receive start
#define     AT91C_SSC_START_LOW_RF               ((unsigned int) 0x2 <<  8) // (SSC) Detection of a low level on RF input
#define     AT91C_SSC_START_HIGH_RF              ((unsigned int) 0x3 <<  8) // (SSC) Detection of a high level on RF input
#define     AT91C_SSC_START_FALL_RF              ((unsigned int) 0x4 <<  8) // (SSC) Detection of a falling edge on RF input
#define     AT91C_SSC_START_RISE_RF              ((unsigned int) 0x5 <<  8) // (SSC) Detection of a rising edge on RF input
#define     AT91C_SSC_START_LEVEL_RF             ((unsigned int) 0x6 <<  8) // (SSC) Detection of any level change on RF input
#define     AT91C_SSC_START_EDGE_RF              ((unsigned int) 0x7 <<  8) // (SSC) Detection of any edge on RF input
#define     AT91C_SSC_START_0                    ((unsigned int) 0x8 <<  8) // (SSC) Compare 0
#define AT91C_SSC_STTDLY      ((unsigned int) 0xFF << 16) // (SSC) Receive/Transmit Start Delay
#define AT91C_SSC_PERIOD      ((unsigned int) 0xFF << 24) // (SSC) Receive/Transmit Period Divider Selection
// -------- SSC_RFMR : (SSC Offset: 0x14) SSC Receive Frame Mode Register -------- 
#define AT91C_SSC_DATLEN      ((unsigned int) 0x1F <<  0) // (SSC) Data Length
#define AT91C_SSC_LOOP        ((unsigned int) 0x1 <<  5) // (SSC) Loop Mode
#define AT91C_SSC_MSBF        ((unsigned int) 0x1 <<  7) // (SSC) Most Significant Bit First
#define AT91C_SSC_DATNB       ((unsigned int) 0xF <<  8) // (SSC) Data Number per Frame
#define AT91C_SSC_FSLEN       ((unsigned int) 0xF << 16) // (SSC) Receive/Transmit Frame Sync length
#define AT91C_SSC_FSOS        ((unsigned int) 0x7 << 20) // (SSC) Receive/Transmit Frame Sync Output Selection
#define     AT91C_SSC_FSOS_NONE                 ((unsigned int) 0x0 << 20) // (SSC) Selected Receive/Transmit Frame Sync Signal: None RK pin Input-only
#define     AT91C_SSC_FSOS_NEGATIVE             ((unsigned int) 0x1 << 20) // (SSC) Selected Receive/Transmit Frame Sync Signal: Negative Pulse
#define     AT91C_SSC_FSOS_POSITIVE             ((unsigned int) 0x2 << 20) // (SSC) Selected Receive/Transmit Frame Sync Signal: Positive Pulse
#define     AT91C_SSC_FSOS_LOW                  ((unsigned int) 0x3 << 20) // (SSC) Selected Receive/Transmit Frame Sync Signal: Driver Low during data transfer
#define     AT91C_SSC_FSOS_HIGH                 ((unsigned int) 0x4 << 20) // (SSC) Selected Receive/Transmit Frame Sync Signal: Driver High during data transfer
#define     AT91C_SSC_FSOS_TOGGLE               ((unsigned int) 0x5 << 20) // (SSC) Selected Receive/Transmit Frame Sync Signal: Toggling at each start of data transfer
#define AT91C_SSC_FSEDGE      ((unsigned int) 0x1 << 24) // (SSC) Frame Sync Edge Detection
// -------- SSC_TCMR : (SSC Offset: 0x18) SSC Transmit Clock Mode Register -------- 
// -------- SSC_TFMR : (SSC Offset: 0x1c) SSC Transmit Frame Mode Register -------- 
#define AT91C_SSC_DATDEF      ((unsigned int) 0x1 <<  5) // (SSC) Data Default Value
#define AT91C_SSC_FSDEN       ((unsigned int) 0x1 << 23) // (SSC) Frame Sync Data Enable
// -------- SSC_SR : (SSC Offset: 0x40) SSC Status Register -------- 
#define AT91C_SSC_TXRDY       ((unsigned int) 0x1 <<  0) // (SSC) Transmit Ready
#define AT91C_SSC_TXEMPTY     ((unsigned int) 0x1 <<  1) // (SSC) Transmit Empty
#define AT91C_SSC_ENDTX       ((unsigned int) 0x1 <<  2) // (SSC) End Of Transmission
#define AT91C_SSC_TXBUFE      ((unsigned int) 0x1 <<  3) // (SSC) Transmit Buffer Empty
#define AT91C_SSC_RXRDY       ((unsigned int) 0x1 <<  4) // (SSC) Receive Ready
#define AT91C_SSC_OVRUN       ((unsigned int) 0x1 <<  5) // (SSC) Receive Overrun
#define AT91C_SSC_ENDRX       ((unsigned int) 0x1 <<  6) // (SSC) End of Reception
#define AT91C_SSC_RXBUFF      ((unsigned int) 0x1 <<  7) // (SSC) Receive Buffer Full
#define AT91C_SSC_TXSYN       ((unsigned int) 0x1 << 10) // (SSC) Transmit Sync
#define AT91C_SSC_RXSYN       ((unsigned int) 0x1 << 11) // (SSC) Receive Sync
#define AT91C_SSC_TXENA       ((unsigned int) 0x1 << 16) // (SSC) Transmit Enable
#define AT91C_SSC_RXENA       ((unsigned int) 0x1 << 17) // (SSC) Receive Enable
// -------- SSC_IER : (SSC Offset: 0x44) SSC Interrupt Enable Register -------- 
// -------- SSC_IDR : (SSC Offset: 0x48) SSC Interrupt Disable Register -------- 
// -------- SSC_IMR : (SSC Offset: 0x4c) SSC Interrupt Mask Register -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Usart
// *****************************************************************************
typedef struct _AT91S_USART {
    AT91_REG     US_CR;     // Control Register
    AT91_REG     US_MR;     // Mode Register
    AT91_REG     US_IER;    // Interrupt Enable Register
    AT91_REG     US_IDR;    // Interrupt Disable Register
    AT91_REG     US_IMR;    // Interrupt Mask Register
    AT91_REG     US_CSR;    // Channel Status Register
    AT91_REG     US_RHR;    // Receiver Holding Register
    AT91_REG     US_THR;    // Transmitter Holding Register
    AT91_REG     US_BRGR;   // Baud Rate Generator Register
    AT91_REG     US_RTOR;   // Receiver Time-out Register
    AT91_REG     US_TTGR;   // Transmitter Time-guard Register
    AT91_REG     Reserved0[5];  // 
    AT91_REG     US_FIDI;   // FI_DI_Ratio Register
    AT91_REG     US_NER;    // Nb Errors Register
    AT91_REG     Reserved1[1];  // 
    AT91_REG     US_IF;     // IRDA_FILTER Register
    AT91_REG     Reserved2[44];     // 
    AT91_REG     US_RPR;    // Receive Pointer Register
    AT91_REG     US_RCR;    // Receive Counter Register
    AT91_REG     US_TPR;    // Transmit Pointer Register
    AT91_REG     US_TCR;    // Transmit Counter Register
    AT91_REG     US_RNPR;   // Receive Next Pointer Register
    AT91_REG     US_RNCR;   // Receive Next Counter Register
    AT91_REG     US_TNPR;   // Transmit Next Pointer Register
    AT91_REG     US_TNCR;   // Transmit Next Counter Register
    AT91_REG     US_PTCR;   // PDC Transfer Control Register
    AT91_REG     US_PTSR;   // PDC Transfer Status Register
} AT91S_USART, *AT91PS_USART;

// -------- US_CR : (USART Offset: 0x0) Debug Unit Control Register -------- 
#define AT91C_US_STTBRK       ((unsigned int) 0x1 <<  9) // (USART) Start Break
#define AT91C_US_STPBRK       ((unsigned int) 0x1 << 10) // (USART) Stop Break
#define AT91C_US_STTTO        ((unsigned int) 0x1 << 11) // (USART) Start Time-out
#define AT91C_US_SENDA        ((unsigned int) 0x1 << 12) // (USART) Send Address
#define AT91C_US_RSTIT        ((unsigned int) 0x1 << 13) // (USART) Reset Iterations
#define AT91C_US_RSTNACK      ((unsigned int) 0x1 << 14) // (USART) Reset Non Acknowledge
#define AT91C_US_RETTO        ((unsigned int) 0x1 << 15) // (USART) Rearm Time-out
#define AT91C_US_DTREN        ((unsigned int) 0x1 << 16) // (USART) Data Terminal ready Enable
#define AT91C_US_DTRDIS       ((unsigned int) 0x1 << 17) // (USART) Data Terminal ready Disable
#define AT91C_US_RTSEN        ((unsigned int) 0x1 << 18) // (USART) Request to Send enable
#define AT91C_US_RTSDIS       ((unsigned int) 0x1 << 19) // (USART) Request to Send Disable
// -------- US_MR : (USART Offset: 0x4) Debug Unit Mode Register -------- 
#define AT91C_US_USMODE       ((unsigned int) 0xF <<  0) // (USART) Usart mode
#define     AT91C_US_USMODE_NORMAL               ((unsigned int) 0x0) // (USART) Normal
#define     AT91C_US_USMODE_RS485                ((unsigned int) 0x1) // (USART) RS485
#define     AT91C_US_USMODE_HWHSH                ((unsigned int) 0x2) // (USART) Hardware Handshaking
#define     AT91C_US_USMODE_MODEM                ((unsigned int) 0x3) // (USART) Modem
#define     AT91C_US_USMODE_ISO7816_0            ((unsigned int) 0x4) // (USART) ISO7816 protocol: T = 0
#define     AT91C_US_USMODE_ISO7816_1            ((unsigned int) 0x6) // (USART) ISO7816 protocol: T = 1
#define     AT91C_US_USMODE_IRDA                 ((unsigned int) 0x8) // (USART) IrDA
#define     AT91C_US_USMODE_SWHSH                ((unsigned int) 0xC) // (USART) Software Handshaking
#define AT91C_US_CLKS         ((unsigned int) 0x3 <<  4) // (USART) Clock Selection (Baud Rate generator Input Clock
#define     AT91C_US_CLKS_CLOCK                ((unsigned int) 0x0 <<  4) // (USART) Clock
#define     AT91C_US_CLKS_FDIV1                ((unsigned int) 0x1 <<  4) // (USART) fdiv1
#define     AT91C_US_CLKS_SLOW                 ((unsigned int) 0x2 <<  4) // (USART) slow_clock (ARM)
#define     AT91C_US_CLKS_EXT                  ((unsigned int) 0x3 <<  4) // (USART) External (SCK)
#define AT91C_US_CHRL         ((unsigned int) 0x3 <<  6) // (USART) Clock Selection (Baud Rate generator Input Clock
#define     AT91C_US_CHRL_5_BITS               ((unsigned int) 0x0 <<  6) // (USART) Character Length: 5 bits
#define     AT91C_US_CHRL_6_BITS               ((unsigned int) 0x1 <<  6) // (USART) Character Length: 6 bits
#define     AT91C_US_CHRL_7_BITS               ((unsigned int) 0x2 <<  6) // (USART) Character Length: 7 bits
#define     AT91C_US_CHRL_8_BITS               ((unsigned int) 0x3 <<  6) // (USART) Character Length: 8 bits
#define AT91C_US_SYNC         ((unsigned int) 0x1 <<  8) // (USART) Synchronous Mode Select
#define AT91C_US_NBSTOP       ((unsigned int) 0x3 << 12) // (USART) Number of Stop bits
#define     AT91C_US_NBSTOP_1_BIT                ((unsigned int) 0x0 << 12) // (USART) 1 stop bit
#define     AT91C_US_NBSTOP_15_BIT               ((unsigned int) 0x1 << 12) // (USART) Asynchronous (SYNC=0) 2 stop bits Synchronous (SYNC=1) 2 stop bits
#define     AT91C_US_NBSTOP_2_BIT                ((unsigned int) 0x2 << 12) // (USART) 2 stop bits
#define AT91C_US_MSBF         ((unsigned int) 0x1 << 16) // (USART) Bit Order
#define AT91C_US_MODE9        ((unsigned int) 0x1 << 17) // (USART) 9-bit Character length
#define AT91C_US_CKLO         ((unsigned int) 0x1 << 18) // (USART) Clock Output Select
#define AT91C_US_OVER         ((unsigned int) 0x1 << 19) // (USART) Over Sampling Mode
#define AT91C_US_INACK        ((unsigned int) 0x1 << 20) // (USART) Inhibit Non Acknowledge
#define AT91C_US_DSNACK       ((unsigned int) 0x1 << 21) // (USART) Disable Successive NACK
#define AT91C_US_MAX_ITER     ((unsigned int) 0x1 << 24) // (USART) Number of Repetitions
#define AT91C_US_FILTER       ((unsigned int) 0x1 << 28) // (USART) Receive Line Filter
// -------- US_IER : (USART Offset: 0x8) Debug Unit Interrupt Enable Register -------- 
#define AT91C_US_RXBRK        ((unsigned int) 0x1 <<  2) // (USART) Break Received/End of Break
#define AT91C_US_TIMEOUT      ((unsigned int) 0x1 <<  8) // (USART) Receiver Time-out
#define AT91C_US_ITERATION    ((unsigned int) 0x1 << 10) // (USART) Max number of Repetitions Reached
#define AT91C_US_NACK         ((unsigned int) 0x1 << 13) // (USART) Non Acknowledge
#define AT91C_US_RIIC         ((unsigned int) 0x1 << 16) // (USART) Ring INdicator Input Change Flag
#define AT91C_US_DSRIC        ((unsigned int) 0x1 << 17) // (USART) Data Set Ready Input Change Flag
#define AT91C_US_DCDIC        ((unsigned int) 0x1 << 18) // (USART) Data Carrier Flag
#define AT91C_US_CTSIC        ((unsigned int) 0x1 << 19) // (USART) Clear To Send Input Change Flag
// -------- US_IDR : (USART Offset: 0xc) Debug Unit Interrupt Disable Register -------- 
// -------- US_IMR : (USART Offset: 0x10) Debug Unit Interrupt Mask Register -------- 
// -------- US_CSR : (USART Offset: 0x14) Debug Unit Channel Status Register -------- 
#define AT91C_US_RI           ((unsigned int) 0x1 << 20) // (USART) Image of RI Input
#define AT91C_US_DSR          ((unsigned int) 0x1 << 21) // (USART) Image of DSR Input
#define AT91C_US_DCD          ((unsigned int) 0x1 << 22) // (USART) Image of DCD Input
#define AT91C_US_CTS          ((unsigned int) 0x1 << 23) // (USART) Image of CTS Input

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Two-wire Interface
// *****************************************************************************
typedef struct _AT91S_TWI {
    AT91_REG     TWI_CR;    // Control Register
    AT91_REG     TWI_MMR;   // Master Mode Register
    AT91_REG     Reserved0[1];  // 
    AT91_REG     TWI_IADR;  // Internal Address Register
    AT91_REG     TWI_CWGR;  // Clock Waveform Generator Register
    AT91_REG     Reserved1[3];  // 
    AT91_REG     TWI_SR;    // Status Register
    AT91_REG     TWI_IER;   // Interrupt Enable Register
    AT91_REG     TWI_IDR;   // Interrupt Disable Register
    AT91_REG     TWI_IMR;   // Interrupt Mask Register
    AT91_REG     TWI_RHR;   // Receive Holding Register
    AT91_REG     TWI_THR;   // Transmit Holding Register
} AT91S_TWI, *AT91PS_TWI;

// -------- TWI_CR : (TWI Offset: 0x0) TWI Control Register -------- 
#define AT91C_TWI_START       ((unsigned int) 0x1 <<  0) // (TWI) Send a START Condition
#define AT91C_TWI_STOP        ((unsigned int) 0x1 <<  1) // (TWI) Send a STOP Condition
#define AT91C_TWI_MSEN        ((unsigned int) 0x1 <<  2) // (TWI) TWI Master Transfer Enabled
#define AT91C_TWI_MSDIS       ((unsigned int) 0x1 <<  3) // (TWI) TWI Master Transfer Disabled
#define AT91C_TWI_SWRST       ((unsigned int) 0x1 <<  7) // (TWI) Software Reset
// -------- TWI_MMR : (TWI Offset: 0x4) TWI Master Mode Register -------- 
#define AT91C_TWI_IADRSZ      ((unsigned int) 0x3 <<  8) // (TWI) Internal Device Address Size
#define     AT91C_TWI_IADRSZ_NO                   ((unsigned int) 0x0 <<  8) // (TWI) No internal device address
#define     AT91C_TWI_IADRSZ_1_BYTE               ((unsigned int) 0x1 <<  8) // (TWI) One-byte internal device address
#define     AT91C_TWI_IADRSZ_2_BYTE               ((unsigned int) 0x2 <<  8) // (TWI) Two-byte internal device address
#define     AT91C_TWI_IADRSZ_3_BYTE               ((unsigned int) 0x3 <<  8) // (TWI) Three-byte internal device address
#define AT91C_TWI_MREAD       ((unsigned int) 0x1 << 12) // (TWI) Master Read Direction
#define AT91C_TWI_DADR        ((unsigned int) 0x7F << 16) // (TWI) Device Address
// -------- TWI_CWGR : (TWI Offset: 0x10) TWI Clock Waveform Generator Register -------- 
#define AT91C_TWI_CLDIV       ((unsigned int) 0xFF <<  0) // (TWI) Clock Low Divider
#define AT91C_TWI_CHDIV       ((unsigned int) 0xFF <<  8) // (TWI) Clock High Divider
#define AT91C_TWI_CKDIV       ((unsigned int) 0x7 << 16) // (TWI) Clock Divider
// -------- TWI_SR : (TWI Offset: 0x20) TWI Status Register -------- 
#define AT91C_TWI_TXCOMP      ((unsigned int) 0x1 <<  0) // (TWI) Transmission Completed
#define AT91C_TWI_RXRDY       ((unsigned int) 0x1 <<  1) // (TWI) Receive holding register ReaDY
#define AT91C_TWI_TXRDY       ((unsigned int) 0x1 <<  2) // (TWI) Transmit holding register ReaDY
#define AT91C_TWI_OVRE        ((unsigned int) 0x1 <<  6) // (TWI) Overrun Error
#define AT91C_TWI_UNRE        ((unsigned int) 0x1 <<  7) // (TWI) Underrun Error
#define AT91C_TWI_NACK        ((unsigned int) 0x1 <<  8) // (TWI) Not Acknowledged
// -------- TWI_IER : (TWI Offset: 0x24) TWI Interrupt Enable Register -------- 
// -------- TWI_IDR : (TWI Offset: 0x28) TWI Interrupt Disable Register -------- 
// -------- TWI_IMR : (TWI Offset: 0x2c) TWI Interrupt Mask Register -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Timer Counter Channel Interface
// *****************************************************************************
typedef struct _AT91S_TC {
    AT91_REG     TC_CCR;    // Channel Control Register
    AT91_REG     TC_CMR;    // Channel Mode Register (Capture Mode / Waveform Mode)
    AT91_REG     Reserved0[2];  // 
    AT91_REG     TC_CV;     // Counter Value
    AT91_REG     TC_RA;     // Register A
    AT91_REG     TC_RB;     // Register B
    AT91_REG     TC_RC;     // Register C
    AT91_REG     TC_SR;     // Status Register
    AT91_REG     TC_IER;    // Interrupt Enable Register
    AT91_REG     TC_IDR;    // Interrupt Disable Register
    AT91_REG     TC_IMR;    // Interrupt Mask Register
} AT91S_TC, *AT91PS_TC;

// -------- TC_CCR : (TC Offset: 0x0) TC Channel Control Register -------- 
#define AT91C_TC_CLKEN        ((unsigned int) 0x1 <<  0) // (TC) Counter Clock Enable Command
#define AT91C_TC_CLKDIS       ((unsigned int) 0x1 <<  1) // (TC) Counter Clock Disable Command
#define AT91C_TC_SWTRG        ((unsigned int) 0x1 <<  2) // (TC) Software Trigger Command
// -------- TC_CMR : (TC Offset: 0x4) TC Channel Mode Register: Capture Mode / Waveform Mode -------- 
#define AT91C_TC_CLKS         ((unsigned int) 0x7 <<  0) // (TC) Clock Selection
#define     AT91C_TC_CLKS_TIMER_DIV1_CLOCK     ((unsigned int) 0x0) // (TC) Clock selected: TIMER_DIV1_CLOCK
#define     AT91C_TC_CLKS_TIMER_DIV2_CLOCK     ((unsigned int) 0x1) // (TC) Clock selected: TIMER_DIV2_CLOCK
#define     AT91C_TC_CLKS_TIMER_DIV3_CLOCK     ((unsigned int) 0x2) // (TC) Clock selected: TIMER_DIV3_CLOCK
#define     AT91C_TC_CLKS_TIMER_DIV4_CLOCK     ((unsigned int) 0x3) // (TC) Clock selected: TIMER_DIV4_CLOCK
#define     AT91C_TC_CLKS_TIMER_DIV5_CLOCK     ((unsigned int) 0x4) // (TC) Clock selected: TIMER_DIV5_CLOCK
#define     AT91C_TC_CLKS_XC0                  ((unsigned int) 0x5) // (TC) Clock selected: XC0
#define     AT91C_TC_CLKS_XC1                  ((unsigned int) 0x6) // (TC) Clock selected: XC1
#define     AT91C_TC_CLKS_XC2                  ((unsigned int) 0x7) // (TC) Clock selected: XC2
#define AT91C_TC_CLKI         ((unsigned int) 0x1 <<  3) // (TC) Clock Invert
#define AT91C_TC_BURST        ((unsigned int) 0x3 <<  4) // (TC) Burst Signal Selection
#define     AT91C_TC_BURST_NONE                 ((unsigned int) 0x0 <<  4) // (TC) The clock is not gated by an external signal
#define     AT91C_TC_BURST_XC0                  ((unsigned int) 0x1 <<  4) // (TC) XC0 is ANDed with the selected clock
#define     AT91C_TC_BURST_XC1                  ((unsigned int) 0x2 <<  4) // (TC) XC1 is ANDed with the selected clock
#define     AT91C_TC_BURST_XC2                  ((unsigned int) 0x3 <<  4) // (TC) XC2 is ANDed with the selected clock
#define AT91C_TC_CPCSTOP      ((unsigned int) 0x1 <<  6) // (TC) Counter Clock Stopped with RC Compare
#define AT91C_TC_LDBSTOP      ((unsigned int) 0x1 <<  6) // (TC) Counter Clock Stopped with RB Loading
#define AT91C_TC_CPCDIS       ((unsigned int) 0x1 <<  7) // (TC) Counter Clock Disable with RC Compare
#define AT91C_TC_LDBDIS       ((unsigned int) 0x1 <<  7) // (TC) Counter Clock Disabled with RB Loading
#define AT91C_TC_ETRGEDG      ((unsigned int) 0x3 <<  8) // (TC) External Trigger Edge Selection
#define     AT91C_TC_ETRGEDG_NONE                 ((unsigned int) 0x0 <<  8) // (TC) Edge: None
#define     AT91C_TC_ETRGEDG_RISING               ((unsigned int) 0x1 <<  8) // (TC) Edge: rising edge
#define     AT91C_TC_ETRGEDG_FALLING              ((unsigned int) 0x2 <<  8) // (TC) Edge: falling edge
#define     AT91C_TC_ETRGEDG_BOTH                 ((unsigned int) 0x3 <<  8) // (TC) Edge: each edge
#define AT91C_TC_EEVTEDG      ((unsigned int) 0x3 <<  8) // (TC) External Event Edge Selection
#define     AT91C_TC_EEVTEDG_NONE                 ((unsigned int) 0x0 <<  8) // (TC) Edge: None
#define     AT91C_TC_EEVTEDG_RISING               ((unsigned int) 0x1 <<  8) // (TC) Edge: rising edge
#define     AT91C_TC_EEVTEDG_FALLING              ((unsigned int) 0x2 <<  8) // (TC) Edge: falling edge
#define     AT91C_TC_EEVTEDG_BOTH                 ((unsigned int) 0x3 <<  8) // (TC) Edge: each edge
#define AT91C_TC_EEVT         ((unsigned int) 0x3 << 10) // (TC) External Event  Selection
#define     AT91C_TC_EEVT_TIOB                 ((unsigned int) 0x0 << 10) // (TC) Signal selected as external event: TIOB TIOB direction: input
#define     AT91C_TC_EEVT_XC0                  ((unsigned int) 0x1 << 10) // (TC) Signal selected as external event: XC0 TIOB direction: output
#define     AT91C_TC_EEVT_XC1                  ((unsigned int) 0x2 << 10) // (TC) Signal selected as external event: XC1 TIOB direction: output
#define     AT91C_TC_EEVT_XC2                  ((unsigned int) 0x3 << 10) // (TC) Signal selected as external event: XC2 TIOB direction: output
#define AT91C_TC_ABETRG       ((unsigned int) 0x1 << 10) // (TC) TIOA or TIOB External Trigger Selection
#define AT91C_TC_ENETRG       ((unsigned int) 0x1 << 12) // (TC) External Event Trigger enable
#define AT91C_TC_WAVESEL      ((unsigned int) 0x3 << 13) // (TC) Waveform  Selection
#define     AT91C_TC_WAVESEL_UP                   ((unsigned int) 0x0 << 13) // (TC) UP mode without atomatic trigger on RC Compare
#define     AT91C_TC_WAVESEL_UPDOWN               ((unsigned int) 0x1 << 13) // (TC) UPDOWN mode without automatic trigger on RC Compare
#define     AT91C_TC_WAVESEL_UP_AUTO              ((unsigned int) 0x2 << 13) // (TC) UP mode with automatic trigger on RC Compare
#define     AT91C_TC_WAVESEL_UPDOWN_AUTO          ((unsigned int) 0x3 << 13) // (TC) UPDOWN mode with automatic trigger on RC Compare
#define AT91C_TC_CPCTRG       ((unsigned int) 0x1 << 14) // (TC) RC Compare Trigger Enable
#define AT91C_TC_WAVE         ((unsigned int) 0x1 << 15) // (TC) 
#define AT91C_TC_ACPA         ((unsigned int) 0x3 << 16) // (TC) RA Compare Effect on TIOA
#define     AT91C_TC_ACPA_NONE                 ((unsigned int) 0x0 << 16) // (TC) Effect: none
#define     AT91C_TC_ACPA_SET                  ((unsigned int) 0x1 << 16) // (TC) Effect: set
#define     AT91C_TC_ACPA_CLEAR                ((unsigned int) 0x2 << 16) // (TC) Effect: clear
#define     AT91C_TC_ACPA_TOGGLE               ((unsigned int) 0x3 << 16) // (TC) Effect: toggle
#define AT91C_TC_LDRA         ((unsigned int) 0x3 << 16) // (TC) RA Loading Selection
#define     AT91C_TC_LDRA_NONE                 ((unsigned int) 0x0 << 16) // (TC) Edge: None
#define     AT91C_TC_LDRA_RISING               ((unsigned int) 0x1 << 16) // (TC) Edge: rising edge of TIOA
#define     AT91C_TC_LDRA_FALLING              ((unsigned int) 0x2 << 16) // (TC) Edge: falling edge of TIOA
#define     AT91C_TC_LDRA_BOTH                 ((unsigned int) 0x3 << 16) // (TC) Edge: each edge of TIOA
#define AT91C_TC_ACPC         ((unsigned int) 0x3 << 18) // (TC) RC Compare Effect on TIOA
#define     AT91C_TC_ACPC_NONE                 ((unsigned int) 0x0 << 18) // (TC) Effect: none
#define     AT91C_TC_ACPC_SET                  ((unsigned int) 0x1 << 18) // (TC) Effect: set
#define     AT91C_TC_ACPC_CLEAR                ((unsigned int) 0x2 << 18) // (TC) Effect: clear
#define     AT91C_TC_ACPC_TOGGLE               ((unsigned int) 0x3 << 18) // (TC) Effect: toggle
#define AT91C_TC_LDRB         ((unsigned int) 0x3 << 18) // (TC) RB Loading Selection
#define     AT91C_TC_LDRB_NONE                 ((unsigned int) 0x0 << 18) // (TC) Edge: None
#define     AT91C_TC_LDRB_RISING               ((unsigned int) 0x1 << 18) // (TC) Edge: rising edge of TIOA
#define     AT91C_TC_LDRB_FALLING              ((unsigned int) 0x2 << 18) // (TC) Edge: falling edge of TIOA
#define     AT91C_TC_LDRB_BOTH                 ((unsigned int) 0x3 << 18) // (TC) Edge: each edge of TIOA
#define AT91C_TC_AEEVT        ((unsigned int) 0x3 << 20) // (TC) External Event Effect on TIOA
#define     AT91C_TC_AEEVT_NONE                 ((unsigned int) 0x0 << 20) // (TC) Effect: none
#define     AT91C_TC_AEEVT_SET                  ((unsigned int) 0x1 << 20) // (TC) Effect: set
#define     AT91C_TC_AEEVT_CLEAR                ((unsigned int) 0x2 << 20) // (TC) Effect: clear
#define     AT91C_TC_AEEVT_TOGGLE               ((unsigned int) 0x3 << 20) // (TC) Effect: toggle
#define AT91C_TC_ASWTRG       ((unsigned int) 0x3 << 22) // (TC) Software Trigger Effect on TIOA
#define     AT91C_TC_ASWTRG_NONE                 ((unsigned int) 0x0 << 22) // (TC) Effect: none
#define     AT91C_TC_ASWTRG_SET                  ((unsigned int) 0x1 << 22) // (TC) Effect: set
#define     AT91C_TC_ASWTRG_CLEAR                ((unsigned int) 0x2 << 22) // (TC) Effect: clear
#define     AT91C_TC_ASWTRG_TOGGLE               ((unsigned int) 0x3 << 22) // (TC) Effect: toggle
#define AT91C_TC_BCPB         ((unsigned int) 0x3 << 24) // (TC) RB Compare Effect on TIOB
#define     AT91C_TC_BCPB_NONE                 ((unsigned int) 0x0 << 24) // (TC) Effect: none
#define     AT91C_TC_BCPB_SET                  ((unsigned int) 0x1 << 24) // (TC) Effect: set
#define     AT91C_TC_BCPB_CLEAR                ((unsigned int) 0x2 << 24) // (TC) Effect: clear
#define     AT91C_TC_BCPB_TOGGLE               ((unsigned int) 0x3 << 24) // (TC) Effect: toggle
#define AT91C_TC_BCPC         ((unsigned int) 0x3 << 26) // (TC) RC Compare Effect on TIOB
#define     AT91C_TC_BCPC_NONE                 ((unsigned int) 0x0 << 26) // (TC) Effect: none
#define     AT91C_TC_BCPC_SET                  ((unsigned int) 0x1 << 26) // (TC) Effect: set
#define     AT91C_TC_BCPC_CLEAR                ((unsigned int) 0x2 << 26) // (TC) Effect: clear
#define     AT91C_TC_BCPC_TOGGLE               ((unsigned int) 0x3 << 26) // (TC) Effect: toggle
#define AT91C_TC_BEEVT        ((unsigned int) 0x3 << 28) // (TC) External Event Effect on TIOB
#define     AT91C_TC_BEEVT_NONE                 ((unsigned int) 0x0 << 28) // (TC) Effect: none
#define     AT91C_TC_BEEVT_SET                  ((unsigned int) 0x1 << 28) // (TC) Effect: set
#define     AT91C_TC_BEEVT_CLEAR                ((unsigned int) 0x2 << 28) // (TC) Effect: clear
#define     AT91C_TC_BEEVT_TOGGLE               ((unsigned int) 0x3 << 28) // (TC) Effect: toggle
#define AT91C_TC_BSWTRG       ((unsigned int) 0x3 << 30) // (TC) Software Trigger Effect on TIOB
#define     AT91C_TC_BSWTRG_NONE                 ((unsigned int) 0x0 << 30) // (TC) Effect: none
#define     AT91C_TC_BSWTRG_SET                  ((unsigned int) 0x1 << 30) // (TC) Effect: set
#define     AT91C_TC_BSWTRG_CLEAR                ((unsigned int) 0x2 << 30) // (TC) Effect: clear
#define     AT91C_TC_BSWTRG_TOGGLE               ((unsigned int) 0x3 << 30) // (TC) Effect: toggle
// -------- TC_SR : (TC Offset: 0x20) TC Channel Status Register -------- 
#define AT91C_TC_COVFS        ((unsigned int) 0x1 <<  0) // (TC) Counter Overflow
#define AT91C_TC_LOVRS        ((unsigned int) 0x1 <<  1) // (TC) Load Overrun
#define AT91C_TC_CPAS         ((unsigned int) 0x1 <<  2) // (TC) RA Compare
#define AT91C_TC_CPBS         ((unsigned int) 0x1 <<  3) // (TC) RB Compare
#define AT91C_TC_CPCS         ((unsigned int) 0x1 <<  4) // (TC) RC Compare
#define AT91C_TC_LDRAS        ((unsigned int) 0x1 <<  5) // (TC) RA Loading
#define AT91C_TC_LDRBS        ((unsigned int) 0x1 <<  6) // (TC) RB Loading
#define AT91C_TC_ETRGS        ((unsigned int) 0x1 <<  7) // (TC) External Trigger
#define AT91C_TC_CLKSTA       ((unsigned int) 0x1 << 16) // (TC) Clock Enabling
#define AT91C_TC_MTIOA        ((unsigned int) 0x1 << 17) // (TC) TIOA Mirror
#define AT91C_TC_MTIOB        ((unsigned int) 0x1 << 18) // (TC) TIOA Mirror
// -------- TC_IER : (TC Offset: 0x24) TC Channel Interrupt Enable Register -------- 
// -------- TC_IDR : (TC Offset: 0x28) TC Channel Interrupt Disable Register -------- 
// -------- TC_IMR : (TC Offset: 0x2c) TC Channel Interrupt Mask Register -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Timer Counter Interface
// *****************************************************************************
typedef struct _AT91S_TCB {
    AT91S_TC     TCB_TC0;   // TC Channel 0
    AT91_REG     Reserved0[4];  // 
    AT91S_TC     TCB_TC1;   // TC Channel 1
    AT91_REG     Reserved1[4];  // 
    AT91S_TC     TCB_TC2;   // TC Channel 2
    AT91_REG     Reserved2[4];  // 
    AT91_REG     TCB_BCR;   // TC Block Control Register
    AT91_REG     TCB_BMR;   // TC Block Mode Register
} AT91S_TCB, *AT91PS_TCB;

// -------- TCB_BCR : (TCB Offset: 0xc0) TC Block Control Register -------- 
#define AT91C_TCB_SYNC        ((unsigned int) 0x1 <<  0) // (TCB) Synchro Command
// -------- TCB_BMR : (TCB Offset: 0xc4) TC Block Mode Register -------- 
#define AT91C_TCB_TC0XC0S     ((unsigned int) 0x3 <<  0) // (TCB) External Clock Signal 0 Selection
#define     AT91C_TCB_TC0XC0S_TCLK0                ((unsigned int) 0x0) // (TCB) TCLK0 connected to XC0
#define     AT91C_TCB_TC0XC0S_NONE                 ((unsigned int) 0x1) // (TCB) None signal connected to XC0
#define     AT91C_TCB_TC0XC0S_TIOA1                ((unsigned int) 0x2) // (TCB) TIOA1 connected to XC0
#define     AT91C_TCB_TC0XC0S_TIOA2                ((unsigned int) 0x3) // (TCB) TIOA2 connected to XC0
#define AT91C_TCB_TC1XC1S     ((unsigned int) 0x3 <<  2) // (TCB) External Clock Signal 1 Selection
#define     AT91C_TCB_TC1XC1S_TCLK1                ((unsigned int) 0x0 <<  2) // (TCB) TCLK1 connected to XC1
#define     AT91C_TCB_TC1XC1S_NONE                 ((unsigned int) 0x1 <<  2) // (TCB) None signal connected to XC1
#define     AT91C_TCB_TC1XC1S_TIOA0                ((unsigned int) 0x2 <<  2) // (TCB) TIOA0 connected to XC1
#define     AT91C_TCB_TC1XC1S_TIOA2                ((unsigned int) 0x3 <<  2) // (TCB) TIOA2 connected to XC1
#define AT91C_TCB_TC2XC2S     ((unsigned int) 0x3 <<  4) // (TCB) External Clock Signal 2 Selection
#define     AT91C_TCB_TC2XC2S_TCLK2                ((unsigned int) 0x0 <<  4) // (TCB) TCLK2 connected to XC2
#define     AT91C_TCB_TC2XC2S_NONE                 ((unsigned int) 0x1 <<  4) // (TCB) None signal connected to XC2
#define     AT91C_TCB_TC2XC2S_TIOA0                ((unsigned int) 0x2 <<  4) // (TCB) TIOA0 connected to XC2
#define     AT91C_TCB_TC2XC2S_TIOA1                ((unsigned int) 0x3 <<  4) // (TCB) TIOA2 connected to XC2

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR PWMC Channel Interface
// *****************************************************************************
typedef struct _AT91S_PWMC_CH {
    AT91_REG     PWMC_CMR;  // Channel Mode Register
    AT91_REG     PWMC_CDTYR;    // Channel Duty Cycle Register
    AT91_REG     PWMC_CPRDR;    // Channel Period Register
    AT91_REG     PWMC_CCNTR;    // Channel Counter Register
    AT91_REG     PWMC_CUPDR;    // Channel Update Register
    AT91_REG     PWMC_Reserved[3];  // Reserved
} AT91S_PWMC_CH, *AT91PS_PWMC_CH;

// -------- PWMC_CMR : (PWMC_CH Offset: 0x0) PWMC Channel Mode Register -------- 
#define AT91C_PWMC_CPRE       ((unsigned int) 0xF <<  0) // (PWMC_CH) Channel Pre-scaler : PWMC_CLKx
#define     AT91C_PWMC_CPRE_MCK                  ((unsigned int) 0x0) // (PWMC_CH) 
#define     AT91C_PWMC_CPRE_MCKA                 ((unsigned int) 0xB) // (PWMC_CH) 
#define     AT91C_PWMC_CPRE_MCKB                 ((unsigned int) 0xC) // (PWMC_CH) 
#define AT91C_PWMC_CALG       ((unsigned int) 0x1 <<  8) // (PWMC_CH) Channel Alignment
#define AT91C_PWMC_CPOL       ((unsigned int) 0x1 <<  9) // (PWMC_CH) Channel Polarity
#define AT91C_PWMC_CPD        ((unsigned int) 0x1 << 10) // (PWMC_CH) Channel Update Period
// -------- PWMC_CDTYR : (PWMC_CH Offset: 0x4) PWMC Channel Duty Cycle Register -------- 
#define AT91C_PWMC_CDTY       ((unsigned int) 0x0 <<  0) // (PWMC_CH) Channel Duty Cycle
// -------- PWMC_CPRDR : (PWMC_CH Offset: 0x8) PWMC Channel Period Register -------- 
#define AT91C_PWMC_CPRD       ((unsigned int) 0x0 <<  0) // (PWMC_CH) Channel Period
// -------- PWMC_CCNTR : (PWMC_CH Offset: 0xc) PWMC Channel Counter Register -------- 
#define AT91C_PWMC_CCNT       ((unsigned int) 0x0 <<  0) // (PWMC_CH) Channel Counter
// -------- PWMC_CUPDR : (PWMC_CH Offset: 0x10) PWMC Channel Update Register -------- 
#define AT91C_PWMC_CUPD       ((unsigned int) 0x0 <<  0) // (PWMC_CH) Channel Update

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR Pulse Width Modulation Controller Interface
// *****************************************************************************
typedef struct _AT91S_PWMC {
    AT91_REG     PWMC_MR;   // PWMC Mode Register
    AT91_REG     PWMC_ENA;  // PWMC Enable Register
    AT91_REG     PWMC_DIS;  // PWMC Disable Register
    AT91_REG     PWMC_SR;   // PWMC Status Register
    AT91_REG     PWMC_IER;  // PWMC Interrupt Enable Register
    AT91_REG     PWMC_IDR;  // PWMC Interrupt Disable Register
    AT91_REG     PWMC_IMR;  // PWMC Interrupt Mask Register
    AT91_REG     PWMC_ISR;  // PWMC Interrupt Status Register
    AT91_REG     Reserved0[55];     // 
    AT91_REG     PWMC_VR;   // PWMC Version Register
    AT91_REG     Reserved1[64];     // 
    AT91S_PWMC_CH    PWMC_CH[32];   // PWMC Channel 0
} AT91S_PWMC, *AT91PS_PWMC;

// -------- PWMC_MR : (PWMC Offset: 0x0) PWMC Mode Register -------- 
#define AT91C_PWMC_DIVA       ((unsigned int) 0xFF <<  0) // (PWMC) CLKA divide factor.
#define AT91C_PWMC_PREA       ((unsigned int) 0xF <<  8) // (PWMC) Divider Input Clock Prescaler A
#define     AT91C_PWMC_PREA_MCK                  ((unsigned int) 0x0 <<  8) // (PWMC) 
#define AT91C_PWMC_DIVB       ((unsigned int) 0xFF << 16) // (PWMC) CLKB divide factor.
#define AT91C_PWMC_PREB       ((unsigned int) 0xF << 24) // (PWMC) Divider Input Clock Prescaler B
#define     AT91C_PWMC_PREB_MCK                  ((unsigned int) 0x0 << 24) // (PWMC) 
// -------- PWMC_ENA : (PWMC Offset: 0x4) PWMC Enable Register -------- 
#define AT91C_PWMC_CHID0      ((unsigned int) 0x1 <<  0) // (PWMC) Channel ID 0
#define AT91C_PWMC_CHID1      ((unsigned int) 0x1 <<  1) // (PWMC) Channel ID 1
#define AT91C_PWMC_CHID2      ((unsigned int) 0x1 <<  2) // (PWMC) Channel ID 2
#define AT91C_PWMC_CHID3      ((unsigned int) 0x1 <<  3) // (PWMC) Channel ID 3
#define AT91C_PWMC_CHID4      ((unsigned int) 0x1 <<  4) // (PWMC) Channel ID 4
#define AT91C_PWMC_CHID5      ((unsigned int) 0x1 <<  5) // (PWMC) Channel ID 5
#define AT91C_PWMC_CHID6      ((unsigned int) 0x1 <<  6) // (PWMC) Channel ID 6
#define AT91C_PWMC_CHID7      ((unsigned int) 0x1 <<  7) // (PWMC) Channel ID 7
// -------- PWMC_DIS : (PWMC Offset: 0x8) PWMC Disable Register -------- 
// -------- PWMC_SR : (PWMC Offset: 0xc) PWMC Status Register -------- 
// -------- PWMC_IER : (PWMC Offset: 0x10) PWMC Interrupt Enable Register -------- 
// -------- PWMC_IDR : (PWMC Offset: 0x14) PWMC Interrupt Disable Register -------- 
// -------- PWMC_IMR : (PWMC Offset: 0x18) PWMC Interrupt Mask Register -------- 
// -------- PWMC_ISR : (PWMC Offset: 0x1c) PWMC Interrupt Status Register -------- 

// *****************************************************************************
//              SOFTWARE API DEFINITION  FOR USB Device Interface
// *****************************************************************************
typedef struct _AT91S_UDP {
    AT91_REG     UDP_NUM;   // Frame Number Register
    AT91_REG     UDP_GLBSTATE;  // Global State Register
    AT91_REG     UDP_FADDR;     // Function Address Register
    AT91_REG     Reserved0[1];  // 
    AT91_REG     UDP_IER;   // Interrupt Enable Register
    AT91_REG     UDP_IDR;   // Interrupt Disable Register
    AT91_REG     UDP_IMR;   // Interrupt Mask Register
    AT91_REG     UDP_ISR;   // Interrupt Status Register
    AT91_REG     UDP_ICR;   // Interrupt Clear Register
    AT91_REG     Reserved1[1];  // 
    AT91_REG     UDP_RSTEP;     // Reset Endpoint Register
    AT91_REG     Reserved2[1];  // 
    AT91_REG     UDP_CSR[8];    // Endpoint Control and Status Register
    AT91_REG     UDP_FDR[8];    // Endpoint FIFO Data Register
    AT91_REG     Reserved3[1];  // 
    AT91_REG     UDP_TXVC;  // Transceiver Control Register
} AT91S_UDP, *AT91PS_UDP;

// -------- UDP_FRM_NUM : (UDP Offset: 0x0) USB Frame Number Register -------- 
#define AT91C_UDP_FRM_NUM     ((unsigned int) 0x7FF <<  0) // (UDP) Frame Number as Defined in the Packet Field Formats
#define AT91C_UDP_FRM_ERR     ((unsigned int) 0x1 << 16) // (UDP) Frame Error
#define AT91C_UDP_FRM_OK      ((unsigned int) 0x1 << 17) // (UDP) Frame OK
// -------- UDP_GLB_STATE : (UDP Offset: 0x4) USB Global State Register -------- 
#define AT91C_UDP_FADDEN      ((unsigned int) 0x1 <<  0) // (UDP) Function Address Enable
#define AT91C_UDP_CONFG       ((unsigned int) 0x1 <<  1) // (UDP) Configured
#define AT91C_UDP_ESR         ((unsigned int) 0x1 <<  2) // (UDP) Enable Send Resume
#define AT91C_UDP_RSMINPR     ((unsigned int) 0x1 <<  3) // (UDP) A Resume Has Been Sent to the Host
#define AT91C_UDP_RMWUPE      ((unsigned int) 0x1 <<  4) // (UDP) Remote Wake Up Enable
// -------- UDP_FADDR : (UDP Offset: 0x8) USB Function Address Register -------- 
#define AT91C_UDP_FADD        ((unsigned int) 0xFF <<  0) // (UDP) Function Address Value
#define AT91C_UDP_FEN         ((unsigned int) 0x1 <<  8) // (UDP) Function Enable
// -------- UDP_IER : (UDP Offset: 0x10) USB Interrupt Enable Register -------- 
#define AT91C_UDP_EPINT0      ((unsigned int) 0x1 <<  0) // (UDP) Endpoint 0 Interrupt
#define AT91C_UDP_EPINT1      ((unsigned int) 0x1 <<  1) // (UDP) Endpoint 0 Interrupt
#define AT91C_UDP_EPINT2      ((unsigned int) 0x1 <<  2) // (UDP) Endpoint 2 Interrupt
#define AT91C_UDP_EPINT3      ((unsigned int) 0x1 <<  3) // (UDP) Endpoint 3 Interrupt
#define AT91C_UDP_EPINT4      ((unsigned int) 0x1 <<  4) // (UDP) Endpoint 4 Interrupt
#define AT91C_UDP_EPINT5      ((unsigned int) 0x1 <<  5) // (UDP) Endpoint 5 Interrupt
#define AT91C_UDP_EPINT6      ((unsigned int) 0x1 <<  6) // (UDP) Endpoint 6 Interrupt
#define AT91C_UDP_EPINT7      ((unsigned int) 0x1 <<  7) // (UDP) Endpoint 7 Interrupt
#define AT91C_UDP_RXSUSP      ((unsigned int) 0x1 <<  8) // (UDP) USB Suspend Interrupt
#define AT91C_UDP_RXRSM       ((unsigned int) 0x1 <<  9) // (UDP) USB Resume Interrupt
#define AT91C_UDP_EXTRSM      ((unsigned int) 0x1 << 10) // (UDP) USB External Resume Interrupt
#define AT91C_UDP_SOFINT      ((unsigned int) 0x1 << 11) // (UDP) USB Start Of frame Interrupt
#define AT91C_UDP_WAKEUP      ((unsigned int) 0x1 << 13) // (UDP) USB Resume Interrupt
// -------- UDP_IDR : (UDP Offset: 0x14) USB Interrupt Disable Register -------- 
// -------- UDP_IMR : (UDP Offset: 0x18) USB Interrupt Mask Register -------- 
// -------- UDP_ISR : (UDP Offset: 0x1c) USB Interrupt Status Register -------- 
#define AT91C_UDP_ENDBUSRES   ((unsigned int) 0x1 << 12) // (UDP) USB End Of Bus Reset Interrupt
// -------- UDP_ICR : (UDP Offset: 0x20) USB Interrupt Clear Register -------- 
// -------- UDP_RST_EP : (UDP Offset: 0x28) USB Reset Endpoint Register -------- 
#define AT91C_UDP_EP0         ((unsigned int) 0x1 <<  0) // (UDP) Reset Endpoint 0
#define AT91C_UDP_EP1         ((unsigned int) 0x1 <<  1) // (UDP) Reset Endpoint 1
#define AT91C_UDP_EP2         ((unsigned int) 0x1 <<  2) // (UDP) Reset Endpoint 2
#define AT91C_UDP_EP3         ((unsigned int) 0x1 <<  3) // (UDP) Reset Endpoint 3
#define AT91C_UDP_EP4         ((unsigned int) 0x1 <<  4) // (UDP) Reset Endpoint 4
#define AT91C_UDP_EP5         ((unsigned int) 0x1 <<  5) // (UDP) Reset Endpoint 5
#define AT91C_UDP_EP6         ((unsigned int) 0x1 <<  6) // (UDP) Reset Endpoint 6
#define AT91C_UDP_EP7         ((unsigned int) 0x1 <<  7) // (UDP) Reset Endpoint 7
// -------- UDP_CSR : (UDP Offset: 0x30) USB Endpoint Control and Status Register -------- 
#define AT91C_UDP_TXCOMP      ((unsigned int) 0x1 <<  0) // (UDP) Generates an IN packet with data previously written in the DPR
#define AT91C_UDP_RX_DATA_BK0 ((unsigned int) 0x1 <<  1) // (UDP) Receive Data Bank 0
#define AT91C_UDP_RXSETUP     ((unsigned int) 0x1 <<  2) // (UDP) Sends STALL to the Host (Control endpoints)
#define AT91C_UDP_ISOERROR    ((unsigned int) 0x1 <<  3) // (UDP) Isochronous error (Isochronous endpoints)
#define AT91C_UDP_TXPKTRDY    ((unsigned int) 0x1 <<  4) // (UDP) Transmit Packet Ready
#define AT91C_UDP_FORCESTALL  ((unsigned int) 0x1 <<  5) // (UDP) Force Stall (used by Control, Bulk and Isochronous endpoints).
#define AT91C_UDP_RX_DATA_BK1 ((unsigned int) 0x1 <<  6) // (UDP) Receive Data Bank 1 (only used by endpoints with ping-pong attributes).
#define AT91C_UDP_DIR         ((unsigned int) 0x1 <<  7) // (UDP) Transfer Direction
#define AT91C_UDP_EPTYPE      ((unsigned int) 0x7 <<  8) // (UDP) Endpoint type
#define     AT91C_UDP_EPTYPE_CTRL                 ((unsigned int) 0x0 <<  8) // (UDP) Control
#define     AT91C_UDP_EPTYPE_ISO_OUT              ((unsigned int) 0x1 <<  8) // (UDP) Isochronous OUT
#define     AT91C_UDP_EPTYPE_BULK_OUT             ((unsigned int) 0x2 <<  8) // (UDP) Bulk OUT
#define     AT91C_UDP_EPTYPE_INT_OUT              ((unsigned int) 0x3 <<  8) // (UDP) Interrupt OUT
#define     AT91C_UDP_EPTYPE_ISO_IN               ((unsigned int) 0x5 <<  8) // (UDP) Isochronous IN
#define     AT91C_UDP_EPTYPE_BULK_IN              ((unsigned int) 0x6 <<  8) // (UDP) Bulk IN
#define     AT91C_UDP_EPTYPE_INT_IN               ((unsigned int) 0x7 <<  8) // (UDP) Interrupt IN
#define AT91C_UDP_DTGLE       ((unsigned int) 0x1 << 11) // (UDP) Data Toggle
#define AT91C_UDP_EPEDS       ((unsigned int) 0x1 << 15) // (UDP) Endpoint Enable Disable
#define AT91C_UDP_RXBYTECNT   ((unsigned int) 0x7FF << 16) // (UDP) Number Of Bytes Available in the FIFO
// -------- UDP_TXVC : (UDP Offset: 0x74) Transceiver Control Register -------- 
#define AT91C_UDP_TXVDIS      ((unsigned int) 0x1 <<  8) // (UDP) 
#define AT91C_UDP_PUON        ((unsigned int) 0x1 <<  9) // (UDP) Pull-up ON

// *****************************************************************************
//               REGISTER ADDRESS DEFINITION FOR AT91SAM7S64
// *****************************************************************************
// ========== Register definition for SYS peripheral ========== 
// ========== Register definition for AIC peripheral ========== 
#define AT91C_AIC_IVR   ((AT91_REG *)   0xFFFFF100) // (AIC) IRQ Vector Register
#define AT91C_AIC_SMR   ((AT91_REG *)   0xFFFFF000) // (AIC) Source Mode Register
#define AT91C_AIC_FVR   ((AT91_REG *)   0xFFFFF104) // (AIC) FIQ Vector Register
#define AT91C_AIC_DCR   ((AT91_REG *)   0xFFFFF138) // (AIC) Debug Control Register (Protect)
#define AT91C_AIC_EOICR ((AT91_REG *)   0xFFFFF130) // (AIC) End of Interrupt Command Register
#define AT91C_AIC_SVR   ((AT91_REG *)   0xFFFFF080) // (AIC) Source Vector Register
#define AT91C_AIC_FFSR  ((AT91_REG *)   0xFFFFF148) // (AIC) Fast Forcing Status Register
#define AT91C_AIC_ICCR  ((AT91_REG *)   0xFFFFF128) // (AIC) Interrupt Clear Command Register
#define AT91C_AIC_ISR   ((AT91_REG *)   0xFFFFF108) // (AIC) Interrupt Status Register
#define AT91C_AIC_IMR   ((AT91_REG *)   0xFFFFF110) // (AIC) Interrupt Mask Register
#define AT91C_AIC_IPR   ((AT91_REG *)   0xFFFFF10C) // (AIC) Interrupt Pending Register
#define AT91C_AIC_FFER  ((AT91_REG *)   0xFFFFF140) // (AIC) Fast Forcing Enable Register
#define AT91C_AIC_IECR  ((AT91_REG *)   0xFFFFF120) // (AIC) Interrupt Enable Command Register
#define AT91C_AIC_ISCR  ((AT91_REG *)   0xFFFFF12C) // (AIC) Interrupt Set Command Register
#define AT91C_AIC_FFDR  ((AT91_REG *)   0xFFFFF144) // (AIC) Fast Forcing Disable Register
#define AT91C_AIC_CISR  ((AT91_REG *)   0xFFFFF114) // (AIC) Core Interrupt Status Register
#define AT91C_AIC_IDCR  ((AT91_REG *)   0xFFFFF124) // (AIC) Interrupt Disable Command Register
#define AT91C_AIC_SPU   ((AT91_REG *)   0xFFFFF134) // (AIC) Spurious Vector Register
// ========== Register definition for PDC_DBGU peripheral ========== 
#define AT91C_DBGU_TCR  ((AT91_REG *)   0xFFFFF30C) // (PDC_DBGU) Transmit Counter Register
#define AT91C_DBGU_RNPR ((AT91_REG *)   0xFFFFF310) // (PDC_DBGU) Receive Next Pointer Register
#define AT91C_DBGU_TNPR ((AT91_REG *)   0xFFFFF318) // (PDC_DBGU) Transmit Next Pointer Register
#define AT91C_DBGU_TPR  ((AT91_REG *)   0xFFFFF308) // (PDC_DBGU) Transmit Pointer Register
#define AT91C_DBGU_RPR  ((AT91_REG *)   0xFFFFF300) // (PDC_DBGU) Receive Pointer Register
#define AT91C_DBGU_RCR  ((AT91_REG *)   0xFFFFF304) // (PDC_DBGU) Receive Counter Register
#define AT91C_DBGU_RNCR ((AT91_REG *)   0xFFFFF314) // (PDC_DBGU) Receive Next Counter Register
#define AT91C_DBGU_PTCR ((AT91_REG *)   0xFFFFF320) // (PDC_DBGU) PDC Transfer Control Register
#define AT91C_DBGU_PTSR ((AT91_REG *)   0xFFFFF324) // (PDC_DBGU) PDC Transfer Status Register
#define AT91C_DBGU_TNCR ((AT91_REG *)   0xFFFFF31C) // (PDC_DBGU) Transmit Next Counter Register
// ========== Register definition for DBGU peripheral ========== 
#define AT91C_DBGU_EXID ((AT91_REG *)   0xFFFFF244) // (DBGU) Chip ID Extension Register
#define AT91C_DBGU_BRGR ((AT91_REG *)   0xFFFFF220) // (DBGU) Baud Rate Generator Register
#define AT91C_DBGU_IDR  ((AT91_REG *)   0xFFFFF20C) // (DBGU) Interrupt Disable Register
#define AT91C_DBGU_CSR  ((AT91_REG *)   0xFFFFF214) // (DBGU) Channel Status Register
#define AT91C_DBGU_CIDR ((AT91_REG *)   0xFFFFF240) // (DBGU) Chip ID Register
#define AT91C_DBGU_MR   ((AT91_REG *)   0xFFFFF204) // (DBGU) Mode Register
#define AT91C_DBGU_IMR  ((AT91_REG *)   0xFFFFF210) // (DBGU) Interrupt Mask Register
#define AT91C_DBGU_CR   ((AT91_REG *)   0xFFFFF200) // (DBGU) Control Register
#define AT91C_DBGU_FNTR ((AT91_REG *)   0xFFFFF248) // (DBGU) Force NTRST Register
#define AT91C_DBGU_THR  ((AT91_REG *)   0xFFFFF21C) // (DBGU) Transmitter Holding Register
#define AT91C_DBGU_RHR  ((AT91_REG *)   0xFFFFF218) // (DBGU) Receiver Holding Register
#define AT91C_DBGU_IER  ((AT91_REG *)   0xFFFFF208) // (DBGU) Interrupt Enable Register
// ========== Register definition for PIOA peripheral ========== 
#define AT91C_PIOA_ODR  ((AT91_REG *)   0xFFFFF414) // (PIOA) Output Disable Registerr
#define AT91C_PIOA_SODR ((AT91_REG *)   0xFFFFF430) // (PIOA) Set Output Data Register
#define AT91C_PIOA_ISR  ((AT91_REG *)   0xFFFFF44C) // (PIOA) Interrupt Status Register
#define AT91C_PIOA_ABSR ((AT91_REG *)   0xFFFFF478) // (PIOA) AB Select Status Register
#define AT91C_PIOA_IER  ((AT91_REG *)   0xFFFFF440) // (PIOA) Interrupt Enable Register
#define AT91C_PIOA_PPUDR ((AT91_REG *)  0xFFFFF460) // (PIOA) Pull-up Disable Register
#define AT91C_PIOA_IMR  ((AT91_REG *)   0xFFFFF448) // (PIOA) Interrupt Mask Register
#define AT91C_PIOA_PER  ((AT91_REG *)   0xFFFFF400) // (PIOA) PIO Enable Register
#define AT91C_PIOA_IFDR ((AT91_REG *)   0xFFFFF424) // (PIOA) Input Filter Disable Register
#define AT91C_PIOA_OWDR ((AT91_REG *)   0xFFFFF4A4) // (PIOA) Output Write Disable Register
#define AT91C_PIOA_MDSR ((AT91_REG *)   0xFFFFF458) // (PIOA) Multi-driver Status Register
#define AT91C_PIOA_IDR  ((AT91_REG *)   0xFFFFF444) // (PIOA) Interrupt Disable Register
#define AT91C_PIOA_ODSR ((AT91_REG *)   0xFFFFF438) // (PIOA) Output Data Status Register
#define AT91C_PIOA_PPUSR ((AT91_REG *)  0xFFFFF468) // (PIOA) Pull-up Status Register
#define AT91C_PIOA_OWSR ((AT91_REG *)   0xFFFFF4A8) // (PIOA) Output Write Status Register
#define AT91C_PIOA_BSR  ((AT91_REG *)   0xFFFFF474) // (PIOA) Select B Register
#define AT91C_PIOA_OWER ((AT91_REG *)   0xFFFFF4A0) // (PIOA) Output Write Enable Register
#define AT91C_PIOA_IFER ((AT91_REG *)   0xFFFFF420) // (PIOA) Input Filter Enable Register
#define AT91C_PIOA_PDSR ((AT91_REG *)   0xFFFFF43C) // (PIOA) Pin Data Status Register
#define AT91C_PIOA_PPUER ((AT91_REG *)  0xFFFFF464) // (PIOA) Pull-up Enable Register
#define AT91C_PIOA_OSR  ((AT91_REG *)   0xFFFFF418) // (PIOA) Output Status Register
#define AT91C_PIOA_ASR  ((AT91_REG *)   0xFFFFF470) // (PIOA) Select A Register
#define AT91C_PIOA_MDDR ((AT91_REG *)   0xFFFFF454) // (PIOA) Multi-driver Disable Register
#define AT91C_PIOA_CODR ((AT91_REG *)   0xFFFFF434) // (PIOA) Clear Output Data Register
#define AT91C_PIOA_MDER ((AT91_REG *)   0xFFFFF450) // (PIOA) Multi-driver Enable Register
#define AT91C_PIOA_PDR  ((AT91_REG *)   0xFFFFF404) // (PIOA) PIO Disable Register
#define AT91C_PIOA_IFSR ((AT91_REG *)   0xFFFFF428) // (PIOA) Input Filter Status Register
#define AT91C_PIOA_OER  ((AT91_REG *)   0xFFFFF410) // (PIOA) Output Enable Register
#define AT91C_PIOA_PSR  ((AT91_REG *)   0xFFFFF408) // (PIOA) PIO Status Register
// ========== Register definition for CKGR peripheral ========== 
#define AT91C_CKGR_MOR  ((AT91_REG *)   0xFFFFFC20) // (CKGR) Main Oscillator Register
#define AT91C_CKGR_PLLR ((AT91_REG *)   0xFFFFFC2C) // (CKGR) PLL Register
#define AT91C_CKGR_MCFR ((AT91_REG *)   0xFFFFFC24) // (CKGR) Main Clock  Frequency Register
// ========== Register definition for PMC peripheral ========== 
#define AT91C_PMC_IDR   ((AT91_REG *)   0xFFFFFC64) // (PMC) Interrupt Disable Register
#define AT91C_PMC_MOR   ((AT91_REG *)   0xFFFFFC20) // (PMC) Main Oscillator Register
#define AT91C_PMC_PLLR  ((AT91_REG *)   0xFFFFFC2C) // (PMC) PLL Register
#define AT91C_PMC_PCER  ((AT91_REG *)   0xFFFFFC10) // (PMC) Peripheral Clock Enable Register
#define AT91C_PMC_PCKR  ((AT91_REG *)   0xFFFFFC40) // (PMC) Programmable Clock Register
#define AT91C_PMC_MCKR  ((AT91_REG *)   0xFFFFFC30) // (PMC) Master Clock Register
#define AT91C_PMC_SCDR  ((AT91_REG *)   0xFFFFFC04) // (PMC) System Clock Disable Register
#define AT91C_PMC_PCDR  ((AT91_REG *)   0xFFFFFC14) // (PMC) Peripheral Clock Disable Register
#define AT91C_PMC_SCSR  ((AT91_REG *)   0xFFFFFC08) // (PMC) System Clock Status Register
#define AT91C_PMC_PCSR  ((AT91_REG *)   0xFFFFFC18) // (PMC) Peripheral Clock Status Register
#define AT91C_PMC_MCFR  ((AT91_REG *)   0xFFFFFC24) // (PMC) Main Clock  Frequency Register
#define AT91C_PMC_SCER  ((AT91_REG *)   0xFFFFFC00) // (PMC) System Clock Enable Register
#define AT91C_PMC_IMR   ((AT91_REG *)   0xFFFFFC6C) // (PMC) Interrupt Mask Register
#define AT91C_PMC_IER   ((AT91_REG *)   0xFFFFFC60) // (PMC) Interrupt Enable Register
#define AT91C_PMC_SR    ((AT91_REG *)   0xFFFFFC68) // (PMC) Status Register
// ========== Register definition for RSTC peripheral ========== 
#define AT91C_RSTC_RCR  ((AT91_REG *)   0xFFFFFD00) // (RSTC) Reset Control Register
#define AT91C_RSTC_RMR  ((AT91_REG *)   0xFFFFFD08) // (RSTC) Reset Mode Register
#define AT91C_RSTC_RSR  ((AT91_REG *)   0xFFFFFD04) // (RSTC) Reset Status Register
// ========== Register definition for RTTC peripheral ========== 
#define AT91C_RTTC_RTSR ((AT91_REG *)   0xFFFFFD2C) // (RTTC) Real-time Status Register
#define AT91C_RTTC_RTMR ((AT91_REG *)   0xFFFFFD20) // (RTTC) Real-time Mode Register
#define AT91C_RTTC_RTVR ((AT91_REG *)   0xFFFFFD28) // (RTTC) Real-time Value Register
#define AT91C_RTTC_RTAR ((AT91_REG *)   0xFFFFFD24) // (RTTC) Real-time Alarm Register
// ========== Register definition for PITC peripheral ========== 
#define AT91C_PITC_PIVR ((AT91_REG *)   0xFFFFFD38) // (PITC) Period Interval Value Register
#define AT91C_PITC_PISR ((AT91_REG *)   0xFFFFFD34) // (PITC) Period Interval Status Register
#define AT91C_PITC_PIIR ((AT91_REG *)   0xFFFFFD3C) // (PITC) Period Interval Image Register
#define AT91C_PITC_PIMR ((AT91_REG *)   0xFFFFFD30) // (PITC) Period Interval Mode Register
// ========== Register definition for WDTC peripheral ========== 
#define AT91C_WDTC_WDCR ((AT91_REG *)   0xFFFFFD40) // (WDTC) Watchdog Control Register
#define AT91C_WDTC_WDSR ((AT91_REG *)   0xFFFFFD48) // (WDTC) Watchdog Status Register
#define AT91C_WDTC_WDMR ((AT91_REG *)   0xFFFFFD44) // (WDTC) Watchdog Mode Register
// ========== Register definition for VREG peripheral ========== 
#define AT91C_VREG_MR   ((AT91_REG *)   0xFFFFFD60) // (VREG) Voltage Regulator Mode Register
// ========== Register definition for MC peripheral ========== 
#define AT91C_MC_ASR    ((AT91_REG *)   0xFFFFFF04) // (MC) MC Abort Status Register
#define AT91C_MC_RCR    ((AT91_REG *)   0xFFFFFF00) // (MC) MC Remap Control Register
#define AT91C_MC_FCR    ((AT91_REG *)   0xFFFFFF64) // (MC) MC Flash Command Register
#define AT91C_MC_AASR   ((AT91_REG *)   0xFFFFFF08) // (MC) MC Abort Address Status Register
#define AT91C_MC_FSR    ((AT91_REG *)   0xFFFFFF68) // (MC) MC Flash Status Register
#define AT91C_MC_FMR    ((AT91_REG *)   0xFFFFFF60) // (MC) MC Flash Mode Register
// ========== Register definition for PDC_SPI peripheral ========== 
#define AT91C_SPI_PTCR  ((AT91_REG *)   0xFFFE0120) // (PDC_SPI) PDC Transfer Control Register
#define AT91C_SPI_TPR   ((AT91_REG *)   0xFFFE0108) // (PDC_SPI) Transmit Pointer Register
#define AT91C_SPI_TCR   ((AT91_REG *)   0xFFFE010C) // (PDC_SPI) Transmit Counter Register
#define AT91C_SPI_RCR   ((AT91_REG *)   0xFFFE0104) // (PDC_SPI) Receive Counter Register
#define AT91C_SPI_PTSR  ((AT91_REG *)   0xFFFE0124) // (PDC_SPI) PDC Transfer Status Register
#define AT91C_SPI_RNPR  ((AT91_REG *)   0xFFFE0110) // (PDC_SPI) Receive Next Pointer Register
#define AT91C_SPI_RPR   ((AT91_REG *)   0xFFFE0100) // (PDC_SPI) Receive Pointer Register
#define AT91C_SPI_TNCR  ((AT91_REG *)   0xFFFE011C) // (PDC_SPI) Transmit Next Counter Register
#define AT91C_SPI_RNCR  ((AT91_REG *)   0xFFFE0114) // (PDC_SPI) Receive Next Counter Register
#define AT91C_SPI_TNPR  ((AT91_REG *)   0xFFFE0118) // (PDC_SPI) Transmit Next Pointer Register
// ========== Register definition for SPI peripheral ========== 
#define AT91C_SPI_IER   ((AT91_REG *)   0xFFFE0014) // (SPI) Interrupt Enable Register
#define AT91C_SPI_SR    ((AT91_REG *)   0xFFFE0010) // (SPI) Status Register
#define AT91C_SPI_IDR   ((AT91_REG *)   0xFFFE0018) // (SPI) Interrupt Disable Register
#define AT91C_SPI_CR    ((AT91_REG *)   0xFFFE0000) // (SPI) Control Register
#define AT91C_SPI_MR    ((AT91_REG *)   0xFFFE0004) // (SPI) Mode Register
#define AT91C_SPI_IMR   ((AT91_REG *)   0xFFFE001C) // (SPI) Interrupt Mask Register
#define AT91C_SPI_TDR   ((AT91_REG *)   0xFFFE000C) // (SPI) Transmit Data Register
#define AT91C_SPI_RDR   ((AT91_REG *)   0xFFFE0008) // (SPI) Receive Data Register
#define AT91C_SPI_CSR   ((AT91_REG *)   0xFFFE0030) // (SPI) Chip Select Register
// ========== Register definition for PDC_ADC peripheral ========== 
#define AT91C_ADC_PTSR  ((AT91_REG *)   0xFFFD8124) // (PDC_ADC) PDC Transfer Status Register
#define AT91C_ADC_PTCR  ((AT91_REG *)   0xFFFD8120) // (PDC_ADC) PDC Transfer Control Register
#define AT91C_ADC_TNPR  ((AT91_REG *)   0xFFFD8118) // (PDC_ADC) Transmit Next Pointer Register
#define AT91C_ADC_TNCR  ((AT91_REG *)   0xFFFD811C) // (PDC_ADC) Transmit Next Counter Register
#define AT91C_ADC_RNPR  ((AT91_REG *)   0xFFFD8110) // (PDC_ADC) Receive Next Pointer Register
#define AT91C_ADC_RNCR  ((AT91_REG *)   0xFFFD8114) // (PDC_ADC) Receive Next Counter Register
#define AT91C_ADC_RPR   ((AT91_REG *)   0xFFFD8100) // (PDC_ADC) Receive Pointer Register
#define AT91C_ADC_TCR   ((AT91_REG *)   0xFFFD810C) // (PDC_ADC) Transmit Counter Register
#define AT91C_ADC_TPR   ((AT91_REG *)   0xFFFD8108) // (PDC_ADC) Transmit Pointer Register
#define AT91C_ADC_RCR   ((AT91_REG *)   0xFFFD8104) // (PDC_ADC) Receive Counter Register
// ========== Register definition for ADC peripheral ========== 
#define AT91C_ADC_CDR2  ((AT91_REG *)   0xFFFD8038) // (ADC) ADC Channel Data Register 2
#define AT91C_ADC_CDR3  ((AT91_REG *)   0xFFFD803C) // (ADC) ADC Channel Data Register 3
#define AT91C_ADC_CDR0  ((AT91_REG *)   0xFFFD8030) // (ADC) ADC Channel Data Register 0
#define AT91C_ADC_CDR5  ((AT91_REG *)   0xFFFD8044) // (ADC) ADC Channel Data Register 5
#define AT91C_ADC_CHDR  ((AT91_REG *)   0xFFFD8014) // (ADC) ADC Channel Disable Register
#define AT91C_ADC_SR    ((AT91_REG *)   0xFFFD801C) // (ADC) ADC Status Register
#define AT91C_ADC_CDR4  ((AT91_REG *)   0xFFFD8040) // (ADC) ADC Channel Data Register 4
#define AT91C_ADC_CDR1  ((AT91_REG *)   0xFFFD8034) // (ADC) ADC Channel Data Register 1
#define AT91C_ADC_LCDR  ((AT91_REG *)   0xFFFD8020) // (ADC) ADC Last Converted Data Register
#define AT91C_ADC_IDR   ((AT91_REG *)   0xFFFD8028) // (ADC) ADC Interrupt Disable Register
#define AT91C_ADC_CR    ((AT91_REG *)   0xFFFD8000) // (ADC) ADC Control Register
#define AT91C_ADC_CDR7  ((AT91_REG *)   0xFFFD804C) // (ADC) ADC Channel Data Register 7
#define AT91C_ADC_CDR6  ((AT91_REG *)   0xFFFD8048) // (ADC) ADC Channel Data Register 6
#define AT91C_ADC_IER   ((AT91_REG *)   0xFFFD8024) // (ADC) ADC Interrupt Enable Register
#define AT91C_ADC_CHER  ((AT91_REG *)   0xFFFD8010) // (ADC) ADC Channel Enable Register
#define AT91C_ADC_CHSR  ((AT91_REG *)   0xFFFD8018) // (ADC) ADC Channel Status Register
#define AT91C_ADC_MR    ((AT91_REG *)   0xFFFD8004) // (ADC) ADC Mode Register
#define AT91C_ADC_IMR   ((AT91_REG *)   0xFFFD802C) // (ADC) ADC Interrupt Mask Register
// ========== Register definition for PDC_SSC peripheral ========== 
#define AT91C_SSC_TNCR  ((AT91_REG *)   0xFFFD411C) // (PDC_SSC) Transmit Next Counter Register
#define AT91C_SSC_RPR   ((AT91_REG *)   0xFFFD4100) // (PDC_SSC) Receive Pointer Register
#define AT91C_SSC_RNCR  ((AT91_REG *)   0xFFFD4114) // (PDC_SSC) Receive Next Counter Register
#define AT91C_SSC_TPR   ((AT91_REG *)   0xFFFD4108) // (PDC_SSC) Transmit Pointer Register
#define AT91C_SSC_PTCR  ((AT91_REG *)   0xFFFD4120) // (PDC_SSC) PDC Transfer Control Register
#define AT91C_SSC_TCR   ((AT91_REG *)   0xFFFD410C) // (PDC_SSC) Transmit Counter Register
#define AT91C_SSC_RCR   ((AT91_REG *)   0xFFFD4104) // (PDC_SSC) Receive Counter Register
#define AT91C_SSC_RNPR  ((AT91_REG *)   0xFFFD4110) // (PDC_SSC) Receive Next Pointer Register
#define AT91C_SSC_TNPR  ((AT91_REG *)   0xFFFD4118) // (PDC_SSC) Transmit Next Pointer Register
#define AT91C_SSC_PTSR  ((AT91_REG *)   0xFFFD4124) // (PDC_SSC) PDC Transfer Status Register
// ========== Register definition for SSC peripheral ========== 
#define AT91C_SSC_RHR   ((AT91_REG *)   0xFFFD4020) // (SSC) Receive Holding Register
#define AT91C_SSC_RSHR  ((AT91_REG *)   0xFFFD4030) // (SSC) Receive Sync Holding Register
#define AT91C_SSC_TFMR  ((AT91_REG *)   0xFFFD401C) // (SSC) Transmit Frame Mode Register
#define AT91C_SSC_IDR   ((AT91_REG *)   0xFFFD4048) // (SSC) Interrupt Disable Register
#define AT91C_SSC_THR   ((AT91_REG *)   0xFFFD4024) // (SSC) Transmit Holding Register
#define AT91C_SSC_RCMR  ((AT91_REG *)   0xFFFD4010) // (SSC) Receive Clock ModeRegister
#define AT91C_SSC_IER   ((AT91_REG *)   0xFFFD4044) // (SSC) Interrupt Enable Register
#define AT91C_SSC_TSHR  ((AT91_REG *)   0xFFFD4034) // (SSC) Transmit Sync Holding Register
#define AT91C_SSC_SR    ((AT91_REG *)   0xFFFD4040) // (SSC) Status Register
#define AT91C_SSC_CMR   ((AT91_REG *)   0xFFFD4004) // (SSC) Clock Mode Register
#define AT91C_SSC_TCMR  ((AT91_REG *)   0xFFFD4018) // (SSC) Transmit Clock Mode Register
#define AT91C_SSC_CR    ((AT91_REG *)   0xFFFD4000) // (SSC) Control Register
#define AT91C_SSC_IMR   ((AT91_REG *)   0xFFFD404C) // (SSC) Interrupt Mask Register
#define AT91C_SSC_RFMR  ((AT91_REG *)   0xFFFD4014) // (SSC) Receive Frame Mode Register
// ========== Register definition for PDC_US1 peripheral ========== 
#define AT91C_US1_RNCR  ((AT91_REG *)   0xFFFC4114) // (PDC_US1) Receive Next Counter Register
#define AT91C_US1_PTCR  ((AT91_REG *)   0xFFFC4120) // (PDC_US1) PDC Transfer Control Register
#define AT91C_US1_TCR   ((AT91_REG *)   0xFFFC410C) // (PDC_US1) Transmit Counter Register
#define AT91C_US1_PTSR  ((AT91_REG *)   0xFFFC4124) // (PDC_US1) PDC Transfer Status Register
#define AT91C_US1_TNPR  ((AT91_REG *)   0xFFFC4118) // (PDC_US1) Transmit Next Pointer Register
#define AT91C_US1_RCR   ((AT91_REG *)   0xFFFC4104) // (PDC_US1) Receive Counter Register
#define AT91C_US1_RNPR  ((AT91_REG *)   0xFFFC4110) // (PDC_US1) Receive Next Pointer Register
#define AT91C_US1_RPR   ((AT91_REG *)   0xFFFC4100) // (PDC_US1) Receive Pointer Register
#define AT91C_US1_TNCR  ((AT91_REG *)   0xFFFC411C) // (PDC_US1) Transmit Next Counter Register
#define AT91C_US1_TPR   ((AT91_REG *)   0xFFFC4108) // (PDC_US1) Transmit Pointer Register
// ========== Register definition for US1 peripheral ========== 
#define AT91C_US1_IF    ((AT91_REG *)   0xFFFC404C) // (US1) IRDA_FILTER Register
#define AT91C_US1_NER   ((AT91_REG *)   0xFFFC4044) // (US1) Nb Errors Register
#define AT91C_US1_RTOR  ((AT91_REG *)   0xFFFC4024) // (US1) Receiver Time-out Register
#define AT91C_US1_CSR   ((AT91_REG *)   0xFFFC4014) // (US1) Channel Status Register
#define AT91C_US1_IDR   ((AT91_REG *)   0xFFFC400C) // (US1) Interrupt Disable Register
#define AT91C_US1_IER   ((AT91_REG *)   0xFFFC4008) // (US1) Interrupt Enable Register
#define AT91C_US1_THR   ((AT91_REG *)   0xFFFC401C) // (US1) Transmitter Holding Register
#define AT91C_US1_TTGR  ((AT91_REG *)   0xFFFC4028) // (US1) Transmitter Time-guard Register
#define AT91C_US1_RHR   ((AT91_REG *)   0xFFFC4018) // (US1) Receiver Holding Register
#define AT91C_US1_BRGR  ((AT91_REG *)   0xFFFC4020) // (US1) Baud Rate Generator Register
#define AT91C_US1_IMR   ((AT91_REG *)   0xFFFC4010) // (US1) Interrupt Mask Register
#define AT91C_US1_FIDI  ((AT91_REG *)   0xFFFC4040) // (US1) FI_DI_Ratio Register
#define AT91C_US1_CR    ((AT91_REG *)   0xFFFC4000) // (US1) Control Register
#define AT91C_US1_MR    ((AT91_REG *)   0xFFFC4004) // (US1) Mode Register
// ========== Register definition for PDC_US0 peripheral ========== 
#define AT91C_US0_TNPR  ((AT91_REG *)   0xFFFC0118) // (PDC_US0) Transmit Next Pointer Register
#define AT91C_US0_RNPR  ((AT91_REG *)   0xFFFC0110) // (PDC_US0) Receive Next Pointer Register
#define AT91C_US0_TCR   ((AT91_REG *)   0xFFFC010C) // (PDC_US0) Transmit Counter Register
#define AT91C_US0_PTCR  ((AT91_REG *)   0xFFFC0120) // (PDC_US0) PDC Transfer Control Register
#define AT91C_US0_PTSR  ((AT91_REG *)   0xFFFC0124) // (PDC_US0) PDC Transfer Status Register
#define AT91C_US0_TNCR  ((AT91_REG *)   0xFFFC011C) // (PDC_US0) Transmit Next Counter Register
#define AT91C_US0_TPR   ((AT91_REG *)   0xFFFC0108) // (PDC_US0) Transmit Pointer Register
#define AT91C_US0_RCR   ((AT91_REG *)   0xFFFC0104) // (PDC_US0) Receive Counter Register
#define AT91C_US0_RPR   ((AT91_REG *)   0xFFFC0100) // (PDC_US0) Receive Pointer Register
#define AT91C_US0_RNCR  ((AT91_REG *)   0xFFFC0114) // (PDC_US0) Receive Next Counter Register
// ========== Register definition for US0 peripheral ========== 
#define AT91C_US0_BRGR  ((AT91_REG *)   0xFFFC0020) // (US0) Baud Rate Generator Register
#define AT91C_US0_NER   ((AT91_REG *)   0xFFFC0044) // (US0) Nb Errors Register
#define AT91C_US0_CR    ((AT91_REG *)   0xFFFC0000) // (US0) Control Register
#define AT91C_US0_IMR   ((AT91_REG *)   0xFFFC0010) // (US0) Interrupt Mask Register
#define AT91C_US0_FIDI  ((AT91_REG *)   0xFFFC0040) // (US0) FI_DI_Ratio Register
#define AT91C_US0_TTGR  ((AT91_REG *)   0xFFFC0028) // (US0) Transmitter Time-guard Register
#define AT91C_US0_MR    ((AT91_REG *)   0xFFFC0004) // (US0) Mode Register
#define AT91C_US0_RTOR  ((AT91_REG *)   0xFFFC0024) // (US0) Receiver Time-out Register
#define AT91C_US0_CSR   ((AT91_REG *)   0xFFFC0014) // (US0) Channel Status Register
#define AT91C_US0_RHR   ((AT91_REG *)   0xFFFC0018) // (US0) Receiver Holding Register
#define AT91C_US0_IDR   ((AT91_REG *)   0xFFFC000C) // (US0) Interrupt Disable Register
#define AT91C_US0_THR   ((AT91_REG *)   0xFFFC001C) // (US0) Transmitter Holding Register
#define AT91C_US0_IF    ((AT91_REG *)   0xFFFC004C) // (US0) IRDA_FILTER Register
#define AT91C_US0_IER   ((AT91_REG *)   0xFFFC0008) // (US0) Interrupt Enable Register
// ========== Register definition for TWI peripheral ========== 
#define AT91C_TWI_IER   ((AT91_REG *)   0xFFFB8024) // (TWI) Interrupt Enable Register
#define AT91C_TWI_CR    ((AT91_REG *)   0xFFFB8000) // (TWI) Control Register
#define AT91C_TWI_SR    ((AT91_REG *)   0xFFFB8020) // (TWI) Status Register
#define AT91C_TWI_IMR   ((AT91_REG *)   0xFFFB802C) // (TWI) Interrupt Mask Register
#define AT91C_TWI_THR   ((AT91_REG *)   0xFFFB8034) // (TWI) Transmit Holding Register
#define AT91C_TWI_IDR   ((AT91_REG *)   0xFFFB8028) // (TWI) Interrupt Disable Register
#define AT91C_TWI_IADR  ((AT91_REG *)   0xFFFB800C) // (TWI) Internal Address Register
#define AT91C_TWI_MMR   ((AT91_REG *)   0xFFFB8004) // (TWI) Master Mode Register
#define AT91C_TWI_CWGR  ((AT91_REG *)   0xFFFB8010) // (TWI) Clock Waveform Generator Register
#define AT91C_TWI_RHR   ((AT91_REG *)   0xFFFB8030) // (TWI) Receive Holding Register
// ========== Register definition for TC0 peripheral ========== 
#define AT91C_TC0_SR    ((AT91_REG *)   0xFFFA0020) // (TC0) Status Register
#define AT91C_TC0_RC    ((AT91_REG *)   0xFFFA001C) // (TC0) Register C
#define AT91C_TC0_RB    ((AT91_REG *)   0xFFFA0018) // (TC0) Register B
#define AT91C_TC0_CCR   ((AT91_REG *)   0xFFFA0000) // (TC0) Channel Control Register
#define AT91C_TC0_CMR   ((AT91_REG *)   0xFFFA0004) // (TC0) Channel Mode Register (Capture Mode / Waveform Mode)
#define AT91C_TC0_IER   ((AT91_REG *)   0xFFFA0024) // (TC0) Interrupt Enable Register
#define AT91C_TC0_RA    ((AT91_REG *)   0xFFFA0014) // (TC0) Register A
#define AT91C_TC0_IDR   ((AT91_REG *)   0xFFFA0028) // (TC0) Interrupt Disable Register
#define AT91C_TC0_CV    ((AT91_REG *)   0xFFFA0010) // (TC0) Counter Value
#define AT91C_TC0_IMR   ((AT91_REG *)   0xFFFA002C) // (TC0) Interrupt Mask Register
// ========== Register definition for TC1 peripheral ========== 
#define AT91C_TC1_RB    ((AT91_REG *)   0xFFFA0058) // (TC1) Register B
#define AT91C_TC1_CCR   ((AT91_REG *)   0xFFFA0040) // (TC1) Channel Control Register
#define AT91C_TC1_IER   ((AT91_REG *)   0xFFFA0064) // (TC1) Interrupt Enable Register
#define AT91C_TC1_IDR   ((AT91_REG *)   0xFFFA0068) // (TC1) Interrupt Disable Register
#define AT91C_TC1_SR    ((AT91_REG *)   0xFFFA0060) // (TC1) Status Register
#define AT91C_TC1_CMR   ((AT91_REG *)   0xFFFA0044) // (TC1) Channel Mode Register (Capture Mode / Waveform Mode)
#define AT91C_TC1_RA    ((AT91_REG *)   0xFFFA0054) // (TC1) Register A
#define AT91C_TC1_RC    ((AT91_REG *)   0xFFFA005C) // (TC1) Register C
#define AT91C_TC1_IMR   ((AT91_REG *)   0xFFFA006C) // (TC1) Interrupt Mask Register
#define AT91C_TC1_CV    ((AT91_REG *)   0xFFFA0050) // (TC1) Counter Value
// ========== Register definition for TC2 peripheral ========== 
#define AT91C_TC2_CMR   ((AT91_REG *)   0xFFFA0084) // (TC2) Channel Mode Register (Capture Mode / Waveform Mode)
#define AT91C_TC2_CCR   ((AT91_REG *)   0xFFFA0080) // (TC2) Channel Control Register
#define AT91C_TC2_CV    ((AT91_REG *)   0xFFFA0090) // (TC2) Counter Value
#define AT91C_TC2_RA    ((AT91_REG *)   0xFFFA0094) // (TC2) Register A
#define AT91C_TC2_RB    ((AT91_REG *)   0xFFFA0098) // (TC2) Register B
#define AT91C_TC2_IDR   ((AT91_REG *)   0xFFFA00A8) // (TC2) Interrupt Disable Register
#define AT91C_TC2_IMR   ((AT91_REG *)   0xFFFA00AC) // (TC2) Interrupt Mask Register
#define AT91C_TC2_RC    ((AT91_REG *)   0xFFFA009C) // (TC2) Register C
#define AT91C_TC2_IER   ((AT91_REG *)   0xFFFA00A4) // (TC2) Interrupt Enable Register
#define AT91C_TC2_SR    ((AT91_REG *)   0xFFFA00A0) // (TC2) Status Register
// ========== Register definition for TCB peripheral ========== 
#define AT91C_TCB_BMR   ((AT91_REG *)   0xFFFA00C4) // (TCB) TC Block Mode Register
#define AT91C_TCB_BCR   ((AT91_REG *)   0xFFFA00C0) // (TCB) TC Block Control Register
// ========== Register definition for PWMC_CH3 peripheral ========== 
#define AT91C_PWMC_CH3_CUPDR ((AT91_REG *)  0xFFFCC270) // (PWMC_CH3) Channel Update Register
#define AT91C_PWMC_CH3_Reserved ((AT91_REG *)   0xFFFCC274) // (PWMC_CH3) Reserved
#define AT91C_PWMC_CH3_CPRDR ((AT91_REG *)  0xFFFCC268) // (PWMC_CH3) Channel Period Register
#define AT91C_PWMC_CH3_CDTYR ((AT91_REG *)  0xFFFCC264) // (PWMC_CH3) Channel Duty Cycle Register
#define AT91C_PWMC_CH3_CCNTR ((AT91_REG *)  0xFFFCC26C) // (PWMC_CH3) Channel Counter Register
#define AT91C_PWMC_CH3_CMR ((AT91_REG *)    0xFFFCC260) // (PWMC_CH3) Channel Mode Register
// ========== Register definition for PWMC_CH2 peripheral ========== 
#define AT91C_PWMC_CH2_Reserved ((AT91_REG *)   0xFFFCC254) // (PWMC_CH2) Reserved
#define AT91C_PWMC_CH2_CMR ((AT91_REG *)    0xFFFCC240) // (PWMC_CH2) Channel Mode Register
#define AT91C_PWMC_CH2_CCNTR ((AT91_REG *)  0xFFFCC24C) // (PWMC_CH2) Channel Counter Register
#define AT91C_PWMC_CH2_CPRDR ((AT91_REG *)  0xFFFCC248) // (PWMC_CH2) Channel Period Register
#define AT91C_PWMC_CH2_CUPDR ((AT91_REG *)  0xFFFCC250) // (PWMC_CH2) Channel Update Register
#define AT91C_PWMC_CH2_CDTYR ((AT91_REG *)  0xFFFCC244) // (PWMC_CH2) Channel Duty Cycle Register
// ========== Register definition for PWMC_CH1 peripheral ========== 
#define AT91C_PWMC_CH1_Reserved ((AT91_REG *)   0xFFFCC234) // (PWMC_CH1) Reserved
#define AT91C_PWMC_CH1_CUPDR ((AT91_REG *)  0xFFFCC230) // (PWMC_CH1) Channel Update Register
#define AT91C_PWMC_CH1_CPRDR ((AT91_REG *)  0xFFFCC228) // (PWMC_CH1) Channel Period Register
#define AT91C_PWMC_CH1_CCNTR ((AT91_REG *)  0xFFFCC22C) // (PWMC_CH1) Channel Counter Register
#define AT91C_PWMC_CH1_CDTYR ((AT91_REG *)  0xFFFCC224) // (PWMC_CH1) Channel Duty Cycle Register
#define AT91C_PWMC_CH1_CMR ((AT91_REG *)    0xFFFCC220) // (PWMC_CH1) Channel Mode Register
// ========== Register definition for PWMC_CH0 peripheral ========== 
#define AT91C_PWMC_CH0_Reserved ((AT91_REG *)   0xFFFCC214) // (PWMC_CH0) Reserved
#define AT91C_PWMC_CH0_CPRDR ((AT91_REG *)  0xFFFCC208) // (PWMC_CH0) Channel Period Register
#define AT91C_PWMC_CH0_CDTYR ((AT91_REG *)  0xFFFCC204) // (PWMC_CH0) Channel Duty Cycle Register
#define AT91C_PWMC_CH0_CMR ((AT91_REG *)    0xFFFCC200) // (PWMC_CH0) Channel Mode Register
#define AT91C_PWMC_CH0_CUPDR ((AT91_REG *)  0xFFFCC210) // (PWMC_CH0) Channel Update Register
#define AT91C_PWMC_CH0_CCNTR ((AT91_REG *)  0xFFFCC20C) // (PWMC_CH0) Channel Counter Register
// ========== Register definition for PWMC peripheral ========== 
#define AT91C_PWMC_IDR  ((AT91_REG *)   0xFFFCC014) // (PWMC) PWMC Interrupt Disable Register
#define AT91C_PWMC_DIS  ((AT91_REG *)   0xFFFCC008) // (PWMC) PWMC Disable Register
#define AT91C_PWMC_IER  ((AT91_REG *)   0xFFFCC010) // (PWMC) PWMC Interrupt Enable Register
#define AT91C_PWMC_VR   ((AT91_REG *)   0xFFFCC0FC) // (PWMC) PWMC Version Register
#define AT91C_PWMC_ISR  ((AT91_REG *)   0xFFFCC01C) // (PWMC) PWMC Interrupt Status Register
#define AT91C_PWMC_SR   ((AT91_REG *)   0xFFFCC00C) // (PWMC) PWMC Status Register
#define AT91C_PWMC_IMR  ((AT91_REG *)   0xFFFCC018) // (PWMC) PWMC Interrupt Mask Register
#define AT91C_PWMC_MR   ((AT91_REG *)   0xFFFCC000) // (PWMC) PWMC Mode Register
#define AT91C_PWMC_ENA  ((AT91_REG *)   0xFFFCC004) // (PWMC) PWMC Enable Register
// ========== Register definition for UDP peripheral ========== 
#define AT91C_UDP_IMR   ((AT91_REG *)   0xFFFB0018) // (UDP) Interrupt Mask Register
#define AT91C_UDP_FADDR ((AT91_REG *)   0xFFFB0008) // (UDP) Function Address Register
#define AT91C_UDP_NUM   ((AT91_REG *)   0xFFFB0000) // (UDP) Frame Number Register
#define AT91C_UDP_FDR   ((AT91_REG *)   0xFFFB0050) // (UDP) Endpoint FIFO Data Register
#define AT91C_UDP_ISR   ((AT91_REG *)   0xFFFB001C) // (UDP) Interrupt Status Register
#define AT91C_UDP_CSR   ((AT91_REG *)   0xFFFB0030) // (UDP) Endpoint Control and Status Register
#define AT91C_UDP_IDR   ((AT91_REG *)   0xFFFB0014) // (UDP) Interrupt Disable Register
#define AT91C_UDP_ICR   ((AT91_REG *)   0xFFFB0020) // (UDP) Interrupt Clear Register
#define AT91C_UDP_RSTEP ((AT91_REG *)   0xFFFB0028) // (UDP) Reset Endpoint Register
#define AT91C_UDP_TXVC  ((AT91_REG *)   0xFFFB0074) // (UDP) Transceiver Control Register
#define AT91C_UDP_GLBSTATE ((AT91_REG *)    0xFFFB0004) // (UDP) Global State Register
#define AT91C_UDP_IER   ((AT91_REG *)   0xFFFB0010) // (UDP) Interrupt Enable Register

// *****************************************************************************
//               PIO DEFINITIONS FOR AT91SAM7S64
// *****************************************************************************
#define AT91C_PIO_PA0        ((unsigned int) 1 <<  0) // Pin Controlled by PA0
#define AT91C_PA0_PWM0     ((unsigned int) AT91C_PIO_PA0) //  PWM Channel 0
#define AT91C_PA0_TIOA0    ((unsigned int) AT91C_PIO_PA0) //  Timer Counter 0 Multipurpose Timer I/O Pin A
#define AT91C_PIO_PA1        ((unsigned int) 1 <<  1) // Pin Controlled by PA1
#define AT91C_PA1_PWM1     ((unsigned int) AT91C_PIO_PA1) //  PWM Channel 1
#define AT91C_PA1_TIOB0    ((unsigned int) AT91C_PIO_PA1) //  Timer Counter 0 Multipurpose Timer I/O Pin B
#define AT91C_PIO_PA10       ((unsigned int) 1 << 10) // Pin Controlled by PA10
#define AT91C_PA10_DTXD     ((unsigned int) AT91C_PIO_PA10) //  DBGU Debug Transmit Data
#define AT91C_PA10_NPCS2    ((unsigned int) AT91C_PIO_PA10) //  SPI Peripheral Chip Select 2
#define AT91C_PIO_PA11       ((unsigned int) 1 << 11) // Pin Controlled by PA11
#define AT91C_PA11_NPCS0    ((unsigned int) AT91C_PIO_PA11) //  SPI Peripheral Chip Select 0
#define AT91C_PA11_PWM0     ((unsigned int) AT91C_PIO_PA11) //  PWM Channel 0
#define AT91C_PIO_PA12       ((unsigned int) 1 << 12) // Pin Controlled by PA12
#define AT91C_PA12_MISO     ((unsigned int) AT91C_PIO_PA12) //  SPI Master In Slave
#define AT91C_PA12_PWM1     ((unsigned int) AT91C_PIO_PA12) //  PWM Channel 1
#define AT91C_PIO_PA13       ((unsigned int) 1 << 13) // Pin Controlled by PA13
#define AT91C_PA13_MOSI     ((unsigned int) AT91C_PIO_PA13) //  SPI Master Out Slave
#define AT91C_PA13_PWM2     ((unsigned int) AT91C_PIO_PA13) //  PWM Channel 2
#define AT91C_PIO_PA14       ((unsigned int) 1 << 14) // Pin Controlled by PA14
#define AT91C_PA14_SPCK     ((unsigned int) AT91C_PIO_PA14) //  SPI Serial Clock
#define AT91C_PA14_PWM3     ((unsigned int) AT91C_PIO_PA14) //  PWM Channel 3
#define AT91C_PIO_PA15       ((unsigned int) 1 << 15) // Pin Controlled by PA15
#define AT91C_PA15_TF       ((unsigned int) AT91C_PIO_PA15) //  SSC Transmit Frame Sync
#define AT91C_PA15_TIOA1    ((unsigned int) AT91C_PIO_PA15) //  Timer Counter 1 Multipurpose Timer I/O Pin A
#define AT91C_PIO_PA16       ((unsigned int) 1 << 16) // Pin Controlled by PA16
#define AT91C_PA16_TK       ((unsigned int) AT91C_PIO_PA16) //  SSC Transmit Clock
#define AT91C_PA16_TIOB1    ((unsigned int) AT91C_PIO_PA16) //  Timer Counter 1 Multipurpose Timer I/O Pin B
#define AT91C_PIO_PA17       ((unsigned int) 1 << 17) // Pin Controlled by PA17
#define AT91C_PA17_TD       ((unsigned int) AT91C_PIO_PA17) //  SSC Transmit data
#define AT91C_PA17_PCK1     ((unsigned int) AT91C_PIO_PA17) //  PMC Programmable Clock Output 1
#define AT91C_PIO_PA18       ((unsigned int) 1 << 18) // Pin Controlled by PA18
#define AT91C_PA18_RD       ((unsigned int) AT91C_PIO_PA18) //  SSC Receive Data
#define AT91C_PA18_PCK2     ((unsigned int) AT91C_PIO_PA18) //  PMC Programmable Clock Output 2
#define AT91C_PIO_PA19       ((unsigned int) 1 << 19) // Pin Controlled by PA19
#define AT91C_PA19_RK       ((unsigned int) AT91C_PIO_PA19) //  SSC Receive Clock
#define AT91C_PA19_FIQ      ((unsigned int) AT91C_PIO_PA19) //  AIC Fast Interrupt Input
#define AT91C_PIO_PA2        ((unsigned int) 1 <<  2) // Pin Controlled by PA2
#define AT91C_PA2_PWM2     ((unsigned int) AT91C_PIO_PA2) //  PWM Channel 2
#define AT91C_PA2_SCK0     ((unsigned int) AT91C_PIO_PA2) //  USART 0 Serial Clock
#define AT91C_PIO_PA20       ((unsigned int) 1 << 20) // Pin Controlled by PA20
#define AT91C_PA20_RF       ((unsigned int) AT91C_PIO_PA20) //  SSC Receive Frame Sync
#define AT91C_PA20_IRQ0     ((unsigned int) AT91C_PIO_PA20) //  External Interrupt 0
#define AT91C_PIO_PA21       ((unsigned int) 1 << 21) // Pin Controlled by PA21
#define AT91C_PA21_RXD1     ((unsigned int) AT91C_PIO_PA21) //  USART 1 Receive Data
#define AT91C_PA21_PCK1     ((unsigned int) AT91C_PIO_PA21) //  PMC Programmable Clock Output 1
#define AT91C_PIO_PA22       ((unsigned int) 1 << 22) // Pin Controlled by PA22
#define AT91C_PA22_TXD1     ((unsigned int) AT91C_PIO_PA22) //  USART 1 Transmit Data
#define AT91C_PA22_NPCS3    ((unsigned int) AT91C_PIO_PA22) //  SPI Peripheral Chip Select 3
#define AT91C_PIO_PA23       ((unsigned int) 1 << 23) // Pin Controlled by PA23
#define AT91C_PA23_SCK1     ((unsigned int) AT91C_PIO_PA23) //  USART 1 Serial Clock
#define AT91C_PA23_PWM0     ((unsigned int) AT91C_PIO_PA23) //  PWM Channel 0
#define AT91C_PIO_PA24       ((unsigned int) 1 << 24) // Pin Controlled by PA24
#define AT91C_PA24_RTS1     ((unsigned int) AT91C_PIO_PA24) //  USART 1 Ready To Send
#define AT91C_PA24_PWM1     ((unsigned int) AT91C_PIO_PA24) //  PWM Channel 1
#define AT91C_PIO_PA25       ((unsigned int) 1 << 25) // Pin Controlled by PA25
#define AT91C_PA25_CTS1     ((unsigned int) AT91C_PIO_PA25) //  USART 1 Clear To Send
#define AT91C_PA25_PWM2     ((unsigned int) AT91C_PIO_PA25) //  PWM Channel 2
#define AT91C_PIO_PA26       ((unsigned int) 1 << 26) // Pin Controlled by PA26
#define AT91C_PA26_DCD1     ((unsigned int) AT91C_PIO_PA26) //  USART 1 Data Carrier Detect
#define AT91C_PA26_TIOA2    ((unsigned int) AT91C_PIO_PA26) //  Timer Counter 2 Multipurpose Timer I/O Pin A
#define AT91C_PIO_PA27       ((unsigned int) 1 << 27) // Pin Controlled by PA27
#define AT91C_PA27_DTR1     ((unsigned int) AT91C_PIO_PA27) //  USART 1 Data Terminal ready
#define AT91C_PA27_TIOB2    ((unsigned int) AT91C_PIO_PA27) //  Timer Counter 2 Multipurpose Timer I/O Pin B
#define AT91C_PIO_PA28       ((unsigned int) 1 << 28) // Pin Controlled by PA28
#define AT91C_PA28_DSR1     ((unsigned int) AT91C_PIO_PA28) //  USART 1 Data Set ready
#define AT91C_PA28_TCLK1    ((unsigned int) AT91C_PIO_PA28) //  Timer Counter 1 external clock input
#define AT91C_PIO_PA29       ((unsigned int) 1 << 29) // Pin Controlled by PA29
#define AT91C_PA29_RI1      ((unsigned int) AT91C_PIO_PA29) //  USART 1 Ring Indicator
#define AT91C_PA29_TCLK2    ((unsigned int) AT91C_PIO_PA29) //  Timer Counter 2 external clock input
#define AT91C_PIO_PA3        ((unsigned int) 1 <<  3) // Pin Controlled by PA3
#define AT91C_PA3_TWD      ((unsigned int) AT91C_PIO_PA3) //  TWI Two-wire Serial Data
#define AT91C_PA3_NPCS3    ((unsigned int) AT91C_PIO_PA3) //  SPI Peripheral Chip Select 3
#define AT91C_PIO_PA30       ((unsigned int) 1 << 30) // Pin Controlled by PA30
#define AT91C_PA30_IRQ1     ((unsigned int) AT91C_PIO_PA30) //  External Interrupt 1
#define AT91C_PA30_NPCS2    ((unsigned int) AT91C_PIO_PA30) //  SPI Peripheral Chip Select 2
#define AT91C_PIO_PA31       ((unsigned int) 1 << 31) // Pin Controlled by PA31
#define AT91C_PA31_NPCS1    ((unsigned int) AT91C_PIO_PA31) //  SPI Peripheral Chip Select 1
#define AT91C_PA31_PCK2     ((unsigned int) AT91C_PIO_PA31) //  PMC Programmable Clock Output 2
#define AT91C_PIO_PA4        ((unsigned int) 1 <<  4) // Pin Controlled by PA4
#define AT91C_PA4_TWCK     ((unsigned int) AT91C_PIO_PA4) //  TWI Two-wire Serial Clock
#define AT91C_PA4_TCLK0    ((unsigned int) AT91C_PIO_PA4) //  Timer Counter 0 external clock input
#define AT91C_PIO_PA5        ((unsigned int) 1 <<  5) // Pin Controlled by PA5
#define AT91C_PA5_RXD0     ((unsigned int) AT91C_PIO_PA5) //  USART 0 Receive Data
#define AT91C_PA5_NPCS3    ((unsigned int) AT91C_PIO_PA5) //  SPI Peripheral Chip Select 3
#define AT91C_PIO_PA6        ((unsigned int) 1 <<  6) // Pin Controlled by PA6
#define AT91C_PA6_TXD0     ((unsigned int) AT91C_PIO_PA6) //  USART 0 Transmit Data
#define AT91C_PA6_PCK0     ((unsigned int) AT91C_PIO_PA6) //  PMC Programmable Clock Output 0
#define AT91C_PIO_PA7        ((unsigned int) 1 <<  7) // Pin Controlled by PA7
#define AT91C_PA7_RTS0     ((unsigned int) AT91C_PIO_PA7) //  USART 0 Ready To Send
#define AT91C_PA7_PWM3     ((unsigned int) AT91C_PIO_PA7) //  PWM Channel 3
#define AT91C_PIO_PA8        ((unsigned int) 1 <<  8) // Pin Controlled by PA8
#define AT91C_PA8_CTS0     ((unsigned int) AT91C_PIO_PA8) //  USART 0 Clear To Send
#define AT91C_PA8_ADTRG    ((unsigned int) AT91C_PIO_PA8) //  ADC External Trigger
#define AT91C_PIO_PA9        ((unsigned int) 1 <<  9) // Pin Controlled by PA9
#define AT91C_PA9_DRXD     ((unsigned int) AT91C_PIO_PA9) //  DBGU Debug Receive Data
#define AT91C_PA9_NPCS1    ((unsigned int) AT91C_PIO_PA9) //  SPI Peripheral Chip Select 1

// *****************************************************************************
//               PERIPHERAL ID DEFINITIONS FOR AT91SAM7S64
// *****************************************************************************
#define AT91C_ID_FIQ    ((unsigned int)  0) // Advanced Interrupt Controller (FIQ)
#define AT91C_ID_SYS    ((unsigned int)  1) // System Peripheral
#define AT91C_ID_PIOA   ((unsigned int)  2) // Parallel IO Controller
#define AT91C_ID_3_Reserved ((unsigned int)  3) // Reserved
#define AT91C_ID_ADC    ((unsigned int)  4) // Analog-to-Digital Converter
#define AT91C_ID_SPI    ((unsigned int)  5) // Serial Peripheral Interface
#define AT91C_ID_US0    ((unsigned int)  6) // USART 0
#define AT91C_ID_US1    ((unsigned int)  7) // USART 1
#define AT91C_ID_SSC    ((unsigned int)  8) // Serial Synchronous Controller
#define AT91C_ID_TWI    ((unsigned int)  9) // Two-Wire Interface
#define AT91C_ID_PWMC   ((unsigned int) 10) // PWM Controller
#define AT91C_ID_UDP    ((unsigned int) 11) // USB Device Port
#define AT91C_ID_TC0    ((unsigned int) 12) // Timer Counter 0
#define AT91C_ID_TC1    ((unsigned int) 13) // Timer Counter 1
#define AT91C_ID_TC2    ((unsigned int) 14) // Timer Counter 2
#define AT91C_ID_15_Reserved ((unsigned int) 15) // Reserved
#define AT91C_ID_16_Reserved ((unsigned int) 16) // Reserved
#define AT91C_ID_17_Reserved ((unsigned int) 17) // Reserved
#define AT91C_ID_18_Reserved ((unsigned int) 18) // Reserved
#define AT91C_ID_19_Reserved ((unsigned int) 19) // Reserved
#define AT91C_ID_20_Reserved ((unsigned int) 20) // Reserved
#define AT91C_ID_21_Reserved ((unsigned int) 21) // Reserved
#define AT91C_ID_22_Reserved ((unsigned int) 22) // Reserved
#define AT91C_ID_23_Reserved ((unsigned int) 23) // Reserved
#define AT91C_ID_24_Reserved ((unsigned int) 24) // Reserved
#define AT91C_ID_25_Reserved ((unsigned int) 25) // Reserved
#define AT91C_ID_26_Reserved ((unsigned int) 26) // Reserved
#define AT91C_ID_27_Reserved ((unsigned int) 27) // Reserved
#define AT91C_ID_28_Reserved ((unsigned int) 28) // Reserved
#define AT91C_ID_29_Reserved ((unsigned int) 29) // Reserved
#define AT91C_ID_IRQ0   ((unsigned int) 30) // Advanced Interrupt Controller (IRQ0)
#define AT91C_ID_IRQ1   ((unsigned int) 31) // Advanced Interrupt Controller (IRQ1)

// *****************************************************************************
//               BASE ADDRESS DEFINITIONS FOR AT91SAM7S64
// *****************************************************************************
#define AT91C_BASE_SYS       ((AT91PS_SYS)  0xFFFFF000) // (SYS) Base Address
#define AT91C_BASE_AIC       ((AT91PS_AIC)  0xFFFFF000) // (AIC) Base Address
#define AT91C_BASE_PDC_DBGU  ((AT91PS_PDC)  0xFFFFF300) // (PDC_DBGU) Base Address
#define AT91C_BASE_DBGU      ((AT91PS_DBGU)     0xFFFFF200) // (DBGU) Base Address
#define AT91C_BASE_PIOA      ((AT91PS_PIO)  0xFFFFF400) // (PIOA) Base Address
#define AT91C_BASE_CKGR      ((AT91PS_CKGR)     0xFFFFFC20) // (CKGR) Base Address
#define AT91C_BASE_PMC       ((AT91PS_PMC)  0xFFFFFC00) // (PMC) Base Address
#define AT91C_BASE_RSTC      ((AT91PS_RSTC)     0xFFFFFD00) // (RSTC) Base Address
#define AT91C_BASE_RTTC      ((AT91PS_RTTC)     0xFFFFFD20) // (RTTC) Base Address
#define AT91C_BASE_PITC      ((AT91PS_PITC)     0xFFFFFD30) // (PITC) Base Address
#define AT91C_BASE_WDTC      ((AT91PS_WDTC)     0xFFFFFD40) // (WDTC) Base Address
#define AT91C_BASE_VREG      ((AT91PS_VREG)     0xFFFFFD60) // (VREG) Base Address
#define AT91C_BASE_MC        ((AT91PS_MC)   0xFFFFFF00) // (MC) Base Address
#define AT91C_BASE_PDC_SPI   ((AT91PS_PDC)  0xFFFE0100) // (PDC_SPI) Base Address
#define AT91C_BASE_SPI       ((AT91PS_SPI)  0xFFFE0000) // (SPI) Base Address
#define AT91C_BASE_PDC_ADC   ((AT91PS_PDC)  0xFFFD8100) // (PDC_ADC) Base Address
#define AT91C_BASE_ADC       ((AT91PS_ADC)  0xFFFD8000) // (ADC) Base Address
#define AT91C_BASE_PDC_SSC   ((AT91PS_PDC)  0xFFFD4100) // (PDC_SSC) Base Address
#define AT91C_BASE_SSC       ((AT91PS_SSC)  0xFFFD4000) // (SSC) Base Address
#define AT91C_BASE_PDC_US1   ((AT91PS_PDC)  0xFFFC4100) // (PDC_US1) Base Address
#define AT91C_BASE_US1       ((AT91PS_USART)    0xFFFC4000) // (US1) Base Address
#define AT91C_BASE_PDC_US0   ((AT91PS_PDC)  0xFFFC0100) // (PDC_US0) Base Address
#define AT91C_BASE_US0       ((AT91PS_USART)    0xFFFC0000) // (US0) Base Address
#define AT91C_BASE_TWI       ((AT91PS_TWI)  0xFFFB8000) // (TWI) Base Address
#define AT91C_BASE_TC0       ((AT91PS_TC)   0xFFFA0000) // (TC0) Base Address
#define AT91C_BASE_TC1       ((AT91PS_TC)   0xFFFA0040) // (TC1) Base Address
#define AT91C_BASE_TC2       ((AT91PS_TC)   0xFFFA0080) // (TC2) Base Address
#define AT91C_BASE_TCB       ((AT91PS_TCB)  0xFFFA0000) // (TCB) Base Address
#define AT91C_BASE_PWMC_CH3  ((AT91PS_PWMC_CH)  0xFFFCC260) // (PWMC_CH3) Base Address
#define AT91C_BASE_PWMC_CH2  ((AT91PS_PWMC_CH)  0xFFFCC240) // (PWMC_CH2) Base Address
#define AT91C_BASE_PWMC_CH1  ((AT91PS_PWMC_CH)  0xFFFCC220) // (PWMC_CH1) Base Address
#define AT91C_BASE_PWMC_CH0  ((AT91PS_PWMC_CH)  0xFFFCC200) // (PWMC_CH0) Base Address
#define AT91C_BASE_PWMC      ((AT91PS_PWMC)     0xFFFCC000) // (PWMC) Base Address
#define AT91C_BASE_UDP       ((AT91PS_UDP)  0xFFFB0000) // (UDP) Base Address

// *****************************************************************************
//               MEMORY MAPPING DEFINITIONS FOR AT91SAM7S64
// *****************************************************************************
#define AT91C_ISRAM  ((char *)  0x00200000) // Internal SRAM base address
#define AT91C_ISRAM_SIZE     ((unsigned int) 0x00004000) // Internal SRAM size in byte (16 Kbyte)
#define AT91C_IFLASH     ((char *)  0x00100000) // Internal ROM base address
#define AT91C_IFLASH_SIZE    ((unsigned int) 0x00010000) // Internal ROM size in byte (64 Kbyte)

#else   // __ASSEMBLER__

// - Hardware register definition

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR System Peripherals
// - *****************************************************************************

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Advanced Interrupt Controller
// - *****************************************************************************
// - -------- AIC_SMR : (AIC Offset: 0x0) Control Register -------- 
    .equ AT91C_AIC_PRIOR           , (0x7 <<  0) //- (AIC) Priority Level
    .equ AT91C_AIC_PRIOR_LOWEST    , (0x0) //- (AIC) Lowest priority level
    .equ AT91C_AIC_PRIOR_HIGHEST   , (0x7) //- (AIC) Highest priority level
    .equ AT91C_AIC_SRCTYPE         , (0x3 <<  5) //- (AIC) Interrupt Source Type
    .equ AT91C_AIC_SRCTYPE_INT_LEVEL_SENSITIVE , (0x0 <<  5) //- (AIC) Internal Sources Code Label Level Sensitive
    .equ AT91C_AIC_SRCTYPE_INT_EDGE_TRIGGERED , (0x1 <<  5) //- (AIC) Internal Sources Code Label Edge triggered
    .equ AT91C_AIC_SRCTYPE_EXT_HIGH_LEVEL , (0x2 <<  5) //- (AIC) External Sources Code Label High-level Sensitive
    .equ AT91C_AIC_SRCTYPE_EXT_POSITIVE_EDGE , (0x3 <<  5) //- (AIC) External Sources Code Label Positive Edge triggered
// - -------- AIC_CISR : (AIC Offset: 0x114) AIC Core Interrupt Status Register -------- 
    .equ AT91C_AIC_NFIQ            , (0x1 <<  0) //- (AIC) NFIQ Status
    .equ AT91C_AIC_NIRQ            , (0x1 <<  1) //- (AIC) NIRQ Status
// - -------- AIC_DCR : (AIC Offset: 0x138) AIC Debug Control Register (Protect) -------- 
    .equ AT91C_AIC_DCR_PROT        , (0x1 <<  0) //- (AIC) Protection Mode
    .equ AT91C_AIC_DCR_GMSK        , (0x1 <<  1) //- (AIC) General Mask

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Peripheral DMA Controller
// - *****************************************************************************
// - -------- PDC_PTCR : (PDC Offset: 0x20) PDC Transfer Control Register -------- 
    .equ AT91C_PDC_RXTEN           , (0x1 <<  0) //- (PDC) Receiver Transfer Enable
    .equ AT91C_PDC_RXTDIS          , (0x1 <<  1) //- (PDC) Receiver Transfer Disable
    .equ AT91C_PDC_TXTEN           , (0x1 <<  8) //- (PDC) Transmitter Transfer Enable
    .equ AT91C_PDC_TXTDIS          , (0x1 <<  9) //- (PDC) Transmitter Transfer Disable
// - -------- PDC_PTSR : (PDC Offset: 0x24) PDC Transfer Status Register -------- 

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Debug Unit
// - *****************************************************************************
// - -------- DBGU_CR : (DBGU Offset: 0x0) Debug Unit Control Register -------- 
    .equ AT91C_US_RSTRX            , (0x1 <<  2) //- (DBGU) Reset Receiver
    .equ AT91C_US_RSTTX            , (0x1 <<  3) //- (DBGU) Reset Transmitter
    .equ AT91C_US_RXEN             , (0x1 <<  4) //- (DBGU) Receiver Enable
    .equ AT91C_US_RXDIS            , (0x1 <<  5) //- (DBGU) Receiver Disable
    .equ AT91C_US_TXEN             , (0x1 <<  6) //- (DBGU) Transmitter Enable
    .equ AT91C_US_TXDIS            , (0x1 <<  7) //- (DBGU) Transmitter Disable
    .equ AT91C_US_RSTSTA           , (0x1 <<  8) //- (DBGU) Reset Status Bits
// - -------- DBGU_MR : (DBGU Offset: 0x4) Debug Unit Mode Register -------- 
    .equ AT91C_US_PAR              , (0x7 <<  9) //- (DBGU) Parity type
    .equ AT91C_US_PAR_EVEN         , (0x0 <<  9) //- (DBGU) Even Parity
    .equ AT91C_US_PAR_ODD          , (0x1 <<  9) //- (DBGU) Odd Parity
    .equ AT91C_US_PAR_SPACE        , (0x2 <<  9) //- (DBGU) Parity forced to 0 (Space)
    .equ AT91C_US_PAR_MARK         , (0x3 <<  9) //- (DBGU) Parity forced to 1 (Mark)
    .equ AT91C_US_PAR_NONE         , (0x4 <<  9) //- (DBGU) No Parity
    .equ AT91C_US_PAR_MULTI_DROP   , (0x6 <<  9) //- (DBGU) Multi-drop mode
    .equ AT91C_US_CHMODE           , (0x3 << 14) //- (DBGU) Channel Mode
    .equ AT91C_US_CHMODE_NORMAL    , (0x0 << 14) //- (DBGU) Normal Mode: The USART channel operates as an RX/TX USART.
    .equ AT91C_US_CHMODE_AUTO      , (0x1 << 14) //- (DBGU) Automatic Echo: Receiver Data Input is connected to the TXD pin.
    .equ AT91C_US_CHMODE_LOCAL     , (0x2 << 14) //- (DBGU) Local Loopback: Transmitter Output Signal is connected to Receiver Input Signal.
    .equ AT91C_US_CHMODE_REMOTE    , (0x3 << 14) //- (DBGU) Remote Loopback: RXD pin is internally connected to TXD pin.
// - -------- DBGU_IER : (DBGU Offset: 0x8) Debug Unit Interrupt Enable Register -------- 
    .equ AT91C_US_RXRDY            , (0x1 <<  0) //- (DBGU) RXRDY Interrupt
    .equ AT91C_US_TXRDY            , (0x1 <<  1) //- (DBGU) TXRDY Interrupt
    .equ AT91C_US_ENDRX            , (0x1 <<  3) //- (DBGU) End of Receive Transfer Interrupt
    .equ AT91C_US_ENDTX            , (0x1 <<  4) //- (DBGU) End of Transmit Interrupt
    .equ AT91C_US_OVRE             , (0x1 <<  5) //- (DBGU) Overrun Interrupt
    .equ AT91C_US_FRAME            , (0x1 <<  6) //- (DBGU) Framing Error Interrupt
    .equ AT91C_US_PARE             , (0x1 <<  7) //- (DBGU) Parity Error Interrupt
    .equ AT91C_US_TXEMPTY          , (0x1 <<  9) //- (DBGU) TXEMPTY Interrupt
    .equ AT91C_US_TXBUFE           , (0x1 << 11) //- (DBGU) TXBUFE Interrupt
    .equ AT91C_US_RXBUFF           , (0x1 << 12) //- (DBGU) RXBUFF Interrupt
    .equ AT91C_US_COMM_TX          , (0x1 << 30) //- (DBGU) COMM_TX Interrupt
    .equ AT91C_US_COMM_RX          , (0x1 << 31) //- (DBGU) COMM_RX Interrupt
// - -------- DBGU_IDR : (DBGU Offset: 0xc) Debug Unit Interrupt Disable Register -------- 
// - -------- DBGU_IMR : (DBGU Offset: 0x10) Debug Unit Interrupt Mask Register -------- 
// - -------- DBGU_CSR : (DBGU Offset: 0x14) Debug Unit Channel Status Register -------- 
// - -------- DBGU_FNTR : (DBGU Offset: 0x48) Debug Unit FORCE_NTRST Register -------- 
    .equ AT91C_US_FORCE_NTRST      , (0x1 <<  0) //- (DBGU) Force NTRST in JTAG

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Parallel Input Output Controler
// - *****************************************************************************

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Clock Generator Controler
// - *****************************************************************************
// - -------- CKGR_MOR : (CKGR Offset: 0x0) Main Oscillator Register -------- 
    .equ AT91C_CKGR_MOSCEN         , (0x1 <<  0) //- (CKGR) Main Oscillator Enable
    .equ AT91C_CKGR_OSCBYPASS      , (0x1 <<  1) //- (CKGR) Main Oscillator Bypass
    .equ AT91C_CKGR_OSCOUNT        , (0xFF <<  8) //- (CKGR) Main Oscillator Start-up Time
// - -------- CKGR_MCFR : (CKGR Offset: 0x4) Main Clock Fr,ency Register -------- 
    .equ AT91C_CKGR_MAINF          , (0xFFFF <<  0) //- (CKGR) Main Clock Fr,ency
    .equ AT91C_CKGR_MAINRDY        , (0x1 << 16) //- (CKGR) Main Clock Ready
// - -------- CKGR_PLLR : (CKGR Offset: 0xc) PLL B Register -------- 
    .equ AT91C_CKGR_DIV            , (0xFF <<  0) //- (CKGR) Divider Selected
    .equ AT91C_CKGR_DIV_0          , (0x0) //- (CKGR) Divider output is 0
    .equ AT91C_CKGR_DIV_BYPASS     , (0x1) //- (CKGR) Divider is bypassed
    .equ AT91C_CKGR_PLLCOUNT       , (0x3F <<  8) //- (CKGR) PLL Counter
    .equ AT91C_CKGR_OUT            , (0x3 << 14) //- (CKGR) PLL Output Fr,ency Range
    .equ AT91C_CKGR_OUT_0          , (0x0 << 14) //- (CKGR) Please refer to the PLL datasheet
    .equ AT91C_CKGR_OUT_1          , (0x1 << 14) //- (CKGR) Please refer to the PLL datasheet
    .equ AT91C_CKGR_OUT_2          , (0x2 << 14) //- (CKGR) Please refer to the PLL datasheet
    .equ AT91C_CKGR_OUT_3          , (0x3 << 14) //- (CKGR) Please refer to the PLL datasheet
    .equ AT91C_CKGR_MUL            , (0x7FF << 16) //- (CKGR) PLL Multiplier
    .equ AT91C_CKGR_USBDIV         , (0x3 << 28) //- (CKGR) Divider for USB Clocks
    .equ AT91C_CKGR_USBDIV_0       , (0x0 << 28) //- (CKGR) Divider output is PLL clock output
    .equ AT91C_CKGR_USBDIV_1       , (0x1 << 28) //- (CKGR) Divider output is PLL clock output divided by 2
    .equ AT91C_CKGR_USBDIV_2       , (0x2 << 28) //- (CKGR) Divider output is PLL clock output divided by 4

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Power Management Controler
// - *****************************************************************************
// - -------- PMC_SCER : (PMC Offset: 0x0) System Clock Enable Register -------- 
    .equ AT91C_PMC_PCK             , (0x1 <<  0) //- (PMC) Processor Clock
    .equ AT91C_PMC_UDP             , (0x1 <<  7) //- (PMC) USB Device Port Clock
    .equ AT91C_PMC_PCK0            , (0x1 <<  8) //- (PMC) Programmable Clock Output
    .equ AT91C_PMC_PCK1            , (0x1 <<  9) //- (PMC) Programmable Clock Output
    .equ AT91C_PMC_PCK2            , (0x1 << 10) //- (PMC) Programmable Clock Output
// - -------- PMC_SCDR : (PMC Offset: 0x4) System Clock Disable Register -------- 
// - -------- PMC_SCSR : (PMC Offset: 0x8) System Clock Status Register -------- 
// - -------- CKGR_MOR : (PMC Offset: 0x20) Main Oscillator Register -------- 
// - -------- CKGR_MCFR : (PMC Offset: 0x24) Main Clock Fr,ency Register -------- 
// - -------- CKGR_PLLR : (PMC Offset: 0x2c) PLL B Register -------- 
// - -------- PMC_MCKR : (PMC Offset: 0x30) Master Clock Register -------- 
    .equ AT91C_PMC_CSS             , (0x3 <<  0) //- (PMC) Programmable Clock Selection
    .equ AT91C_PMC_CSS_SLOW_CLK    , (0x0) //- (PMC) Slow Clock is selected
    .equ AT91C_PMC_CSS_MAIN_CLK    , (0x1) //- (PMC) Main Clock is selected
    .equ AT91C_PMC_CSS_PLL_CLK     , (0x3) //- (PMC) Clock from PLL is selected
    .equ AT91C_PMC_PRES            , (0x7 <<  2) //- (PMC) Programmable Clock Prescaler
    .equ AT91C_PMC_PRES_CLK        , (0x0 <<  2) //- (PMC) Selected clock
    .equ AT91C_PMC_PRES_CLK_2      , (0x1 <<  2) //- (PMC) Selected clock divided by 2
    .equ AT91C_PMC_PRES_CLK_4      , (0x2 <<  2) //- (PMC) Selected clock divided by 4
    .equ AT91C_PMC_PRES_CLK_8      , (0x3 <<  2) //- (PMC) Selected clock divided by 8
    .equ AT91C_PMC_PRES_CLK_16     , (0x4 <<  2) //- (PMC) Selected clock divided by 16
    .equ AT91C_PMC_PRES_CLK_32     , (0x5 <<  2) //- (PMC) Selected clock divided by 32
    .equ AT91C_PMC_PRES_CLK_64     , (0x6 <<  2) //- (PMC) Selected clock divided by 64
// - -------- PMC_PCKR : (PMC Offset: 0x40) Programmable Clock Register -------- 
// - -------- PMC_IER : (PMC Offset: 0x60) PMC Interrupt Enable Register -------- 
    .equ AT91C_PMC_MOSCS           , (0x1 <<  0) //- (PMC) MOSC Status/Enable/Disable/Mask
    .equ AT91C_PMC_LOCK            , (0x1 <<  2) //- (PMC) PLL Status/Enable/Disable/Mask
    .equ AT91C_PMC_MCKRDY          , (0x1 <<  3) //- (PMC) MCK_RDY Status/Enable/Disable/Mask
    .equ AT91C_PMC_PCK0RDY         , (0x1 <<  8) //- (PMC) PCK0_RDY Status/Enable/Disable/Mask
    .equ AT91C_PMC_PCK1RDY         , (0x1 <<  9) //- (PMC) PCK1_RDY Status/Enable/Disable/Mask
    .equ AT91C_PMC_PCK2RDY         , (0x1 << 10) //- (PMC) PCK2_RDY Status/Enable/Disable/Mask
// - -------- PMC_IDR : (PMC Offset: 0x64) PMC Interrupt Disable Register -------- 
// - -------- PMC_SR : (PMC Offset: 0x68) PMC Status Register -------- 
// - -------- PMC_IMR : (PMC Offset: 0x6c) PMC Interrupt Mask Register -------- 

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Reset Controller Interface
// - *****************************************************************************
// - -------- RSTC_RCR : (RSTC Offset: 0x0) Reset Control Register -------- 
    .equ AT91C_RSTC_PROCRST        , (0x1 <<  0) //- (RSTC) Processor Reset
    .equ AT91C_RSTC_PERRST         , (0x1 <<  2) //- (RSTC) Peripheral Reset
    .equ AT91C_RSTC_EXTRST         , (0x1 <<  3) //- (RSTC) External Reset
    .equ AT91C_RSTC_KEY            , (0xFF << 24) //- (RSTC) Password
// - -------- RSTC_RSR : (RSTC Offset: 0x4) Reset Status Register -------- 
    .equ AT91C_RSTC_URSTS          , (0x1 <<  0) //- (RSTC) User Reset Status
    .equ AT91C_RSTC_BODSTS         , (0x1 <<  1) //- (RSTC) Brownout Detection Status
    .equ AT91C_RSTC_RSTTYP         , (0x7 <<  8) //- (RSTC) Reset Type
    .equ AT91C_RSTC_RSTTYP_POWERUP , (0x0 <<  8) //- (RSTC) Power-up Reset. VDDCORE rising.
    .equ AT91C_RSTC_RSTTYP_WAKEUP  , (0x1 <<  8) //- (RSTC) WakeUp Reset. VDDCORE rising.
    .equ AT91C_RSTC_RSTTYP_WATCHDOG , (0x2 <<  8) //- (RSTC) Watchdog Reset. Watchdog overflow occured.
    .equ AT91C_RSTC_RSTTYP_SOFTWARE , (0x3 <<  8) //- (RSTC) Software Reset. Processor reset r,ired by the software.
    .equ AT91C_RSTC_RSTTYP_USER    , (0x4 <<  8) //- (RSTC) User Reset. NRST pin detected low.
    .equ AT91C_RSTC_RSTTYP_BROWNOUT , (0x5 <<  8) //- (RSTC) Brownout Reset occured.
    .equ AT91C_RSTC_NRSTL          , (0x1 << 16) //- (RSTC) NRST pin level
    .equ AT91C_RSTC_SRCMP          , (0x1 << 17) //- (RSTC) Software Reset Command in Progress.
// - -------- RSTC_RMR : (RSTC Offset: 0x8) Reset Mode Register -------- 
    .equ AT91C_RSTC_URSTEN         , (0x1 <<  0) //- (RSTC) User Reset Enable
    .equ AT91C_RSTC_URSTIEN        , (0x1 <<  4) //- (RSTC) User Reset Interrupt Enable
    .equ AT91C_RSTC_ERSTL          , (0xF <<  8) //- (RSTC) User Reset Enable
    .equ AT91C_RSTC_BODIEN         , (0x1 << 16) //- (RSTC) Brownout Detection Interrupt Enable

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Real Time Timer Controller Interface
// - *****************************************************************************
// - -------- RTTC_RTMR : (RTTC Offset: 0x0) Real-time Mode Register -------- 
    .equ AT91C_RTTC_RTPRES         , (0xFFFF <<  0) //- (RTTC) Real-time Timer Prescaler Value
    .equ AT91C_RTTC_ALMIEN         , (0x1 << 16) //- (RTTC) Alarm Interrupt Enable
    .equ AT91C_RTTC_RTTINCIEN      , (0x1 << 17) //- (RTTC) Real Time Timer Increment Interrupt Enable
    .equ AT91C_RTTC_RTTRST         , (0x1 << 18) //- (RTTC) Real Time Timer Restart
// - -------- RTTC_RTAR : (RTTC Offset: 0x4) Real-time Alarm Register -------- 
    .equ AT91C_RTTC_ALMV           , (0x0 <<  0) //- (RTTC) Alarm Value
// - -------- RTTC_RTVR : (RTTC Offset: 0x8) Current Real-time Value Register -------- 
    .equ AT91C_RTTC_CRTV           , (0x0 <<  0) //- (RTTC) Current Real-time Value
// - -------- RTTC_RTSR : (RTTC Offset: 0xc) Real-time Status Register -------- 
    .equ AT91C_RTTC_ALMS           , (0x1 <<  0) //- (RTTC) Real-time Alarm Status
    .equ AT91C_RTTC_RTTINC         , (0x1 <<  1) //- (RTTC) Real-time Timer Increment

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Periodic Interval Timer Controller Interface
// - *****************************************************************************
// - -------- PITC_PIMR : (PITC Offset: 0x0) Periodic Interval Mode Register -------- 
    .equ AT91C_PITC_PIV            , (0xFFFFF <<  0) //- (PITC) Periodic Interval Value
    .equ AT91C_PITC_PITEN          , (0x1 << 24) //- (PITC) Periodic Interval Timer Enabled
    .equ AT91C_PITC_PITIEN         , (0x1 << 25) //- (PITC) Periodic Interval Timer Interrupt Enable
// - -------- PITC_PISR : (PITC Offset: 0x4) Periodic Interval Status Register -------- 
    .equ AT91C_PITC_PITS           , (0x1 <<  0) //- (PITC) Periodic Interval Timer Status
// - -------- PITC_PIVR : (PITC Offset: 0x8) Periodic Interval Value Register -------- 
    .equ AT91C_PITC_CPIV           , (0xFFFFF <<  0) //- (PITC) Current Periodic Interval Value
    .equ AT91C_PITC_PICNT          , (0xFFF << 20) //- (PITC) Periodic Interval Counter
// - -------- PITC_PIIR : (PITC Offset: 0xc) Periodic Interval Image Register -------- 

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Watchdog Timer Controller Interface
// - *****************************************************************************
// - -------- WDTC_WDCR : (WDTC Offset: 0x0) Periodic Interval Image Register -------- 
    .equ AT91C_WDTC_WDRSTT         , (0x1 <<  0) //- (WDTC) Watchdog Restart
    .equ AT91C_WDTC_KEY            , (0xFF << 24) //- (WDTC) Watchdog KEY Password
// - -------- WDTC_WDMR : (WDTC Offset: 0x4) Watchdog Mode Register -------- 
    .equ AT91C_WDTC_WDV            , (0xFFF <<  0) //- (WDTC) Watchdog Timer Restart
    .equ AT91C_WDTC_WDFIEN         , (0x1 << 12) //- (WDTC) Watchdog Fault Interrupt Enable
    .equ AT91C_WDTC_WDRSTEN        , (0x1 << 13) //- (WDTC) Watchdog Reset Enable
    .equ AT91C_WDTC_WDRPROC        , (0x1 << 14) //- (WDTC) Watchdog Timer Restart
    .equ AT91C_WDTC_WDDIS          , (0x1 << 15) //- (WDTC) Watchdog Disable
    .equ AT91C_WDTC_WDD            , (0xFFF << 16) //- (WDTC) Watchdog Delta Value
    .equ AT91C_WDTC_WDDBGHLT       , (0x1 << 28) //- (WDTC) Watchdog Debug Halt
    .equ AT91C_WDTC_WDIDLEHLT      , (0x1 << 29) //- (WDTC) Watchdog Idle Halt
// - -------- WDTC_WDSR : (WDTC Offset: 0x8) Watchdog Status Register -------- 
    .equ AT91C_WDTC_WDUNF          , (0x1 <<  0) //- (WDTC) Watchdog Underflow
    .equ AT91C_WDTC_WDERR          , (0x1 <<  1) //- (WDTC) Watchdog Error

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Voltage Regulator Mode Controller Interface
// - *****************************************************************************
// - -------- VREG_MR : (VREG Offset: 0x0) Voltage Regulator Mode Register -------- 
    .equ AT91C_VREG_PSTDBY         , (0x1 <<  0) //- (VREG) Voltage Regulator Power Standby Mode

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Memory Controller Interface
// - *****************************************************************************
// - -------- MC_RCR : (MC Offset: 0x0) MC Remap Control Register -------- 
    .equ AT91C_MC_RCB              , (0x1 <<  0) //- (MC) Remap Command Bit
// - -------- MC_ASR : (MC Offset: 0x4) MC Abort Status Register -------- 
    .equ AT91C_MC_UNDADD           , (0x1 <<  0) //- (MC) Undefined Addess Abort Status
    .equ AT91C_MC_MISADD           , (0x1 <<  1) //- (MC) Misaligned Addess Abort Status
    .equ AT91C_MC_ABTSZ            , (0x3 <<  8) //- (MC) Abort Size Status
    .equ AT91C_MC_ABTSZ_BYTE       , (0x0 <<  8) //- (MC) Byte
    .equ AT91C_MC_ABTSZ_HWORD      , (0x1 <<  8) //- (MC) Half-uint16_t
    .equ AT91C_MC_ABTSZ_WORD       , (0x2 <<  8) //- (MC) Word
    .equ AT91C_MC_ABTTYP           , (0x3 << 10) //- (MC) Abort Type Status
    .equ AT91C_MC_ABTTYP_DATAR     , (0x0 << 10) //- (MC) Data Read
    .equ AT91C_MC_ABTTYP_DATAW     , (0x1 << 10) //- (MC) Data Write
    .equ AT91C_MC_ABTTYP_FETCH     , (0x2 << 10) //- (MC) Code Fetch
    .equ AT91C_MC_MST0             , (0x1 << 16) //- (MC) Master 0 Abort Source
    .equ AT91C_MC_MST1             , (0x1 << 17) //- (MC) Master 1 Abort Source
    .equ AT91C_MC_SVMST0           , (0x1 << 24) //- (MC) Saved Master 0 Abort Source
    .equ AT91C_MC_SVMST1           , (0x1 << 25) //- (MC) Saved Master 1 Abort Source
// - -------- MC_FMR : (MC Offset: 0x60) MC Flash Mode Register -------- 
    .equ AT91C_MC_FRDY             , (0x1 <<  0) //- (MC) Flash Ready
    .equ AT91C_MC_LOCKE            , (0x1 <<  2) //- (MC) Lock Error
    .equ AT91C_MC_PROGE            , (0x1 <<  3) //- (MC) Programming Error
    .equ AT91C_MC_NEBP             , (0x1 <<  7) //- (MC) No Erase Before Programming
    .equ AT91C_MC_FWS              , (0x3 <<  8) //- (MC) Flash Wait State
    .equ AT91C_MC_FWS_0FWS         , (0x0 <<  8) //- (MC) 1 cycle for Read, 2 for Write operations
    .equ AT91C_MC_FWS_1FWS         , (0x1 <<  8) //- (MC) 2 cycles for Read, 3 for Write operations
    .equ AT91C_MC_FWS_2FWS         , (0x2 <<  8) //- (MC) 3 cycles for Read, 4 for Write operations
    .equ AT91C_MC_FWS_3FWS         , (0x3 <<  8) //- (MC) 4 cycles for Read, 4 for Write operations
    .equ AT91C_MC_FMCN             , (0xFF << 16) //- (MC) Flash Microsecond Cycle Number
// - -------- MC_FCR : (MC Offset: 0x64) MC Flash Command Register -------- 
    .equ AT91C_MC_FCMD             , (0xF <<  0) //- (MC) Flash Command
    .equ AT91C_MC_FCMD_START_PROG  , (0x1) //- (MC) Starts the programming of th epage specified by PAGEN.
    .equ AT91C_MC_FCMD_LOCK        , (0x2) //- (MC) Starts a lock s,ence of the sector defined by the bits 4 to 7 of the field PAGEN.
    .equ AT91C_MC_FCMD_PROG_AND_LOCK , (0x3) //- (MC) The lock s,ence automatically happens after the programming s,ence is completed.
    .equ AT91C_MC_FCMD_UNLOCK      , (0x4) //- (MC) Starts an unlock s,ence of the sector defined by the bits 4 to 7 of the field PAGEN.
    .equ AT91C_MC_FCMD_ERASE_ALL   , (0x8) //- (MC) Starts the erase of the entire flash.If at least a page is locked, the command is cancelled.
    .equ AT91C_MC_FCMD_SET_GP_NVM  , (0xB) //- (MC) Set General Purpose NVM bits.
    .equ AT91C_MC_FCMD_CLR_GP_NVM  , (0xD) //- (MC) Clear General Purpose NVM bits.
    .equ AT91C_MC_FCMD_SET_SECURITY , (0xF) //- (MC) Set Security Bit.
    .equ AT91C_MC_PAGEN            , (0x3FF <<  8) //- (MC) Page Number
    .equ AT91C_MC_KEY              , (0xFF << 24) //- (MC) Writing Protect Key
// - -------- MC_FSR : (MC Offset: 0x68) MC Flash Command Register -------- 
    .equ AT91C_MC_SECURITY         , (0x1 <<  4) //- (MC) Security Bit Status
    .equ AT91C_MC_GPNVM0           , (0x1 <<  8) //- (MC) Sector 0 Lock Status
    .equ AT91C_MC_GPNVM1           , (0x1 <<  9) //- (MC) Sector 1 Lock Status
    .equ AT91C_MC_GPNVM2           , (0x1 << 10) //- (MC) Sector 2 Lock Status
    .equ AT91C_MC_GPNVM3           , (0x1 << 11) //- (MC) Sector 3 Lock Status
    .equ AT91C_MC_GPNVM4           , (0x1 << 12) //- (MC) Sector 4 Lock Status
    .equ AT91C_MC_GPNVM5           , (0x1 << 13) //- (MC) Sector 5 Lock Status
    .equ AT91C_MC_GPNVM6           , (0x1 << 14) //- (MC) Sector 6 Lock Status
    .equ AT91C_MC_GPNVM7           , (0x1 << 15) //- (MC) Sector 7 Lock Status
    .equ AT91C_MC_LOCKS0           , (0x1 << 16) //- (MC) Sector 0 Lock Status
    .equ AT91C_MC_LOCKS1           , (0x1 << 17) //- (MC) Sector 1 Lock Status
    .equ AT91C_MC_LOCKS2           , (0x1 << 18) //- (MC) Sector 2 Lock Status
    .equ AT91C_MC_LOCKS3           , (0x1 << 19) //- (MC) Sector 3 Lock Status
    .equ AT91C_MC_LOCKS4           , (0x1 << 20) //- (MC) Sector 4 Lock Status
    .equ AT91C_MC_LOCKS5           , (0x1 << 21) //- (MC) Sector 5 Lock Status
    .equ AT91C_MC_LOCKS6           , (0x1 << 22) //- (MC) Sector 6 Lock Status
    .equ AT91C_MC_LOCKS7           , (0x1 << 23) //- (MC) Sector 7 Lock Status
    .equ AT91C_MC_LOCKS8           , (0x1 << 24) //- (MC) Sector 8 Lock Status
    .equ AT91C_MC_LOCKS9           , (0x1 << 25) //- (MC) Sector 9 Lock Status
    .equ AT91C_MC_LOCKS10          , (0x1 << 26) //- (MC) Sector 10 Lock Status
    .equ AT91C_MC_LOCKS11          , (0x1 << 27) //- (MC) Sector 11 Lock Status
    .equ AT91C_MC_LOCKS12          , (0x1 << 28) //- (MC) Sector 12 Lock Status
    .equ AT91C_MC_LOCKS13          , (0x1 << 29) //- (MC) Sector 13 Lock Status
    .equ AT91C_MC_LOCKS14          , (0x1 << 30) //- (MC) Sector 14 Lock Status
    .equ AT91C_MC_LOCKS15          , (0x1 << 31) //- (MC) Sector 15 Lock Status

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Serial Parallel Interface
// - *****************************************************************************
// - -------- SPI_CR : (SPI Offset: 0x0) SPI Control Register -------- 
    .equ AT91C_SPI_SPIEN           , (0x1 <<  0) //- (SPI) SPI Enable
    .equ AT91C_SPI_SPIDIS          , (0x1 <<  1) //- (SPI) SPI Disable
    .equ AT91C_SPI_SWRST           , (0x1 <<  7) //- (SPI) SPI Software reset
    .equ AT91C_SPI_LASTXFER        , (0x1 << 24) //- (SPI) SPI Last Transfer
// - -------- SPI_MR : (SPI Offset: 0x4) SPI Mode Register -------- 
    .equ AT91C_SPI_MSTR            , (0x1 <<  0) //- (SPI) Master/Slave Mode
    .equ AT91C_SPI_PS              , (0x1 <<  1) //- (SPI) Peripheral Select
    .equ AT91C_SPI_PS_FIXED        , (0x0 <<  1) //- (SPI) Fixed Peripheral Select
    .equ AT91C_SPI_PS_VARIABLE     , (0x1 <<  1) //- (SPI) Variable Peripheral Select
    .equ AT91C_SPI_PCSDEC          , (0x1 <<  2) //- (SPI) Chip Select Decode
    .equ AT91C_SPI_FDIV            , (0x1 <<  3) //- (SPI) Clock Selection
    .equ AT91C_SPI_MODFDIS         , (0x1 <<  4) //- (SPI) Mode Fault Detection
    .equ AT91C_SPI_LLB             , (0x1 <<  7) //- (SPI) Clock Selection
    .equ AT91C_SPI_PCS             , (0xF << 16) //- (SPI) Peripheral Chip Select
    .equ AT91C_SPI_DLYBCS          , (0xFF << 24) //- (SPI) Delay Between Chip Selects
// - -------- SPI_RDR : (SPI Offset: 0x8) Receive Data Register -------- 
    .equ AT91C_SPI_RD              , (0xFFFF <<  0) //- (SPI) Receive Data
    .equ AT91C_SPI_RPCS            , (0xF << 16) //- (SPI) Peripheral Chip Select Status
// - -------- SPI_TDR : (SPI Offset: 0xc) Transmit Data Register -------- 
    .equ AT91C_SPI_TD              , (0xFFFF <<  0) //- (SPI) Transmit Data
    .equ AT91C_SPI_TPCS            , (0xF << 16) //- (SPI) Peripheral Chip Select Status
// - -------- SPI_SR : (SPI Offset: 0x10) Status Register -------- 
    .equ AT91C_SPI_RDRF            , (0x1 <<  0) //- (SPI) Receive Data Register Full
    .equ AT91C_SPI_TDRE            , (0x1 <<  1) //- (SPI) Transmit Data Register Empty
    .equ AT91C_SPI_MODF            , (0x1 <<  2) //- (SPI) Mode Fault Error
    .equ AT91C_SPI_OVRES           , (0x1 <<  3) //- (SPI) Overrun Error Status
    .equ AT91C_SPI_ENDRX           , (0x1 <<  4) //- (SPI) End of Receiver Transfer
    .equ AT91C_SPI_ENDTX           , (0x1 <<  5) //- (SPI) End of Receiver Transfer
    .equ AT91C_SPI_RXBUFF          , (0x1 <<  6) //- (SPI) RXBUFF Interrupt
    .equ AT91C_SPI_TXBUFE          , (0x1 <<  7) //- (SPI) TXBUFE Interrupt
    .equ AT91C_SPI_NSSR            , (0x1 <<  8) //- (SPI) NSSR Interrupt
    .equ AT91C_SPI_TXEMPTY         , (0x1 <<  9) //- (SPI) TXEMPTY Interrupt
    .equ AT91C_SPI_SPIENS          , (0x1 << 16) //- (SPI) Enable Status
// - -------- SPI_IER : (SPI Offset: 0x14) Interrupt Enable Register -------- 
// - -------- SPI_IDR : (SPI Offset: 0x18) Interrupt Disable Register -------- 
// - -------- SPI_IMR : (SPI Offset: 0x1c) Interrupt Mask Register -------- 
// - -------- SPI_CSR : (SPI Offset: 0x30) Chip Select Register -------- 
    .equ AT91C_SPI_CPOL            , (0x1 <<  0) //- (SPI) Clock Polarity
    .equ AT91C_SPI_NCPHA           , (0x1 <<  1) //- (SPI) Clock Phase
    .equ AT91C_SPI_CSAAT           , (0x1 <<  3) //- (SPI) Chip Select Active After Transfer
    .equ AT91C_SPI_BITS            , (0xF <<  4) //- (SPI) Bits Per Transfer
    .equ AT91C_SPI_BITS_8          , (0x0 <<  4) //- (SPI) 8 Bits Per transfer
    .equ AT91C_SPI_BITS_9          , (0x1 <<  4) //- (SPI) 9 Bits Per transfer
    .equ AT91C_SPI_BITS_10         , (0x2 <<  4) //- (SPI) 10 Bits Per transfer
    .equ AT91C_SPI_BITS_11         , (0x3 <<  4) //- (SPI) 11 Bits Per transfer
    .equ AT91C_SPI_BITS_12         , (0x4 <<  4) //- (SPI) 12 Bits Per transfer
    .equ AT91C_SPI_BITS_13         , (0x5 <<  4) //- (SPI) 13 Bits Per transfer
    .equ AT91C_SPI_BITS_14         , (0x6 <<  4) //- (SPI) 14 Bits Per transfer
    .equ AT91C_SPI_BITS_15         , (0x7 <<  4) //- (SPI) 15 Bits Per transfer
    .equ AT91C_SPI_BITS_16         , (0x8 <<  4) //- (SPI) 16 Bits Per transfer
    .equ AT91C_SPI_SCBR            , (0xFF <<  8) //- (SPI) Serial Clock Baud Rate
    .equ AT91C_SPI_DLYBS           , (0xFF << 16) //- (SPI) Serial Clock Baud Rate
    .equ AT91C_SPI_DLYBCT          , (0xFF << 24) //- (SPI) Delay Between Consecutive Transfers

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Analog to Digital Convertor
// - *****************************************************************************
// - -------- ADC_CR : (ADC Offset: 0x0) ADC Control Register -------- 
    .equ AT91C_ADC_SWRST           , (0x1 <<  0) //- (ADC) Software Reset
    .equ AT91C_ADC_START           , (0x1 <<  1) //- (ADC) Start Conversion
// - -------- ADC_MR : (ADC Offset: 0x4) ADC Mode Register -------- 
    .equ AT91C_ADC_TRGEN           , (0x1 <<  0) //- (ADC) Trigger Enable
    .equ AT91C_ADC_TRGEN_DIS       , (0x0) //- (ADC) Hradware triggers are disabled. Starting a conversion is only possible by software
    .equ AT91C_ADC_TRGEN_EN        , (0x1) //- (ADC) Hardware trigger selected by TRGSEL field is enabled.
    .equ AT91C_ADC_TRGSEL          , (0x7 <<  1) //- (ADC) Trigger Selection
    .equ AT91C_ADC_TRGSEL_TIOA0    , (0x0 <<  1) //- (ADC) Selected TRGSEL = TIAO0
    .equ AT91C_ADC_TRGSEL_TIOA1    , (0x1 <<  1) //- (ADC) Selected TRGSEL = TIAO1
    .equ AT91C_ADC_TRGSEL_TIOA2    , (0x2 <<  1) //- (ADC) Selected TRGSEL = TIAO2
    .equ AT91C_ADC_TRGSEL_TIOA3    , (0x3 <<  1) //- (ADC) Selected TRGSEL = TIAO3
    .equ AT91C_ADC_TRGSEL_TIOA4    , (0x4 <<  1) //- (ADC) Selected TRGSEL = TIAO4
    .equ AT91C_ADC_TRGSEL_TIOA5    , (0x5 <<  1) //- (ADC) Selected TRGSEL = TIAO5
    .equ AT91C_ADC_TRGSEL_EXT      , (0x6 <<  1) //- (ADC) Selected TRGSEL = External Trigger
    .equ AT91C_ADC_LOWRES          , (0x1 <<  4) //- (ADC) Resolution.
    .equ AT91C_ADC_LOWRES_10_BIT   , (0x0 <<  4) //- (ADC) 10-bit resolution
    .equ AT91C_ADC_LOWRES_8_BIT    , (0x1 <<  4) //- (ADC) 8-bit resolution
    .equ AT91C_ADC_SLEEP           , (0x1 <<  5) //- (ADC) Sleep Mode
    .equ AT91C_ADC_SLEEP_NORMAL_MODE , (0x0 <<  5) //- (ADC) Normal Mode
    .equ AT91C_ADC_SLEEP_MODE      , (0x1 <<  5) //- (ADC) Sleep Mode
    .equ AT91C_ADC_PRESCAL         , (0x3F <<  8) //- (ADC) Prescaler rate selection
    .equ AT91C_ADC_STARTUP         , (0x1F << 16) //- (ADC) Startup Time
    .equ AT91C_ADC_SHTIM           , (0xF << 24) //- (ADC) Sample & Hold Time
// - --------   ADC_CHER : (ADC Offset: 0x10) ADC Channel Enable Register -------- 
    .equ AT91C_ADC_CH0             , (0x1 <<  0) //- (ADC) Channel 0
    .equ AT91C_ADC_CH1             , (0x1 <<  1) //- (ADC) Channel 1
    .equ AT91C_ADC_CH2             , (0x1 <<  2) //- (ADC) Channel 2
    .equ AT91C_ADC_CH3             , (0x1 <<  3) //- (ADC) Channel 3
    .equ AT91C_ADC_CH4             , (0x1 <<  4) //- (ADC) Channel 4
    .equ AT91C_ADC_CH5             , (0x1 <<  5) //- (ADC) Channel 5
    .equ AT91C_ADC_CH6             , (0x1 <<  6) //- (ADC) Channel 6
    .equ AT91C_ADC_CH7             , (0x1 <<  7) //- (ADC) Channel 7
// - --------   ADC_CHDR : (ADC Offset: 0x14) ADC Channel Disable Register -------- 
// - --------   ADC_CHSR : (ADC Offset: 0x18) ADC Channel Status Register -------- 
// - -------- ADC_SR : (ADC Offset: 0x1c) ADC Status Register -------- 
    .equ AT91C_ADC_EOC0            , (0x1 <<  0) //- (ADC) End of Conversion
    .equ AT91C_ADC_EOC1            , (0x1 <<  1) //- (ADC) End of Conversion
    .equ AT91C_ADC_EOC2            , (0x1 <<  2) //- (ADC) End of Conversion
    .equ AT91C_ADC_EOC3            , (0x1 <<  3) //- (ADC) End of Conversion
    .equ AT91C_ADC_EOC4            , (0x1 <<  4) //- (ADC) End of Conversion
    .equ AT91C_ADC_EOC5            , (0x1 <<  5) //- (ADC) End of Conversion
    .equ AT91C_ADC_EOC6            , (0x1 <<  6) //- (ADC) End of Conversion
    .equ AT91C_ADC_EOC7            , (0x1 <<  7) //- (ADC) End of Conversion
    .equ AT91C_ADC_OVRE0           , (0x1 <<  8) //- (ADC) Overrun Error
    .equ AT91C_ADC_OVRE1           , (0x1 <<  9) //- (ADC) Overrun Error
    .equ AT91C_ADC_OVRE2           , (0x1 << 10) //- (ADC) Overrun Error
    .equ AT91C_ADC_OVRE3           , (0x1 << 11) //- (ADC) Overrun Error
    .equ AT91C_ADC_OVRE4           , (0x1 << 12) //- (ADC) Overrun Error
    .equ AT91C_ADC_OVRE5           , (0x1 << 13) //- (ADC) Overrun Error
    .equ AT91C_ADC_OVRE6           , (0x1 << 14) //- (ADC) Overrun Error
    .equ AT91C_ADC_OVRE7           , (0x1 << 15) //- (ADC) Overrun Error
    .equ AT91C_ADC_DRDY            , (0x1 << 16) //- (ADC) Data Ready
    .equ AT91C_ADC_GOVRE           , (0x1 << 17) //- (ADC) General Overrun
    .equ AT91C_ADC_ENDRX           , (0x1 << 18) //- (ADC) End of Receiver Transfer
    .equ AT91C_ADC_RXBUFF          , (0x1 << 19) //- (ADC) RXBUFF Interrupt
// - -------- ADC_LCDR : (ADC Offset: 0x20) ADC Last Converted Data Register -------- 
    .equ AT91C_ADC_LDATA           , (0x3FF <<  0) //- (ADC) Last Data Converted
// - -------- ADC_IER : (ADC Offset: 0x24) ADC Interrupt Enable Register -------- 
// - -------- ADC_IDR : (ADC Offset: 0x28) ADC Interrupt Disable Register -------- 
// - -------- ADC_IMR : (ADC Offset: 0x2c) ADC Interrupt Mask Register -------- 
// - -------- ADC_CDR0 : (ADC Offset: 0x30) ADC Channel Data Register 0 -------- 
    .equ AT91C_ADC_DATA            , (0x3FF <<  0) //- (ADC) Converted Data
// - -------- ADC_CDR1 : (ADC Offset: 0x34) ADC Channel Data Register 1 -------- 
// - -------- ADC_CDR2 : (ADC Offset: 0x38) ADC Channel Data Register 2 -------- 
// - -------- ADC_CDR3 : (ADC Offset: 0x3c) ADC Channel Data Register 3 -------- 
// - -------- ADC_CDR4 : (ADC Offset: 0x40) ADC Channel Data Register 4 -------- 
// - -------- ADC_CDR5 : (ADC Offset: 0x44) ADC Channel Data Register 5 -------- 
// - -------- ADC_CDR6 : (ADC Offset: 0x48) ADC Channel Data Register 6 -------- 
// - -------- ADC_CDR7 : (ADC Offset: 0x4c) ADC Channel Data Register 7 -------- 

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Synchronous Serial Controller Interface
// - *****************************************************************************
// - -------- SSC_CR : (SSC Offset: 0x0) SSC Control Register -------- 
    .equ AT91C_SSC_RXEN            , (0x1 <<  0) //- (SSC) Receive Enable
    .equ AT91C_SSC_RXDIS           , (0x1 <<  1) //- (SSC) Receive Disable
    .equ AT91C_SSC_TXEN            , (0x1 <<  8) //- (SSC) Transmit Enable
    .equ AT91C_SSC_TXDIS           , (0x1 <<  9) //- (SSC) Transmit Disable
    .equ AT91C_SSC_SWRST           , (0x1 << 15) //- (SSC) Software Reset
// - -------- SSC_RCMR : (SSC Offset: 0x10) SSC Receive Clock Mode Register -------- 
    .equ AT91C_SSC_CKS             , (0x3 <<  0) //- (SSC) Receive/Transmit Clock Selection
    .equ AT91C_SSC_CKS_DIV         , (0x0) //- (SSC) Divided Clock
    .equ AT91C_SSC_CKS_TK          , (0x1) //- (SSC) TK Clock signal
    .equ AT91C_SSC_CKS_RK          , (0x2) //- (SSC) RK pin
    .equ AT91C_SSC_CKO             , (0x7 <<  2) //- (SSC) Receive/Transmit Clock Output Mode Selection
    .equ AT91C_SSC_CKO_NONE        , (0x0 <<  2) //- (SSC) Receive/Transmit Clock Output Mode: None RK pin: Input-only
    .equ AT91C_SSC_CKO_CONTINOUS   , (0x1 <<  2) //- (SSC) Continuous Receive/Transmit Clock RK pin: Output
    .equ AT91C_SSC_CKO_DATA_TX     , (0x2 <<  2) //- (SSC) Receive/Transmit Clock only during data transfers RK pin: Output
    .equ AT91C_SSC_CKI             , (0x1 <<  5) //- (SSC) Receive/Transmit Clock Inversion
    .equ AT91C_SSC_START           , (0xF <<  8) //- (SSC) Receive/Transmit Start Selection
    .equ AT91C_SSC_START_CONTINOUS , (0x0 <<  8) //- (SSC) Continuous, as soon as the receiver is enabled, and immediately after the end of transfer of the previous data.
    .equ AT91C_SSC_START_TX        , (0x1 <<  8) //- (SSC) Transmit/Receive start
    .equ AT91C_SSC_START_LOW_RF    , (0x2 <<  8) //- (SSC) Detection of a low level on RF input
    .equ AT91C_SSC_START_HIGH_RF   , (0x3 <<  8) //- (SSC) Detection of a high level on RF input
    .equ AT91C_SSC_START_FALL_RF   , (0x4 <<  8) //- (SSC) Detection of a falling edge on RF input
    .equ AT91C_SSC_START_RISE_RF   , (0x5 <<  8) //- (SSC) Detection of a rising edge on RF input
    .equ AT91C_SSC_START_LEVEL_RF  , (0x6 <<  8) //- (SSC) Detection of any level change on RF input
    .equ AT91C_SSC_START_EDGE_RF   , (0x7 <<  8) //- (SSC) Detection of any edge on RF input
    .equ AT91C_SSC_START_0         , (0x8 <<  8) //- (SSC) Compare 0
    .equ AT91C_SSC_STTDLY          , (0xFF << 16) //- (SSC) Receive/Transmit Start Delay
    .equ AT91C_SSC_PERIOD          , (0xFF << 24) //- (SSC) Receive/Transmit Period Divider Selection
// - -------- SSC_RFMR : (SSC Offset: 0x14) SSC Receive Frame Mode Register -------- 
    .equ AT91C_SSC_DATLEN          , (0x1F <<  0) //- (SSC) Data Length
    .equ AT91C_SSC_LOOP            , (0x1 <<  5) //- (SSC) Loop Mode
    .equ AT91C_SSC_MSBF            , (0x1 <<  7) //- (SSC) Most Significant Bit First
    .equ AT91C_SSC_DATNB           , (0xF <<  8) //- (SSC) Data Number per Frame
    .equ AT91C_SSC_FSLEN           , (0xF << 16) //- (SSC) Receive/Transmit Frame Sync length
    .equ AT91C_SSC_FSOS            , (0x7 << 20) //- (SSC) Receive/Transmit Frame Sync Output Selection
    .equ AT91C_SSC_FSOS_NONE       , (0x0 << 20) //- (SSC) Selected Receive/Transmit Frame Sync Signal: None RK pin Input-only
    .equ AT91C_SSC_FSOS_NEGATIVE   , (0x1 << 20) //- (SSC) Selected Receive/Transmit Frame Sync Signal: Negative Pulse
    .equ AT91C_SSC_FSOS_POSITIVE   , (0x2 << 20) //- (SSC) Selected Receive/Transmit Frame Sync Signal: Positive Pulse
    .equ AT91C_SSC_FSOS_LOW        , (0x3 << 20) //- (SSC) Selected Receive/Transmit Frame Sync Signal: Driver Low during data transfer
    .equ AT91C_SSC_FSOS_HIGH       , (0x4 << 20) //- (SSC) Selected Receive/Transmit Frame Sync Signal: Driver High during data transfer
    .equ AT91C_SSC_FSOS_TOGGLE     , (0x5 << 20) //- (SSC) Selected Receive/Transmit Frame Sync Signal: Toggling at each start of data transfer
    .equ AT91C_SSC_FSEDGE          , (0x1 << 24) //- (SSC) Frame Sync Edge Detection
// - -------- SSC_TCMR : (SSC Offset: 0x18) SSC Transmit Clock Mode Register -------- 
// - -------- SSC_TFMR : (SSC Offset: 0x1c) SSC Transmit Frame Mode Register -------- 
    .equ AT91C_SSC_DATDEF          , (0x1 <<  5) //- (SSC) Data Default Value
    .equ AT91C_SSC_FSDEN           , (0x1 << 23) //- (SSC) Frame Sync Data Enable
// - -------- SSC_SR : (SSC Offset: 0x40) SSC Status Register -------- 
    .equ AT91C_SSC_TXRDY           , (0x1 <<  0) //- (SSC) Transmit Ready
    .equ AT91C_SSC_TXEMPTY         , (0x1 <<  1) //- (SSC) Transmit Empty
    .equ AT91C_SSC_ENDTX           , (0x1 <<  2) //- (SSC) End Of Transmission
    .equ AT91C_SSC_TXBUFE          , (0x1 <<  3) //- (SSC) Transmit Buffer Empty
    .equ AT91C_SSC_RXRDY           , (0x1 <<  4) //- (SSC) Receive Ready
    .equ AT91C_SSC_OVRUN           , (0x1 <<  5) //- (SSC) Receive Overrun
    .equ AT91C_SSC_ENDRX           , (0x1 <<  6) //- (SSC) End of Reception
    .equ AT91C_SSC_RXBUFF          , (0x1 <<  7) //- (SSC) Receive Buffer Full
    .equ AT91C_SSC_TXSYN           , (0x1 << 10) //- (SSC) Transmit Sync
    .equ AT91C_SSC_RXSYN           , (0x1 << 11) //- (SSC) Receive Sync
    .equ AT91C_SSC_TXENA           , (0x1 << 16) //- (SSC) Transmit Enable
    .equ AT91C_SSC_RXENA           , (0x1 << 17) //- (SSC) Receive Enable
// - -------- SSC_IER : (SSC Offset: 0x44) SSC Interrupt Enable Register -------- 
// - -------- SSC_IDR : (SSC Offset: 0x48) SSC Interrupt Disable Register -------- 
// - -------- SSC_IMR : (SSC Offset: 0x4c) SSC Interrupt Mask Register -------- 

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Usart
// - *****************************************************************************
// - -------- US_CR : (USART Offset: 0x0) Debug Unit Control Register -------- 
    .equ AT91C_US_STTBRK           , (0x1 <<  9) //- (USART) Start Break
    .equ AT91C_US_STPBRK           , (0x1 << 10) //- (USART) Stop Break
    .equ AT91C_US_STTTO            , (0x1 << 11) //- (USART) Start Time-out
    .equ AT91C_US_SENDA            , (0x1 << 12) //- (USART) Send Address
    .equ AT91C_US_RSTIT            , (0x1 << 13) //- (USART) Reset Iterations
    .equ AT91C_US_RSTNACK          , (0x1 << 14) //- (USART) Reset Non Acknowledge
    .equ AT91C_US_RETTO            , (0x1 << 15) //- (USART) Rearm Time-out
    .equ AT91C_US_DTREN            , (0x1 << 16) //- (USART) Data Terminal ready Enable
    .equ AT91C_US_DTRDIS           , (0x1 << 17) //- (USART) Data Terminal ready Disable
    .equ AT91C_US_RTSEN            , (0x1 << 18) //- (USART) R,est to Send enable
    .equ AT91C_US_RTSDIS           , (0x1 << 19) //- (USART) R,est to Send Disable
// - -------- US_MR : (USART Offset: 0x4) Debug Unit Mode Register -------- 
    .equ AT91C_US_USMODE           , (0xF <<  0) //- (USART) Usart mode
    .equ AT91C_US_USMODE_NORMAL    , (0x0) //- (USART) Normal
    .equ AT91C_US_USMODE_RS485     , (0x1) //- (USART) RS485
    .equ AT91C_US_USMODE_HWHSH     , (0x2) //- (USART) Hardware Handshaking
    .equ AT91C_US_USMODE_MODEM     , (0x3) //- (USART) Modem
    .equ AT91C_US_USMODE_ISO7816_0 , (0x4) //- (USART) ISO7816 protocol: T = 0
    .equ AT91C_US_USMODE_ISO7816_1 , (0x6) //- (USART) ISO7816 protocol: T = 1
    .equ AT91C_US_USMODE_IRDA      , (0x8) //- (USART) IrDA
    .equ AT91C_US_USMODE_SWHSH     , (0xC) //- (USART) Software Handshaking
    .equ AT91C_US_CLKS             , (0x3 <<  4) //- (USART) Clock Selection (Baud Rate generator Input Clock
    .equ AT91C_US_CLKS_CLOCK       , (0x0 <<  4) //- (USART) Clock
    .equ AT91C_US_CLKS_FDIV1       , (0x1 <<  4) //- (USART) fdiv1
    .equ AT91C_US_CLKS_SLOW        , (0x2 <<  4) //- (USART) slow_clock (ARM)
    .equ AT91C_US_CLKS_EXT         , (0x3 <<  4) //- (USART) External (SCK)
    .equ AT91C_US_CHRL             , (0x3 <<  6) //- (USART) Clock Selection (Baud Rate generator Input Clock
    .equ AT91C_US_CHRL_5_BITS      , (0x0 <<  6) //- (USART) Character Length: 5 bits
    .equ AT91C_US_CHRL_6_BITS      , (0x1 <<  6) //- (USART) Character Length: 6 bits
    .equ AT91C_US_CHRL_7_BITS      , (0x2 <<  6) //- (USART) Character Length: 7 bits
    .equ AT91C_US_CHRL_8_BITS      , (0x3 <<  6) //- (USART) Character Length: 8 bits
    .equ AT91C_US_SYNC             , (0x1 <<  8) //- (USART) Synchronous Mode Select
    .equ AT91C_US_NBSTOP           , (0x3 << 12) //- (USART) Number of Stop bits
    .equ AT91C_US_NBSTOP_1_BIT     , (0x0 << 12) //- (USART) 1 stop bit
    .equ AT91C_US_NBSTOP_15_BIT    , (0x1 << 12) //- (USART) Asynchronous (SYNC=0) 2 stop bits Synchronous (SYNC=1) 2 stop bits
    .equ AT91C_US_NBSTOP_2_BIT     , (0x2 << 12) //- (USART) 2 stop bits
    .equ AT91C_US_MSBF             , (0x1 << 16) //- (USART) Bit Order
    .equ AT91C_US_MODE9            , (0x1 << 17) //- (USART) 9-bit Character length
    .equ AT91C_US_CKLO             , (0x1 << 18) //- (USART) Clock Output Select
    .equ AT91C_US_OVER             , (0x1 << 19) //- (USART) Over Sampling Mode
    .equ AT91C_US_INACK            , (0x1 << 20) //- (USART) Inhibit Non Acknowledge
    .equ AT91C_US_DSNACK           , (0x1 << 21) //- (USART) Disable Successive NACK
    .equ AT91C_US_MAX_ITER         , (0x1 << 24) //- (USART) Number of Repetitions
    .equ AT91C_US_FILTER           , (0x1 << 28) //- (USART) Receive Line Filter
// - -------- US_IER : (USART Offset: 0x8) Debug Unit Interrupt Enable Register -------- 
    .equ AT91C_US_RXBRK            , (0x1 <<  2) //- (USART) Break Received/End of Break
    .equ AT91C_US_TIMEOUT          , (0x1 <<  8) //- (USART) Receiver Time-out
    .equ AT91C_US_ITERATION        , (0x1 << 10) //- (USART) Max number of Repetitions Reached
    .equ AT91C_US_NACK             , (0x1 << 13) //- (USART) Non Acknowledge
    .equ AT91C_US_RIIC             , (0x1 << 16) //- (USART) Ring INdicator Input Change Flag
    .equ AT91C_US_DSRIC            , (0x1 << 17) //- (USART) Data Set Ready Input Change Flag
    .equ AT91C_US_DCDIC            , (0x1 << 18) //- (USART) Data Carrier Flag
    .equ AT91C_US_CTSIC            , (0x1 << 19) //- (USART) Clear To Send Input Change Flag
// - -------- US_IDR : (USART Offset: 0xc) Debug Unit Interrupt Disable Register -------- 
// - -------- US_IMR : (USART Offset: 0x10) Debug Unit Interrupt Mask Register -------- 
// - -------- US_CSR : (USART Offset: 0x14) Debug Unit Channel Status Register -------- 
    .equ AT91C_US_RI               , (0x1 << 20) //- (USART) Image of RI Input
    .equ AT91C_US_DSR              , (0x1 << 21) //- (USART) Image of DSR Input
    .equ AT91C_US_DCD              , (0x1 << 22) //- (USART) Image of DCD Input
    .equ AT91C_US_CTS              , (0x1 << 23) //- (USART) Image of CTS Input

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Two-wire Interface
// - *****************************************************************************
// - -------- TWI_CR : (TWI Offset: 0x0) TWI Control Register -------- 
    .equ AT91C_TWI_START           , (0x1 <<  0) //- (TWI) Send a START Condition
    .equ AT91C_TWI_STOP            , (0x1 <<  1) //- (TWI) Send a STOP Condition
    .equ AT91C_TWI_MSEN            , (0x1 <<  2) //- (TWI) TWI Master Transfer Enabled
    .equ AT91C_TWI_MSDIS           , (0x1 <<  3) //- (TWI) TWI Master Transfer Disabled
    .equ AT91C_TWI_SWRST           , (0x1 <<  7) //- (TWI) Software Reset
// - -------- TWI_MMR : (TWI Offset: 0x4) TWI Master Mode Register -------- 
    .equ AT91C_TWI_IADRSZ          , (0x3 <<  8) //- (TWI) Internal Device Address Size
    .equ AT91C_TWI_IADRSZ_NO       , (0x0 <<  8) //- (TWI) No internal device address
    .equ AT91C_TWI_IADRSZ_1_BYTE   , (0x1 <<  8) //- (TWI) One-byte internal device address
    .equ AT91C_TWI_IADRSZ_2_BYTE   , (0x2 <<  8) //- (TWI) Two-byte internal device address
    .equ AT91C_TWI_IADRSZ_3_BYTE   , (0x3 <<  8) //- (TWI) Three-byte internal device address
    .equ AT91C_TWI_MREAD           , (0x1 << 12) //- (TWI) Master Read Direction
    .equ AT91C_TWI_DADR            , (0x7F << 16) //- (TWI) Device Address
// - -------- TWI_CWGR : (TWI Offset: 0x10) TWI Clock Waveform Generator Register -------- 
    .equ AT91C_TWI_CLDIV           , (0xFF <<  0) //- (TWI) Clock Low Divider
    .equ AT91C_TWI_CHDIV           , (0xFF <<  8) //- (TWI) Clock High Divider
    .equ AT91C_TWI_CKDIV           , (0x7 << 16) //- (TWI) Clock Divider
// - -------- TWI_SR : (TWI Offset: 0x20) TWI Status Register -------- 
    .equ AT91C_TWI_TXCOMP          , (0x1 <<  0) //- (TWI) Transmission Completed
    .equ AT91C_TWI_RXRDY           , (0x1 <<  1) //- (TWI) Receive holding register ReaDY
    .equ AT91C_TWI_TXRDY           , (0x1 <<  2) //- (TWI) Transmit holding register ReaDY
    .equ AT91C_TWI_OVRE            , (0x1 <<  6) //- (TWI) Overrun Error
    .equ AT91C_TWI_UNRE            , (0x1 <<  7) //- (TWI) Underrun Error
    .equ AT91C_TWI_NACK            , (0x1 <<  8) //- (TWI) Not Acknowledged
// - -------- TWI_IER : (TWI Offset: 0x24) TWI Interrupt Enable Register -------- 
// - -------- TWI_IDR : (TWI Offset: 0x28) TWI Interrupt Disable Register -------- 
// - -------- TWI_IMR : (TWI Offset: 0x2c) TWI Interrupt Mask Register -------- 

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Timer Counter Channel Interface
// - *****************************************************************************
// - -------- TC_CCR : (TC Offset: 0x0) TC Channel Control Register -------- 
    .equ AT91C_TC_CLKEN            , (0x1 <<  0) //- (TC) Counter Clock Enable Command
    .equ AT91C_TC_CLKDIS           , (0x1 <<  1) //- (TC) Counter Clock Disable Command
    .equ AT91C_TC_SWTRG            , (0x1 <<  2) //- (TC) Software Trigger Command
// - -------- TC_CMR : (TC Offset: 0x4) TC Channel Mode Register: Capture Mode / Waveform Mode -------- 
    .equ AT91C_TC_CLKS             , (0x7 <<  0) //- (TC) Clock Selection
    .equ AT91C_TC_CLKS_TIMER_DIV1_CLOCK , (0x0) //- (TC) Clock selected: TIMER_DIV1_CLOCK
    .equ AT91C_TC_CLKS_TIMER_DIV2_CLOCK , (0x1) //- (TC) Clock selected: TIMER_DIV2_CLOCK
    .equ AT91C_TC_CLKS_TIMER_DIV3_CLOCK , (0x2) //- (TC) Clock selected: TIMER_DIV3_CLOCK
    .equ AT91C_TC_CLKS_TIMER_DIV4_CLOCK , (0x3) //- (TC) Clock selected: TIMER_DIV4_CLOCK
    .equ AT91C_TC_CLKS_TIMER_DIV5_CLOCK , (0x4) //- (TC) Clock selected: TIMER_DIV5_CLOCK
    .equ AT91C_TC_CLKS_XC0         , (0x5) //- (TC) Clock selected: XC0
    .equ AT91C_TC_CLKS_XC1         , (0x6) //- (TC) Clock selected: XC1
    .equ AT91C_TC_CLKS_XC2         , (0x7) //- (TC) Clock selected: XC2
    .equ AT91C_TC_CLKI             , (0x1 <<  3) //- (TC) Clock Invert
    .equ AT91C_TC_BURST            , (0x3 <<  4) //- (TC) Burst Signal Selection
    .equ AT91C_TC_BURST_NONE       , (0x0 <<  4) //- (TC) The clock is not gated by an external signal
    .equ AT91C_TC_BURST_XC0        , (0x1 <<  4) //- (TC) XC0 is ANDed with the selected clock
    .equ AT91C_TC_BURST_XC1        , (0x2 <<  4) //- (TC) XC1 is ANDed with the selected clock
    .equ AT91C_TC_BURST_XC2        , (0x3 <<  4) //- (TC) XC2 is ANDed with the selected clock
    .equ AT91C_TC_CPCSTOP          , (0x1 <<  6) //- (TC) Counter Clock Stopped with RC Compare
    .equ AT91C_TC_LDBSTOP          , (0x1 <<  6) //- (TC) Counter Clock Stopped with RB Loading
    .equ AT91C_TC_CPCDIS           , (0x1 <<  7) //- (TC) Counter Clock Disable with RC Compare
    .equ AT91C_TC_LDBDIS           , (0x1 <<  7) //- (TC) Counter Clock Disabled with RB Loading
    .equ AT91C_TC_ETRGEDG          , (0x3 <<  8) //- (TC) External Trigger Edge Selection
    .equ AT91C_TC_ETRGEDG_NONE     , (0x0 <<  8) //- (TC) Edge: None
    .equ AT91C_TC_ETRGEDG_RISING   , (0x1 <<  8) //- (TC) Edge: rising edge
    .equ AT91C_TC_ETRGEDG_FALLING  , (0x2 <<  8) //- (TC) Edge: falling edge
    .equ AT91C_TC_ETRGEDG_BOTH     , (0x3 <<  8) //- (TC) Edge: each edge
    .equ AT91C_TC_EEVTEDG          , (0x3 <<  8) //- (TC) External Event Edge Selection
    .equ AT91C_TC_EEVTEDG_NONE     , (0x0 <<  8) //- (TC) Edge: None
    .equ AT91C_TC_EEVTEDG_RISING   , (0x1 <<  8) //- (TC) Edge: rising edge
    .equ AT91C_TC_EEVTEDG_FALLING  , (0x2 <<  8) //- (TC) Edge: falling edge
    .equ AT91C_TC_EEVTEDG_BOTH     , (0x3 <<  8) //- (TC) Edge: each edge
    .equ AT91C_TC_EEVT             , (0x3 << 10) //- (TC) External Event  Selection
    .equ AT91C_TC_EEVT_TIOB        , (0x0 << 10) //- (TC) Signal selected as external event: TIOB TIOB direction: input
    .equ AT91C_TC_EEVT_XC0         , (0x1 << 10) //- (TC) Signal selected as external event: XC0 TIOB direction: output
    .equ AT91C_TC_EEVT_XC1         , (0x2 << 10) //- (TC) Signal selected as external event: XC1 TIOB direction: output
    .equ AT91C_TC_EEVT_XC2         , (0x3 << 10) //- (TC) Signal selected as external event: XC2 TIOB direction: output
    .equ AT91C_TC_ABETRG           , (0x1 << 10) //- (TC) TIOA or TIOB External Trigger Selection
    .equ AT91C_TC_ENETRG           , (0x1 << 12) //- (TC) External Event Trigger enable
    .equ AT91C_TC_WAVESEL          , (0x3 << 13) //- (TC) Waveform  Selection
    .equ AT91C_TC_WAVESEL_UP       , (0x0 << 13) //- (TC) UP mode without atomatic trigger on RC Compare
    .equ AT91C_TC_WAVESEL_UPDOWN   , (0x1 << 13) //- (TC) UPDOWN mode without automatic trigger on RC Compare
    .equ AT91C_TC_WAVESEL_UP_AUTO  , (0x2 << 13) //- (TC) UP mode with automatic trigger on RC Compare
    .equ AT91C_TC_WAVESEL_UPDOWN_AUTO , (0x3 << 13) //- (TC) UPDOWN mode with automatic trigger on RC Compare
    .equ AT91C_TC_CPCTRG           , (0x1 << 14) //- (TC) RC Compare Trigger Enable
    .equ AT91C_TC_WAVE             , (0x1 << 15) //- (TC) 
    .equ AT91C_TC_ACPA             , (0x3 << 16) //- (TC) RA Compare Effect on TIOA
    .equ AT91C_TC_ACPA_NONE        , (0x0 << 16) //- (TC) Effect: none
    .equ AT91C_TC_ACPA_SET         , (0x1 << 16) //- (TC) Effect: set
    .equ AT91C_TC_ACPA_CLEAR       , (0x2 << 16) //- (TC) Effect: clear
    .equ AT91C_TC_ACPA_TOGGLE      , (0x3 << 16) //- (TC) Effect: toggle
    .equ AT91C_TC_LDRA             , (0x3 << 16) //- (TC) RA Loading Selection
    .equ AT91C_TC_LDRA_NONE        , (0x0 << 16) //- (TC) Edge: None
    .equ AT91C_TC_LDRA_RISING      , (0x1 << 16) //- (TC) Edge: rising edge of TIOA
    .equ AT91C_TC_LDRA_FALLING     , (0x2 << 16) //- (TC) Edge: falling edge of TIOA
    .equ AT91C_TC_LDRA_BOTH        , (0x3 << 16) //- (TC) Edge: each edge of TIOA
    .equ AT91C_TC_ACPC             , (0x3 << 18) //- (TC) RC Compare Effect on TIOA
    .equ AT91C_TC_ACPC_NONE        , (0x0 << 18) //- (TC) Effect: none
    .equ AT91C_TC_ACPC_SET         , (0x1 << 18) //- (TC) Effect: set
    .equ AT91C_TC_ACPC_CLEAR       , (0x2 << 18) //- (TC) Effect: clear
    .equ AT91C_TC_ACPC_TOGGLE      , (0x3 << 18) //- (TC) Effect: toggle
    .equ AT91C_TC_LDRB             , (0x3 << 18) //- (TC) RB Loading Selection
    .equ AT91C_TC_LDRB_NONE        , (0x0 << 18) //- (TC) Edge: None
    .equ AT91C_TC_LDRB_RISING      , (0x1 << 18) //- (TC) Edge: rising edge of TIOA
    .equ AT91C_TC_LDRB_FALLING     , (0x2 << 18) //- (TC) Edge: falling edge of TIOA
    .equ AT91C_TC_LDRB_BOTH        , (0x3 << 18) //- (TC) Edge: each edge of TIOA
    .equ AT91C_TC_AEEVT            , (0x3 << 20) //- (TC) External Event Effect on TIOA
    .equ AT91C_TC_AEEVT_NONE       , (0x0 << 20) //- (TC) Effect: none
    .equ AT91C_TC_AEEVT_SET        , (0x1 << 20) //- (TC) Effect: set
    .equ AT91C_TC_AEEVT_CLEAR      , (0x2 << 20) //- (TC) Effect: clear
    .equ AT91C_TC_AEEVT_TOGGLE     , (0x3 << 20) //- (TC) Effect: toggle
    .equ AT91C_TC_ASWTRG           , (0x3 << 22) //- (TC) Software Trigger Effect on TIOA
    .equ AT91C_TC_ASWTRG_NONE      , (0x0 << 22) //- (TC) Effect: none
    .equ AT91C_TC_ASWTRG_SET       , (0x1 << 22) //- (TC) Effect: set
    .equ AT91C_TC_ASWTRG_CLEAR     , (0x2 << 22) //- (TC) Effect: clear
    .equ AT91C_TC_ASWTRG_TOGGLE    , (0x3 << 22) //- (TC) Effect: toggle
    .equ AT91C_TC_BCPB             , (0x3 << 24) //- (TC) RB Compare Effect on TIOB
    .equ AT91C_TC_BCPB_NONE        , (0x0 << 24) //- (TC) Effect: none
    .equ AT91C_TC_BCPB_SET         , (0x1 << 24) //- (TC) Effect: set
    .equ AT91C_TC_BCPB_CLEAR       , (0x2 << 24) //- (TC) Effect: clear
    .equ AT91C_TC_BCPB_TOGGLE      , (0x3 << 24) //- (TC) Effect: toggle
    .equ AT91C_TC_BCPC             , (0x3 << 26) //- (TC) RC Compare Effect on TIOB
    .equ AT91C_TC_BCPC_NONE        , (0x0 << 26) //- (TC) Effect: none
    .equ AT91C_TC_BCPC_SET         , (0x1 << 26) //- (TC) Effect: set
    .equ AT91C_TC_BCPC_CLEAR       , (0x2 << 26) //- (TC) Effect: clear
    .equ AT91C_TC_BCPC_TOGGLE      , (0x3 << 26) //- (TC) Effect: toggle
    .equ AT91C_TC_BEEVT            , (0x3 << 28) //- (TC) External Event Effect on TIOB
    .equ AT91C_TC_BEEVT_NONE       , (0x0 << 28) //- (TC) Effect: none
    .equ AT91C_TC_BEEVT_SET        , (0x1 << 28) //- (TC) Effect: set
    .equ AT91C_TC_BEEVT_CLEAR      , (0x2 << 28) //- (TC) Effect: clear
    .equ AT91C_TC_BEEVT_TOGGLE     , (0x3 << 28) //- (TC) Effect: toggle
    .equ AT91C_TC_BSWTRG           , (0x3 << 30) //- (TC) Software Trigger Effect on TIOB
    .equ AT91C_TC_BSWTRG_NONE      , (0x0 << 30) //- (TC) Effect: none
    .equ AT91C_TC_BSWTRG_SET       , (0x1 << 30) //- (TC) Effect: set
    .equ AT91C_TC_BSWTRG_CLEAR     , (0x2 << 30) //- (TC) Effect: clear
    .equ AT91C_TC_BSWTRG_TOGGLE    , (0x3 << 30) //- (TC) Effect: toggle
// - -------- TC_SR : (TC Offset: 0x20) TC Channel Status Register -------- 
    .equ AT91C_TC_COVFS            , (0x1 <<  0) //- (TC) Counter Overflow
    .equ AT91C_TC_LOVRS            , (0x1 <<  1) //- (TC) Load Overrun
    .equ AT91C_TC_CPAS             , (0x1 <<  2) //- (TC) RA Compare
    .equ AT91C_TC_CPBS             , (0x1 <<  3) //- (TC) RB Compare
    .equ AT91C_TC_CPCS             , (0x1 <<  4) //- (TC) RC Compare
    .equ AT91C_TC_LDRAS            , (0x1 <<  5) //- (TC) RA Loading
    .equ AT91C_TC_LDRBS            , (0x1 <<  6) //- (TC) RB Loading
    .equ AT91C_TC_ETRGS            , (0x1 <<  7) //- (TC) External Trigger
    .equ AT91C_TC_CLKSTA           , (0x1 << 16) //- (TC) Clock Enabling
    .equ AT91C_TC_MTIOA            , (0x1 << 17) //- (TC) TIOA Mirror
    .equ AT91C_TC_MTIOB            , (0x1 << 18) //- (TC) TIOA Mirror
// - -------- TC_IER : (TC Offset: 0x24) TC Channel Interrupt Enable Register -------- 
// - -------- TC_IDR : (TC Offset: 0x28) TC Channel Interrupt Disable Register -------- 
// - -------- TC_IMR : (TC Offset: 0x2c) TC Channel Interrupt Mask Register -------- 

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Timer Counter Interface
// - *****************************************************************************
// - -------- TCB_BCR : (TCB Offset: 0xc0) TC Block Control Register -------- 
    .equ AT91C_TCB_SYNC            , (0x1 <<  0) //- (TCB) Synchro Command
// - -------- TCB_BMR : (TCB Offset: 0xc4) TC Block Mode Register -------- 
    .equ AT91C_TCB_TC0XC0S         , (0x3 <<  0) //- (TCB) External Clock Signal 0 Selection
    .equ AT91C_TCB_TC0XC0S_TCLK0   , (0x0) //- (TCB) TCLK0 connected to XC0
    .equ AT91C_TCB_TC0XC0S_NONE    , (0x1) //- (TCB) None signal connected to XC0
    .equ AT91C_TCB_TC0XC0S_TIOA1   , (0x2) //- (TCB) TIOA1 connected to XC0
    .equ AT91C_TCB_TC0XC0S_TIOA2   , (0x3) //- (TCB) TIOA2 connected to XC0
    .equ AT91C_TCB_TC1XC1S         , (0x3 <<  2) //- (TCB) External Clock Signal 1 Selection
    .equ AT91C_TCB_TC1XC1S_TCLK1   , (0x0 <<  2) //- (TCB) TCLK1 connected to XC1
    .equ AT91C_TCB_TC1XC1S_NONE    , (0x1 <<  2) //- (TCB) None signal connected to XC1
    .equ AT91C_TCB_TC1XC1S_TIOA0   , (0x2 <<  2) //- (TCB) TIOA0 connected to XC1
    .equ AT91C_TCB_TC1XC1S_TIOA2   , (0x3 <<  2) //- (TCB) TIOA2 connected to XC1
    .equ AT91C_TCB_TC2XC2S         , (0x3 <<  4) //- (TCB) External Clock Signal 2 Selection
    .equ AT91C_TCB_TC2XC2S_TCLK2   , (0x0 <<  4) //- (TCB) TCLK2 connected to XC2
    .equ AT91C_TCB_TC2XC2S_NONE    , (0x1 <<  4) //- (TCB) None signal connected to XC2
    .equ AT91C_TCB_TC2XC2S_TIOA0   , (0x2 <<  4) //- (TCB) TIOA0 connected to XC2
    .equ AT91C_TCB_TC2XC2S_TIOA1   , (0x3 <<  4) //- (TCB) TIOA2 connected to XC2

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR PWMC Channel Interface
// - *****************************************************************************
// - -------- PWMC_CMR : (PWMC_CH Offset: 0x0) PWMC Channel Mode Register -------- 
    .equ AT91C_PWMC_CPRE           , (0xF <<  0) //- (PWMC_CH) Channel Pre-scaler : PWMC_CLKx
    .equ AT91C_PWMC_CPRE_MCK       , (0x0) //- (PWMC_CH) 
    .equ AT91C_PWMC_CPRE_MCKA      , (0xB) //- (PWMC_CH) 
    .equ AT91C_PWMC_CPRE_MCKB      , (0xC) //- (PWMC_CH) 
    .equ AT91C_PWMC_CALG           , (0x1 <<  8) //- (PWMC_CH) Channel Alignment
    .equ AT91C_PWMC_CPOL           , (0x1 <<  9) //- (PWMC_CH) Channel Polarity
    .equ AT91C_PWMC_CPD            , (0x1 << 10) //- (PWMC_CH) Channel Update Period
// - -------- PWMC_CDTYR : (PWMC_CH Offset: 0x4) PWMC Channel Duty Cycle Register -------- 
    .equ AT91C_PWMC_CDTY           , (0x0 <<  0) //- (PWMC_CH) Channel Duty Cycle
// - -------- PWMC_CPRDR : (PWMC_CH Offset: 0x8) PWMC Channel Period Register -------- 
    .equ AT91C_PWMC_CPRD           , (0x0 <<  0) //- (PWMC_CH) Channel Period
// - -------- PWMC_CCNTR : (PWMC_CH Offset: 0xc) PWMC Channel Counter Register -------- 
    .equ AT91C_PWMC_CCNT           , (0x0 <<  0) //- (PWMC_CH) Channel Counter
// - -------- PWMC_CUPDR : (PWMC_CH Offset: 0x10) PWMC Channel Update Register -------- 
    .equ AT91C_PWMC_CUPD           , (0x0 <<  0) //- (PWMC_CH) Channel Update

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR Pulse Width Modulation Controller Interface
// - *****************************************************************************
// - -------- PWMC_MR : (PWMC Offset: 0x0) PWMC Mode Register -------- 
    .equ AT91C_PWMC_DIVA           , (0xFF <<  0) //- (PWMC) CLKA divide factor.
    .equ AT91C_PWMC_PREA           , (0xF <<  8) //- (PWMC) Divider Input Clock Prescaler A
    .equ AT91C_PWMC_PREA_MCK       , (0x0 <<  8) //- (PWMC) 
    .equ AT91C_PWMC_DIVB           , (0xFF << 16) //- (PWMC) CLKB divide factor.
    .equ AT91C_PWMC_PREB           , (0xF << 24) //- (PWMC) Divider Input Clock Prescaler B
    .equ AT91C_PWMC_PREB_MCK       , (0x0 << 24) //- (PWMC) 
// - -------- PWMC_ENA : (PWMC Offset: 0x4) PWMC Enable Register -------- 
    .equ AT91C_PWMC_CHID0          , (0x1 <<  0) //- (PWMC) Channel ID 0
    .equ AT91C_PWMC_CHID1          , (0x1 <<  1) //- (PWMC) Channel ID 1
    .equ AT91C_PWMC_CHID2          , (0x1 <<  2) //- (PWMC) Channel ID 2
    .equ AT91C_PWMC_CHID3          , (0x1 <<  3) //- (PWMC) Channel ID 3
    .equ AT91C_PWMC_CHID4          , (0x1 <<  4) //- (PWMC) Channel ID 4
    .equ AT91C_PWMC_CHID5          , (0x1 <<  5) //- (PWMC) Channel ID 5
    .equ AT91C_PWMC_CHID6          , (0x1 <<  6) //- (PWMC) Channel ID 6
    .equ AT91C_PWMC_CHID7          , (0x1 <<  7) //- (PWMC) Channel ID 7
// - -------- PWMC_DIS : (PWMC Offset: 0x8) PWMC Disable Register -------- 
// - -------- PWMC_SR : (PWMC Offset: 0xc) PWMC Status Register -------- 
// - -------- PWMC_IER : (PWMC Offset: 0x10) PWMC Interrupt Enable Register -------- 
// - -------- PWMC_IDR : (PWMC Offset: 0x14) PWMC Interrupt Disable Register -------- 
// - -------- PWMC_IMR : (PWMC Offset: 0x18) PWMC Interrupt Mask Register -------- 
// - -------- PWMC_ISR : (PWMC Offset: 0x1c) PWMC Interrupt Status Register -------- 

// - *****************************************************************************
// -              SOFTWARE API DEFINITION  FOR USB Device Interface
// - *****************************************************************************
// - -------- UDP_FRM_NUM : (UDP Offset: 0x0) USB Frame Number Register -------- 
    .equ AT91C_UDP_FRM_NUM         , (0x7FF <<  0) //- (UDP) Frame Number as Defined in the Packet Field Formats
    .equ AT91C_UDP_FRM_ERR         , (0x1 << 16) //- (UDP) Frame Error
    .equ AT91C_UDP_FRM_OK          , (0x1 << 17) //- (UDP) Frame OK
// - -------- UDP_GLB_STATE : (UDP Offset: 0x4) USB Global State Register -------- 
    .equ AT91C_UDP_FADDEN          , (0x1 <<  0) //- (UDP) Function Address Enable
    .equ AT91C_UDP_CONFG           , (0x1 <<  1) //- (UDP) Configured
    .equ AT91C_UDP_ESR             , (0x1 <<  2) //- (UDP) Enable Send Resume
    .equ AT91C_UDP_RSMINPR         , (0x1 <<  3) //- (UDP) A Resume Has Been Sent to the Host
    .equ AT91C_UDP_RMWUPE          , (0x1 <<  4) //- (UDP) Remote Wake Up Enable
// - -------- UDP_FADDR : (UDP Offset: 0x8) USB Function Address Register -------- 
    .equ AT91C_UDP_FADD            , (0xFF <<  0) //- (UDP) Function Address Value
    .equ AT91C_UDP_FEN             , (0x1 <<  8) //- (UDP) Function Enable
// - -------- UDP_IER : (UDP Offset: 0x10) USB Interrupt Enable Register -------- 
    .equ AT91C_UDP_EPINT0          , (0x1 <<  0) //- (UDP) Endpoint 0 Interrupt
    .equ AT91C_UDP_EPINT1          , (0x1 <<  1) //- (UDP) Endpoint 0 Interrupt
    .equ AT91C_UDP_EPINT2          , (0x1 <<  2) //- (UDP) Endpoint 2 Interrupt
    .equ AT91C_UDP_EPINT3          , (0x1 <<  3) //- (UDP) Endpoint 3 Interrupt
    .equ AT91C_UDP_EPINT4          , (0x1 <<  4) //- (UDP) Endpoint 4 Interrupt
    .equ AT91C_UDP_EPINT5          , (0x1 <<  5) //- (UDP) Endpoint 5 Interrupt
    .equ AT91C_UDP_EPINT6          , (0x1 <<  6) //- (UDP) Endpoint 6 Interrupt
    .equ AT91C_UDP_EPINT7          , (0x1 <<  7) //- (UDP) Endpoint 7 Interrupt
    .equ AT91C_UDP_RXSUSP          , (0x1 <<  8) //- (UDP) USB Suspend Interrupt
    .equ AT91C_UDP_RXRSM           , (0x1 <<  9) //- (UDP) USB Resume Interrupt
    .equ AT91C_UDP_EXTRSM          , (0x1 << 10) //- (UDP) USB External Resume Interrupt
    .equ AT91C_UDP_SOFINT          , (0x1 << 11) //- (UDP) USB Start Of frame Interrupt
    .equ AT91C_UDP_WAKEUP          , (0x1 << 13) //- (UDP) USB Resume Interrupt
// - -------- UDP_IDR : (UDP Offset: 0x14) USB Interrupt Disable Register -------- 
// - -------- UDP_IMR : (UDP Offset: 0x18) USB Interrupt Mask Register -------- 
// - -------- UDP_ISR : (UDP Offset: 0x1c) USB Interrupt Status Register -------- 
    .equ AT91C_UDP_ENDBUSRES       , (0x1 << 12) //- (UDP) USB End Of Bus Reset Interrupt
// - -------- UDP_ICR : (UDP Offset: 0x20) USB Interrupt Clear Register -------- 
// - -------- UDP_RST_EP : (UDP Offset: 0x28) USB Reset Endpoint Register -------- 
    .equ AT91C_UDP_EP0             , (0x1 <<  0) //- (UDP) Reset Endpoint 0
    .equ AT91C_UDP_EP1             , (0x1 <<  1) //- (UDP) Reset Endpoint 1
    .equ AT91C_UDP_EP2             , (0x1 <<  2) //- (UDP) Reset Endpoint 2
    .equ AT91C_UDP_EP3             , (0x1 <<  3) //- (UDP) Reset Endpoint 3
    .equ AT91C_UDP_EP4             , (0x1 <<  4) //- (UDP) Reset Endpoint 4
    .equ AT91C_UDP_EP5             , (0x1 <<  5) //- (UDP) Reset Endpoint 5
    .equ AT91C_UDP_EP6             , (0x1 <<  6) //- (UDP) Reset Endpoint 6
    .equ AT91C_UDP_EP7             , (0x1 <<  7) //- (UDP) Reset Endpoint 7
// - -------- UDP_CSR : (UDP Offset: 0x30) USB Endpoint Control and Status Register -------- 
    .equ AT91C_UDP_TXCOMP          , (0x1 <<  0) //- (UDP) Generates an IN packet with data previously written in the DPR
    .equ AT91C_UDP_RX_DATA_BK0     , (0x1 <<  1) //- (UDP) Receive Data Bank 0
    .equ AT91C_UDP_RXSETUP         , (0x1 <<  2) //- (UDP) Sends STALL to the Host (Control endpoints)
    .equ AT91C_UDP_ISOERROR        , (0x1 <<  3) //- (UDP) Isochronous error (Isochronous endpoints)
    .equ AT91C_UDP_TXPKTRDY        , (0x1 <<  4) //- (UDP) Transmit Packet Ready
    .equ AT91C_UDP_FORCESTALL      , (0x1 <<  5) //- (UDP) Force Stall (used by Control, Bulk and Isochronous endpoints).
    .equ AT91C_UDP_RX_DATA_BK1     , (0x1 <<  6) //- (UDP) Receive Data Bank 1 (only used by endpoints with ping-pong attributes).
    .equ AT91C_UDP_DIR             , (0x1 <<  7) //- (UDP) Transfer Direction
    .equ AT91C_UDP_EPTYPE          , (0x7 <<  8) //- (UDP) Endpoint type
    .equ AT91C_UDP_EPTYPE_CTRL     , (0x0 <<  8) //- (UDP) Control
    .equ AT91C_UDP_EPTYPE_ISO_OUT  , (0x1 <<  8) //- (UDP) Isochronous OUT
    .equ AT91C_UDP_EPTYPE_BULK_OUT , (0x2 <<  8) //- (UDP) Bulk OUT
    .equ AT91C_UDP_EPTYPE_INT_OUT  , (0x3 <<  8) //- (UDP) Interrupt OUT
    .equ AT91C_UDP_EPTYPE_ISO_IN   , (0x5 <<  8) //- (UDP) Isochronous IN
    .equ AT91C_UDP_EPTYPE_BULK_IN  , (0x6 <<  8) //- (UDP) Bulk IN
    .equ AT91C_UDP_EPTYPE_INT_IN   , (0x7 <<  8) //- (UDP) Interrupt IN
    .equ AT91C_UDP_DTGLE           , (0x1 << 11) //- (UDP) Data Toggle
    .equ AT91C_UDP_EPEDS           , (0x1 << 15) //- (UDP) Endpoint Enable Disable
    .equ AT91C_UDP_RXBYTECNT       , (0x7FF << 16) //- (UDP) Number Of Bytes Available in the FIFO
// - -------- UDP_TXVC : (UDP Offset: 0x74) Transceiver Control Register -------- 
    .equ AT91C_UDP_TXVDIS          , (0x1 <<  8) //- (UDP) 
    .equ AT91C_UDP_PUON            , (0x1 <<  9) //- (UDP) Pull-up ON

// - *****************************************************************************
// -               REGISTER ADDRESS DEFINITION FOR     .equ AT91SAM7S64
// - *****************************************************************************
// - ========== Register definition for SYS peripheral ========== 
// - ========== Register definition for AIC peripheral ========== 
    .equ AT91C_AIC_IVR             , (0xFFFFF100) //- (AIC) IRQ Vector Register
    .equ AT91C_AIC_SMR             , (0xFFFFF000) //- (AIC) Source Mode Register
    .equ AT91C_AIC_FVR             , (0xFFFFF104) //- (AIC) FIQ Vector Register
    .equ AT91C_AIC_DCR             , (0xFFFFF138) //- (AIC) Debug Control Register (Protect)
    .equ AT91C_AIC_EOICR           , (0xFFFFF130) //- (AIC) End of Interrupt Command Register
    .equ AT91C_AIC_SVR             , (0xFFFFF080) //- (AIC) Source Vector Register
    .equ AT91C_AIC_FFSR            , (0xFFFFF148) //- (AIC) Fast Forcing Status Register
    .equ AT91C_AIC_ICCR            , (0xFFFFF128) //- (AIC) Interrupt Clear Command Register
    .equ AT91C_AIC_ISR             , (0xFFFFF108) //- (AIC) Interrupt Status Register
    .equ AT91C_AIC_IMR             , (0xFFFFF110) //- (AIC) Interrupt Mask Register
    .equ AT91C_AIC_IPR             , (0xFFFFF10C) //- (AIC) Interrupt Pending Register
    .equ AT91C_AIC_FFER            , (0xFFFFF140) //- (AIC) Fast Forcing Enable Register
    .equ AT91C_AIC_IECR            , (0xFFFFF120) //- (AIC) Interrupt Enable Command Register
    .equ AT91C_AIC_ISCR            , (0xFFFFF12C) //- (AIC) Interrupt Set Command Register
    .equ AT91C_AIC_FFDR            , (0xFFFFF144) //- (AIC) Fast Forcing Disable Register
    .equ AT91C_AIC_CISR            , (0xFFFFF114) //- (AIC) Core Interrupt Status Register
    .equ AT91C_AIC_IDCR            , (0xFFFFF124) //- (AIC) Interrupt Disable Command Register
    .equ AT91C_AIC_SPU             , (0xFFFFF134) //- (AIC) Spurious Vector Register
// - ========== Register definition for PDC_DBGU peripheral ========== 
    .equ AT91C_DBGU_TCR            , (0xFFFFF30C) //- (PDC_DBGU) Transmit Counter Register
    .equ AT91C_DBGU_RNPR           , (0xFFFFF310) //- (PDC_DBGU) Receive Next Pointer Register
    .equ AT91C_DBGU_TNPR           , (0xFFFFF318) //- (PDC_DBGU) Transmit Next Pointer Register
    .equ AT91C_DBGU_TPR            , (0xFFFFF308) //- (PDC_DBGU) Transmit Pointer Register
    .equ AT91C_DBGU_RPR            , (0xFFFFF300) //- (PDC_DBGU) Receive Pointer Register
    .equ AT91C_DBGU_RCR            , (0xFFFFF304) //- (PDC_DBGU) Receive Counter Register
    .equ AT91C_DBGU_RNCR           , (0xFFFFF314) //- (PDC_DBGU) Receive Next Counter Register
    .equ AT91C_DBGU_PTCR           , (0xFFFFF320) //- (PDC_DBGU) PDC Transfer Control Register
    .equ AT91C_DBGU_PTSR           , (0xFFFFF324) //- (PDC_DBGU) PDC Transfer Status Register
    .equ AT91C_DBGU_TNCR           , (0xFFFFF31C) //- (PDC_DBGU) Transmit Next Counter Register
// - ========== Register definition for DBGU peripheral ========== 
    .equ AT91C_DBGU_EXID           , (0xFFFFF244) //- (DBGU) Chip ID Extension Register
    .equ AT91C_DBGU_BRGR           , (0xFFFFF220) //- (DBGU) Baud Rate Generator Register
    .equ AT91C_DBGU_IDR            , (0xFFFFF20C) //- (DBGU) Interrupt Disable Register
    .equ AT91C_DBGU_CSR            , (0xFFFFF214) //- (DBGU) Channel Status Register
    .equ AT91C_DBGU_CIDR           , (0xFFFFF240) //- (DBGU) Chip ID Register
    .equ AT91C_DBGU_MR             , (0xFFFFF204) //- (DBGU) Mode Register
    .equ AT91C_DBGU_IMR            , (0xFFFFF210) //- (DBGU) Interrupt Mask Register
    .equ AT91C_DBGU_CR             , (0xFFFFF200) //- (DBGU) Control Register
    .equ AT91C_DBGU_FNTR           , (0xFFFFF248) //- (DBGU) Force NTRST Register
    .equ AT91C_DBGU_THR            , (0xFFFFF21C) //- (DBGU) Transmitter Holding Register
    .equ AT91C_DBGU_RHR            , (0xFFFFF218) //- (DBGU) Receiver Holding Register
    .equ AT91C_DBGU_IER            , (0xFFFFF208) //- (DBGU) Interrupt Enable Register
// - ========== Register definition for PIOA peripheral ========== 
    .equ AT91C_PIOA_ODR            , (0xFFFFF414) //- (PIOA) Output Disable Registerr
    .equ AT91C_PIOA_SODR           , (0xFFFFF430) //- (PIOA) Set Output Data Register
    .equ AT91C_PIOA_ISR            , (0xFFFFF44C) //- (PIOA) Interrupt Status Register
    .equ AT91C_PIOA_ABSR           , (0xFFFFF478) //- (PIOA) AB Select Status Register
    .equ AT91C_PIOA_IER            , (0xFFFFF440) //- (PIOA) Interrupt Enable Register
    .equ AT91C_PIOA_PPUDR          , (0xFFFFF460) //- (PIOA) Pull-up Disable Register
    .equ AT91C_PIOA_IMR            , (0xFFFFF448) //- (PIOA) Interrupt Mask Register
    .equ AT91C_PIOA_PER            , (0xFFFFF400) //- (PIOA) PIO Enable Register
    .equ AT91C_PIOA_IFDR           , (0xFFFFF424) //- (PIOA) Input Filter Disable Register
    .equ AT91C_PIOA_OWDR           , (0xFFFFF4A4) //- (PIOA) Output Write Disable Register
    .equ AT91C_PIOA_MDSR           , (0xFFFFF458) //- (PIOA) Multi-driver Status Register
    .equ AT91C_PIOA_IDR            , (0xFFFFF444) //- (PIOA) Interrupt Disable Register
    .equ AT91C_PIOA_ODSR           , (0xFFFFF438) //- (PIOA) Output Data Status Register
    .equ AT91C_PIOA_PPUSR          , (0xFFFFF468) //- (PIOA) Pull-up Status Register
    .equ AT91C_PIOA_OWSR           , (0xFFFFF4A8) //- (PIOA) Output Write Status Register
    .equ AT91C_PIOA_BSR            , (0xFFFFF474) //- (PIOA) Select B Register
    .equ AT91C_PIOA_OWER           , (0xFFFFF4A0) //- (PIOA) Output Write Enable Register
    .equ AT91C_PIOA_IFER           , (0xFFFFF420) //- (PIOA) Input Filter Enable Register
    .equ AT91C_PIOA_PDSR           , (0xFFFFF43C) //- (PIOA) Pin Data Status Register
    .equ AT91C_PIOA_PPUER          , (0xFFFFF464) //- (PIOA) Pull-up Enable Register
    .equ AT91C_PIOA_OSR            , (0xFFFFF418) //- (PIOA) Output Status Register
    .equ AT91C_PIOA_ASR            , (0xFFFFF470) //- (PIOA) Select A Register
    .equ AT91C_PIOA_MDDR           , (0xFFFFF454) //- (PIOA) Multi-driver Disable Register
    .equ AT91C_PIOA_CODR           , (0xFFFFF434) //- (PIOA) Clear Output Data Register
    .equ AT91C_PIOA_MDER           , (0xFFFFF450) //- (PIOA) Multi-driver Enable Register
    .equ AT91C_PIOA_PDR            , (0xFFFFF404) //- (PIOA) PIO Disable Register
    .equ AT91C_PIOA_IFSR           , (0xFFFFF428) //- (PIOA) Input Filter Status Register
    .equ AT91C_PIOA_OER            , (0xFFFFF410) //- (PIOA) Output Enable Register
    .equ AT91C_PIOA_PSR            , (0xFFFFF408) //- (PIOA) PIO Status Register
// - ========== Register definition for CKGR peripheral ========== 
    .equ AT91C_CKGR_MOR            , (0xFFFFFC20) //- (CKGR) Main Oscillator Register
    .equ AT91C_CKGR_PLLR           , (0xFFFFFC2C) //- (CKGR) PLL Register
    .equ AT91C_CKGR_MCFR           , (0xFFFFFC24) //- (CKGR) Main Clock  Fr,ency Register
// - ========== Register definition for PMC peripheral ========== 
    .equ AT91C_PMC_IDR             , (0xFFFFFC64) //- (PMC) Interrupt Disable Register
    .equ AT91C_PMC_MOR             , (0xFFFFFC20) //- (PMC) Main Oscillator Register
    .equ AT91C_PMC_PLLR            , (0xFFFFFC2C) //- (PMC) PLL Register
    .equ AT91C_PMC_PCER            , (0xFFFFFC10) //- (PMC) Peripheral Clock Enable Register
    .equ AT91C_PMC_PCKR            , (0xFFFFFC40) //- (PMC) Programmable Clock Register
    .equ AT91C_PMC_MCKR            , (0xFFFFFC30) //- (PMC) Master Clock Register
    .equ AT91C_PMC_SCDR            , (0xFFFFFC04) //- (PMC) System Clock Disable Register
    .equ AT91C_PMC_PCDR            , (0xFFFFFC14) //- (PMC) Peripheral Clock Disable Register
    .equ AT91C_PMC_SCSR            , (0xFFFFFC08) //- (PMC) System Clock Status Register
    .equ AT91C_PMC_PCSR            , (0xFFFFFC18) //- (PMC) Peripheral Clock Status Register
    .equ AT91C_PMC_MCFR            , (0xFFFFFC24) //- (PMC) Main Clock  Fr,ency Register
    .equ AT91C_PMC_SCER            , (0xFFFFFC00) //- (PMC) System Clock Enable Register
    .equ AT91C_PMC_IMR             , (0xFFFFFC6C) //- (PMC) Interrupt Mask Register
    .equ AT91C_PMC_IER             , (0xFFFFFC60) //- (PMC) Interrupt Enable Register
    .equ AT91C_PMC_SR              , (0xFFFFFC68) //- (PMC) Status Register
// - ========== Register definition for RSTC peripheral ========== 
    .equ AT91C_RSTC_RCR            , (0xFFFFFD00) //- (RSTC) Reset Control Register
    .equ AT91C_RSTC_RMR            , (0xFFFFFD08) //- (RSTC) Reset Mode Register
    .equ AT91C_RSTC_RSR            , (0xFFFFFD04) //- (RSTC) Reset Status Register
// - ========== Register definition for RTTC peripheral ========== 
    .equ AT91C_RTTC_RTSR           , (0xFFFFFD2C) //- (RTTC) Real-time Status Register
    .equ AT91C_RTTC_RTMR           , (0xFFFFFD20) //- (RTTC) Real-time Mode Register
    .equ AT91C_RTTC_RTVR           , (0xFFFFFD28) //- (RTTC) Real-time Value Register
    .equ AT91C_RTTC_RTAR           , (0xFFFFFD24) //- (RTTC) Real-time Alarm Register
// - ========== Register definition for PITC peripheral ========== 
    .equ AT91C_PITC_PIVR           , (0xFFFFFD38) //- (PITC) Period Interval Value Register
    .equ AT91C_PITC_PISR           , (0xFFFFFD34) //- (PITC) Period Interval Status Register
    .equ AT91C_PITC_PIIR           , (0xFFFFFD3C) //- (PITC) Period Interval Image Register
    .equ AT91C_PITC_PIMR           , (0xFFFFFD30) //- (PITC) Period Interval Mode Register
// - ========== Register definition for WDTC peripheral ========== 
    .equ AT91C_WDTC_WDCR           , (0xFFFFFD40) //- (WDTC) Watchdog Control Register
    .equ AT91C_WDTC_WDSR           , (0xFFFFFD48) //- (WDTC) Watchdog Status Register
    .equ AT91C_WDTC_WDMR           , (0xFFFFFD44) //- (WDTC) Watchdog Mode Register
// - ========== Register definition for VREG peripheral ========== 
    .equ AT91C_VREG_MR             , (0xFFFFFD60) //- (VREG) Voltage Regulator Mode Register
// - ========== Register definition for MC peripheral ========== 
    .equ AT91C_MC_ASR              , (0xFFFFFF04) //- (MC) MC Abort Status Register
    .equ AT91C_MC_RCR              , (0xFFFFFF00) //- (MC) MC Remap Control Register
    .equ AT91C_MC_FCR              , (0xFFFFFF64) //- (MC) MC Flash Command Register
    .equ AT91C_MC_AASR             , (0xFFFFFF08) //- (MC) MC Abort Address Status Register
    .equ AT91C_MC_FSR              , (0xFFFFFF68) //- (MC) MC Flash Status Register
    .equ AT91C_MC_FMR              , (0xFFFFFF60) //- (MC) MC Flash Mode Register
// - ========== Register definition for PDC_SPI peripheral ========== 
    .equ AT91C_SPI_PTCR            , (0xFFFE0120) //- (PDC_SPI) PDC Transfer Control Register
    .equ AT91C_SPI_TPR             , (0xFFFE0108) //- (PDC_SPI) Transmit Pointer Register
    .equ AT91C_SPI_TCR             , (0xFFFE010C) //- (PDC_SPI) Transmit Counter Register
    .equ AT91C_SPI_RCR             , (0xFFFE0104) //- (PDC_SPI) Receive Counter Register
    .equ AT91C_SPI_PTSR            , (0xFFFE0124) //- (PDC_SPI) PDC Transfer Status Register
    .equ AT91C_SPI_RNPR            , (0xFFFE0110) //- (PDC_SPI) Receive Next Pointer Register
    .equ AT91C_SPI_RPR             , (0xFFFE0100) //- (PDC_SPI) Receive Pointer Register
    .equ AT91C_SPI_TNCR            , (0xFFFE011C) //- (PDC_SPI) Transmit Next Counter Register
    .equ AT91C_SPI_RNCR            , (0xFFFE0114) //- (PDC_SPI) Receive Next Counter Register
    .equ AT91C_SPI_TNPR            , (0xFFFE0118) //- (PDC_SPI) Transmit Next Pointer Register
// - ========== Register definition for SPI peripheral ========== 
    .equ AT91C_SPI_IER             , (0xFFFE0014) //- (SPI) Interrupt Enable Register
    .equ AT91C_SPI_SR              , (0xFFFE0010) //- (SPI) Status Register
    .equ AT91C_SPI_IDR             , (0xFFFE0018) //- (SPI) Interrupt Disable Register
    .equ AT91C_SPI_CR              , (0xFFFE0000) //- (SPI) Control Register
    .equ AT91C_SPI_MR              , (0xFFFE0004) //- (SPI) Mode Register
    .equ AT91C_SPI_IMR             , (0xFFFE001C) //- (SPI) Interrupt Mask Register
    .equ AT91C_SPI_TDR             , (0xFFFE000C) //- (SPI) Transmit Data Register
    .equ AT91C_SPI_RDR             , (0xFFFE0008) //- (SPI) Receive Data Register
    .equ AT91C_SPI_CSR             , (0xFFFE0030) //- (SPI) Chip Select Register
// - ========== Register definition for PDC_ADC peripheral ========== 
    .equ AT91C_ADC_PTSR            , (0xFFFD8124) //- (PDC_ADC) PDC Transfer Status Register
    .equ AT91C_ADC_PTCR            , (0xFFFD8120) //- (PDC_ADC) PDC Transfer Control Register
    .equ AT91C_ADC_TNPR            , (0xFFFD8118) //- (PDC_ADC) Transmit Next Pointer Register
    .equ AT91C_ADC_TNCR            , (0xFFFD811C) //- (PDC_ADC) Transmit Next Counter Register
    .equ AT91C_ADC_RNPR            , (0xFFFD8110) //- (PDC_ADC) Receive Next Pointer Register
    .equ AT91C_ADC_RNCR            , (0xFFFD8114) //- (PDC_ADC) Receive Next Counter Register
    .equ AT91C_ADC_RPR             , (0xFFFD8100) //- (PDC_ADC) Receive Pointer Register
    .equ AT91C_ADC_TCR             , (0xFFFD810C) //- (PDC_ADC) Transmit Counter Register
    .equ AT91C_ADC_TPR             , (0xFFFD8108) //- (PDC_ADC) Transmit Pointer Register
    .equ AT91C_ADC_RCR             , (0xFFFD8104) //- (PDC_ADC) Receive Counter Register
// - ========== Register definition for ADC peripheral ========== 
    .equ AT91C_ADC_CDR2            , (0xFFFD8038) //- (ADC) ADC Channel Data Register 2
    .equ AT91C_ADC_CDR3            , (0xFFFD803C) //- (ADC) ADC Channel Data Register 3
    .equ AT91C_ADC_CDR0            , (0xFFFD8030) //- (ADC) ADC Channel Data Register 0
    .equ AT91C_ADC_CDR5            , (0xFFFD8044) //- (ADC) ADC Channel Data Register 5
    .equ AT91C_ADC_CHDR            , (0xFFFD8014) //- (ADC) ADC Channel Disable Register
    .equ AT91C_ADC_SR              , (0xFFFD801C) //- (ADC) ADC Status Register
    .equ AT91C_ADC_CDR4            , (0xFFFD8040) //- (ADC) ADC Channel Data Register 4
    .equ AT91C_ADC_CDR1            , (0xFFFD8034) //- (ADC) ADC Channel Data Register 1
    .equ AT91C_ADC_LCDR            , (0xFFFD8020) //- (ADC) ADC Last Converted Data Register
    .equ AT91C_ADC_IDR             , (0xFFFD8028) //- (ADC) ADC Interrupt Disable Register
    .equ AT91C_ADC_CR              , (0xFFFD8000) //- (ADC) ADC Control Register
    .equ AT91C_ADC_CDR7            , (0xFFFD804C) //- (ADC) ADC Channel Data Register 7
    .equ AT91C_ADC_CDR6            , (0xFFFD8048) //- (ADC) ADC Channel Data Register 6
    .equ AT91C_ADC_IER             , (0xFFFD8024) //- (ADC) ADC Interrupt Enable Register
    .equ AT91C_ADC_CHER            , (0xFFFD8010) //- (ADC) ADC Channel Enable Register
    .equ AT91C_ADC_CHSR            , (0xFFFD8018) //- (ADC) ADC Channel Status Register
    .equ AT91C_ADC_MR              , (0xFFFD8004) //- (ADC) ADC Mode Register
    .equ AT91C_ADC_IMR             , (0xFFFD802C) //- (ADC) ADC Interrupt Mask Register
// - ========== Register definition for PDC_SSC peripheral ========== 
    .equ AT91C_SSC_TNCR            , (0xFFFD411C) //- (PDC_SSC) Transmit Next Counter Register
    .equ AT91C_SSC_RPR             , (0xFFFD4100) //- (PDC_SSC) Receive Pointer Register
    .equ AT91C_SSC_RNCR            , (0xFFFD4114) //- (PDC_SSC) Receive Next Counter Register
    .equ AT91C_SSC_TPR             , (0xFFFD4108) //- (PDC_SSC) Transmit Pointer Register
    .equ AT91C_SSC_PTCR            , (0xFFFD4120) //- (PDC_SSC) PDC Transfer Control Register
    .equ AT91C_SSC_TCR             , (0xFFFD410C) //- (PDC_SSC) Transmit Counter Register
    .equ AT91C_SSC_RCR             , (0xFFFD4104) //- (PDC_SSC) Receive Counter Register
    .equ AT91C_SSC_RNPR            , (0xFFFD4110) //- (PDC_SSC) Receive Next Pointer Register
    .equ AT91C_SSC_TNPR            , (0xFFFD4118) //- (PDC_SSC) Transmit Next Pointer Register
    .equ AT91C_SSC_PTSR            , (0xFFFD4124) //- (PDC_SSC) PDC Transfer Status Register
// - ========== Register definition for SSC peripheral ========== 
    .equ AT91C_SSC_RHR             , (0xFFFD4020) //- (SSC) Receive Holding Register
    .equ AT91C_SSC_RSHR            , (0xFFFD4030) //- (SSC) Receive Sync Holding Register
    .equ AT91C_SSC_TFMR            , (0xFFFD401C) //- (SSC) Transmit Frame Mode Register
    .equ AT91C_SSC_IDR             , (0xFFFD4048) //- (SSC) Interrupt Disable Register
    .equ AT91C_SSC_THR             , (0xFFFD4024) //- (SSC) Transmit Holding Register
    .equ AT91C_SSC_RCMR            , (0xFFFD4010) //- (SSC) Receive Clock ModeRegister
    .equ AT91C_SSC_IER             , (0xFFFD4044) //- (SSC) Interrupt Enable Register
    .equ AT91C_SSC_TSHR            , (0xFFFD4034) //- (SSC) Transmit Sync Holding Register
    .equ AT91C_SSC_SR              , (0xFFFD4040) //- (SSC) Status Register
    .equ AT91C_SSC_CMR             , (0xFFFD4004) //- (SSC) Clock Mode Register
    .equ AT91C_SSC_TCMR            , (0xFFFD4018) //- (SSC) Transmit Clock Mode Register
    .equ AT91C_SSC_CR              , (0xFFFD4000) //- (SSC) Control Register
    .equ AT91C_SSC_IMR             , (0xFFFD404C) //- (SSC) Interrupt Mask Register
    .equ AT91C_SSC_RFMR            , (0xFFFD4014) //- (SSC) Receive Frame Mode Register
// - ========== Register definition for PDC_US1 peripheral ========== 
    .equ AT91C_US1_RNCR            , (0xFFFC4114) //- (PDC_US1) Receive Next Counter Register
    .equ AT91C_US1_PTCR            , (0xFFFC4120) //- (PDC_US1) PDC Transfer Control Register
    .equ AT91C_US1_TCR             , (0xFFFC410C) //- (PDC_US1) Transmit Counter Register
    .equ AT91C_US1_PTSR            , (0xFFFC4124) //- (PDC_US1) PDC Transfer Status Register
    .equ AT91C_US1_TNPR            , (0xFFFC4118) //- (PDC_US1) Transmit Next Pointer Register
    .equ AT91C_US1_RCR             , (0xFFFC4104) //- (PDC_US1) Receive Counter Register
    .equ AT91C_US1_RNPR            , (0xFFFC4110) //- (PDC_US1) Receive Next Pointer Register
    .equ AT91C_US1_RPR             , (0xFFFC4100) //- (PDC_US1) Receive Pointer Register
    .equ AT91C_US1_TNCR            , (0xFFFC411C) //- (PDC_US1) Transmit Next Counter Register
    .equ AT91C_US1_TPR             , (0xFFFC4108) //- (PDC_US1) Transmit Pointer Register
// - ========== Register definition for US1 peripheral ========== 
    .equ AT91C_US1_IF              , (0xFFFC404C) //- (US1) IRDA_FILTER Register
    .equ AT91C_US1_NER             , (0xFFFC4044) //- (US1) Nb Errors Register
    .equ AT91C_US1_RTOR            , (0xFFFC4024) //- (US1) Receiver Time-out Register
    .equ AT91C_US1_CSR             , (0xFFFC4014) //- (US1) Channel Status Register
    .equ AT91C_US1_IDR             , (0xFFFC400C) //- (US1) Interrupt Disable Register
    .equ AT91C_US1_IER             , (0xFFFC4008) //- (US1) Interrupt Enable Register
    .equ AT91C_US1_THR             , (0xFFFC401C) //- (US1) Transmitter Holding Register
    .equ AT91C_US1_TTGR            , (0xFFFC4028) //- (US1) Transmitter Time-guard Register
    .equ AT91C_US1_RHR             , (0xFFFC4018) //- (US1) Receiver Holding Register
    .equ AT91C_US1_BRGR            , (0xFFFC4020) //- (US1) Baud Rate Generator Register
    .equ AT91C_US1_IMR             , (0xFFFC4010) //- (US1) Interrupt Mask Register
    .equ AT91C_US1_FIDI            , (0xFFFC4040) //- (US1) FI_DI_Ratio Register
    .equ AT91C_US1_CR              , (0xFFFC4000) //- (US1) Control Register
    .equ AT91C_US1_MR              , (0xFFFC4004) //- (US1) Mode Register
// - ========== Register definition for PDC_US0 peripheral ========== 
    .equ AT91C_US0_TNPR            , (0xFFFC0118) //- (PDC_US0) Transmit Next Pointer Register
    .equ AT91C_US0_RNPR            , (0xFFFC0110) //- (PDC_US0) Receive Next Pointer Register
    .equ AT91C_US0_TCR             , (0xFFFC010C) //- (PDC_US0) Transmit Counter Register
    .equ AT91C_US0_PTCR            , (0xFFFC0120) //- (PDC_US0) PDC Transfer Control Register
    .equ AT91C_US0_PTSR            , (0xFFFC0124) //- (PDC_US0) PDC Transfer Status Register
    .equ AT91C_US0_TNCR            , (0xFFFC011C) //- (PDC_US0) Transmit Next Counter Register
    .equ AT91C_US0_TPR             , (0xFFFC0108) //- (PDC_US0) Transmit Pointer Register
    .equ AT91C_US0_RCR             , (0xFFFC0104) //- (PDC_US0) Receive Counter Register
    .equ AT91C_US0_RPR             , (0xFFFC0100) //- (PDC_US0) Receive Pointer Register
    .equ AT91C_US0_RNCR            , (0xFFFC0114) //- (PDC_US0) Receive Next Counter Register
// - ========== Register definition for US0 peripheral ========== 
    .equ AT91C_US0_BRGR            , (0xFFFC0020) //- (US0) Baud Rate Generator Register
    .equ AT91C_US0_NER             , (0xFFFC0044) //- (US0) Nb Errors Register
    .equ AT91C_US0_CR              , (0xFFFC0000) //- (US0) Control Register
    .equ AT91C_US0_IMR             , (0xFFFC0010) //- (US0) Interrupt Mask Register
    .equ AT91C_US0_FIDI            , (0xFFFC0040) //- (US0) FI_DI_Ratio Register
    .equ AT91C_US0_TTGR            , (0xFFFC0028) //- (US0) Transmitter Time-guard Register
    .equ AT91C_US0_MR              , (0xFFFC0004) //- (US0) Mode Register
    .equ AT91C_US0_RTOR            , (0xFFFC0024) //- (US0) Receiver Time-out Register
    .equ AT91C_US0_CSR             , (0xFFFC0014) //- (US0) Channel Status Register
    .equ AT91C_US0_RHR             , (0xFFFC0018) //- (US0) Receiver Holding Register
    .equ AT91C_US0_IDR             , (0xFFFC000C) //- (US0) Interrupt Disable Register
    .equ AT91C_US0_THR             , (0xFFFC001C) //- (US0) Transmitter Holding Register
    .equ AT91C_US0_IF              , (0xFFFC004C) //- (US0) IRDA_FILTER Register
    .equ AT91C_US0_IER             , (0xFFFC0008) //- (US0) Interrupt Enable Register
// - ========== Register definition for TWI peripheral ========== 
    .equ AT91C_TWI_IER             , (0xFFFB8024) //- (TWI) Interrupt Enable Register
    .equ AT91C_TWI_CR              , (0xFFFB8000) //- (TWI) Control Register
    .equ AT91C_TWI_SR              , (0xFFFB8020) //- (TWI) Status Register
    .equ AT91C_TWI_IMR             , (0xFFFB802C) //- (TWI) Interrupt Mask Register
    .equ AT91C_TWI_THR             , (0xFFFB8034) //- (TWI) Transmit Holding Register
    .equ AT91C_TWI_IDR             , (0xFFFB8028) //- (TWI) Interrupt Disable Register
    .equ AT91C_TWI_IADR            , (0xFFFB800C) //- (TWI) Internal Address Register
    .equ AT91C_TWI_MMR             , (0xFFFB8004) //- (TWI) Master Mode Register
    .equ AT91C_TWI_CWGR            , (0xFFFB8010) //- (TWI) Clock Waveform Generator Register
    .equ AT91C_TWI_RHR             , (0xFFFB8030) //- (TWI) Receive Holding Register
// - ========== Register definition for TC0 peripheral ========== 
    .equ AT91C_TC0_SR              , (0xFFFA0020) //- (TC0) Status Register
    .equ AT91C_TC0_RC              , (0xFFFA001C) //- (TC0) Register C
    .equ AT91C_TC0_RB              , (0xFFFA0018) //- (TC0) Register B
    .equ AT91C_TC0_CCR             , (0xFFFA0000) //- (TC0) Channel Control Register
    .equ AT91C_TC0_CMR             , (0xFFFA0004) //- (TC0) Channel Mode Register (Capture Mode / Waveform Mode)
    .equ AT91C_TC0_IER             , (0xFFFA0024) //- (TC0) Interrupt Enable Register
    .equ AT91C_TC0_RA              , (0xFFFA0014) //- (TC0) Register A
    .equ AT91C_TC0_IDR             , (0xFFFA0028) //- (TC0) Interrupt Disable Register
    .equ AT91C_TC0_CV              , (0xFFFA0010) //- (TC0) Counter Value
    .equ AT91C_TC0_IMR             , (0xFFFA002C) //- (TC0) Interrupt Mask Register
// - ========== Register definition for TC1 peripheral ========== 
    .equ AT91C_TC1_RB              , (0xFFFA0058) //- (TC1) Register B
    .equ AT91C_TC1_CCR             , (0xFFFA0040) //- (TC1) Channel Control Register
    .equ AT91C_TC1_IER             , (0xFFFA0064) //- (TC1) Interrupt Enable Register
    .equ AT91C_TC1_IDR             , (0xFFFA0068) //- (TC1) Interrupt Disable Register
    .equ AT91C_TC1_SR              , (0xFFFA0060) //- (TC1) Status Register
    .equ AT91C_TC1_CMR             , (0xFFFA0044) //- (TC1) Channel Mode Register (Capture Mode / Waveform Mode)
    .equ AT91C_TC1_RA              , (0xFFFA0054) //- (TC1) Register A
    .equ AT91C_TC1_RC              , (0xFFFA005C) //- (TC1) Register C
    .equ AT91C_TC1_IMR             , (0xFFFA006C) //- (TC1) Interrupt Mask Register
    .equ AT91C_TC1_CV              , (0xFFFA0050) //- (TC1) Counter Value
// - ========== Register definition for TC2 peripheral ========== 
    .equ AT91C_TC2_CMR             , (0xFFFA0084) //- (TC2) Channel Mode Register (Capture Mode / Waveform Mode)
    .equ AT91C_TC2_CCR             , (0xFFFA0080) //- (TC2) Channel Control Register
    .equ AT91C_TC2_CV              , (0xFFFA0090) //- (TC2) Counter Value
    .equ AT91C_TC2_RA              , (0xFFFA0094) //- (TC2) Register A
    .equ AT91C_TC2_RB              , (0xFFFA0098) //- (TC2) Register B
    .equ AT91C_TC2_IDR             , (0xFFFA00A8) //- (TC2) Interrupt Disable Register
    .equ AT91C_TC2_IMR             , (0xFFFA00AC) //- (TC2) Interrupt Mask Register
    .equ AT91C_TC2_RC              , (0xFFFA009C) //- (TC2) Register C
    .equ AT91C_TC2_IER             , (0xFFFA00A4) //- (TC2) Interrupt Enable Register
    .equ AT91C_TC2_SR              , (0xFFFA00A0) //- (TC2) Status Register
// - ========== Register definition for TCB peripheral ========== 
    .equ AT91C_TCB_BMR             , (0xFFFA00C4) //- (TCB) TC Block Mode Register
    .equ AT91C_TCB_BCR             , (0xFFFA00C0) //- (TCB) TC Block Control Register
// - ========== Register definition for PWMC_CH3 peripheral ========== 
    .equ AT91C_PWMC_CH3_CUPDR      , (0xFFFCC270) //- (PWMC_CH3) Channel Update Register
    .equ AT91C_PWMC_CH3_Reserved   , (0xFFFCC274) //- (PWMC_CH3) Reserved
    .equ AT91C_PWMC_CH3_CPRDR      , (0xFFFCC268) //- (PWMC_CH3) Channel Period Register
    .equ AT91C_PWMC_CH3_CDTYR      , (0xFFFCC264) //- (PWMC_CH3) Channel Duty Cycle Register
    .equ AT91C_PWMC_CH3_CCNTR      , (0xFFFCC26C) //- (PWMC_CH3) Channel Counter Register
    .equ AT91C_PWMC_CH3_CMR        , (0xFFFCC260) //- (PWMC_CH3) Channel Mode Register
// - ========== Register definition for PWMC_CH2 peripheral ========== 
    .equ AT91C_PWMC_CH2_Reserved   , (0xFFFCC254) //- (PWMC_CH2) Reserved
    .equ AT91C_PWMC_CH2_CMR        , (0xFFFCC240) //- (PWMC_CH2) Channel Mode Register
    .equ AT91C_PWMC_CH2_CCNTR      , (0xFFFCC24C) //- (PWMC_CH2) Channel Counter Register
    .equ AT91C_PWMC_CH2_CPRDR      , (0xFFFCC248) //- (PWMC_CH2) Channel Period Register
    .equ AT91C_PWMC_CH2_CUPDR      , (0xFFFCC250) //- (PWMC_CH2) Channel Update Register
    .equ AT91C_PWMC_CH2_CDTYR      , (0xFFFCC244) //- (PWMC_CH2) Channel Duty Cycle Register
// - ========== Register definition for PWMC_CH1 peripheral ========== 
    .equ AT91C_PWMC_CH1_Reserved   , (0xFFFCC234) //- (PWMC_CH1) Reserved
    .equ AT91C_PWMC_CH1_CUPDR      , (0xFFFCC230) //- (PWMC_CH1) Channel Update Register
    .equ AT91C_PWMC_CH1_CPRDR      , (0xFFFCC228) //- (PWMC_CH1) Channel Period Register
    .equ AT91C_PWMC_CH1_CCNTR      , (0xFFFCC22C) //- (PWMC_CH1) Channel Counter Register
    .equ AT91C_PWMC_CH1_CDTYR      , (0xFFFCC224) //- (PWMC_CH1) Channel Duty Cycle Register
    .equ AT91C_PWMC_CH1_CMR        , (0xFFFCC220) //- (PWMC_CH1) Channel Mode Register
// - ========== Register definition for PWMC_CH0 peripheral ========== 
    .equ AT91C_PWMC_CH0_Reserved   , (0xFFFCC214) //- (PWMC_CH0) Reserved
    .equ AT91C_PWMC_CH0_CPRDR      , (0xFFFCC208) //- (PWMC_CH0) Channel Period Register
    .equ AT91C_PWMC_CH0_CDTYR      , (0xFFFCC204) //- (PWMC_CH0) Channel Duty Cycle Register
    .equ AT91C_PWMC_CH0_CMR        , (0xFFFCC200) //- (PWMC_CH0) Channel Mode Register
    .equ AT91C_PWMC_CH0_CUPDR      , (0xFFFCC210) //- (PWMC_CH0) Channel Update Register
    .equ AT91C_PWMC_CH0_CCNTR      , (0xFFFCC20C) //- (PWMC_CH0) Channel Counter Register
// - ========== Register definition for PWMC peripheral ========== 
    .equ AT91C_PWMC_IDR            , (0xFFFCC014) //- (PWMC) PWMC Interrupt Disable Register
    .equ AT91C_PWMC_DIS            , (0xFFFCC008) //- (PWMC) PWMC Disable Register
    .equ AT91C_PWMC_IER            , (0xFFFCC010) //- (PWMC) PWMC Interrupt Enable Register
    .equ AT91C_PWMC_VR             , (0xFFFCC0FC) //- (PWMC) PWMC Version Register
    .equ AT91C_PWMC_ISR            , (0xFFFCC01C) //- (PWMC) PWMC Interrupt Status Register
    .equ AT91C_PWMC_SR             , (0xFFFCC00C) //- (PWMC) PWMC Status Register
    .equ AT91C_PWMC_IMR            , (0xFFFCC018) //- (PWMC) PWMC Interrupt Mask Register
    .equ AT91C_PWMC_MR             , (0xFFFCC000) //- (PWMC) PWMC Mode Register
    .equ AT91C_PWMC_ENA            , (0xFFFCC004) //- (PWMC) PWMC Enable Register
// - ========== Register definition for UDP peripheral ========== 
    .equ AT91C_UDP_IMR             , (0xFFFB0018) //- (UDP) Interrupt Mask Register
    .equ AT91C_UDP_FADDR           , (0xFFFB0008) //- (UDP) Function Address Register
    .equ AT91C_UDP_NUM             , (0xFFFB0000) //- (UDP) Frame Number Register
    .equ AT91C_UDP_FDR             , (0xFFFB0050) //- (UDP) Endpoint FIFO Data Register
    .equ AT91C_UDP_ISR             , (0xFFFB001C) //- (UDP) Interrupt Status Register
    .equ AT91C_UDP_CSR             , (0xFFFB0030) //- (UDP) Endpoint Control and Status Register
    .equ AT91C_UDP_IDR             , (0xFFFB0014) //- (UDP) Interrupt Disable Register
    .equ AT91C_UDP_ICR             , (0xFFFB0020) //- (UDP) Interrupt Clear Register
    .equ AT91C_UDP_RSTEP           , (0xFFFB0028) //- (UDP) Reset Endpoint Register
    .equ AT91C_UDP_TXVC            , (0xFFFB0074) //- (UDP) Transceiver Control Register
    .equ AT91C_UDP_GLBSTATE        , (0xFFFB0004) //- (UDP) Global State Register
    .equ AT91C_UDP_IER             , (0xFFFB0010) //- (UDP) Interrupt Enable Register

// - *****************************************************************************
// -               PIO DEFINITIONS FOR     .equ AT91SAM7S64
// - *****************************************************************************
    .equ AT91C_PIO_PA0             , (1 <<  0) //- Pin Controlled by PA0
    .equ AT91C_PA0_PWM0            , (AT91C_PIO_PA0) //-  PWM Channel 0
    .equ AT91C_PA0_TIOA0           , (AT91C_PIO_PA0) //-  Timer Counter 0 Multipurpose Timer I/O Pin A
    .equ AT91C_PIO_PA1             , (1 <<  1) //- Pin Controlled by PA1
    .equ AT91C_PA1_PWM1            , (AT91C_PIO_PA1) //-  PWM Channel 1
    .equ AT91C_PA1_TIOB0           , (AT91C_PIO_PA1) //-  Timer Counter 0 Multipurpose Timer I/O Pin B
    .equ AT91C_PIO_PA10            , (1 << 10) //- Pin Controlled by PA10
    .equ AT91C_PA10_DTXD           , (AT91C_PIO_PA10) //-  DBGU Debug Transmit Data
    .equ AT91C_PA10_NPCS2          , (AT91C_PIO_PA10) //-  SPI Peripheral Chip Select 2
    .equ AT91C_PIO_PA11            , (1 << 11) //- Pin Controlled by PA11
    .equ AT91C_PA11_NPCS0          , (AT91C_PIO_PA11) //-  SPI Peripheral Chip Select 0
    .equ AT91C_PA11_PWM0           , (AT91C_PIO_PA11) //-  PWM Channel 0
    .equ AT91C_PIO_PA12            , (1 << 12) //- Pin Controlled by PA12
    .equ AT91C_PA12_MISO           , (AT91C_PIO_PA12) //-  SPI Master In Slave
    .equ AT91C_PA12_PWM1           , (AT91C_PIO_PA12) //-  PWM Channel 1
    .equ AT91C_PIO_PA13            , (1 << 13) //- Pin Controlled by PA13
    .equ AT91C_PA13_MOSI           , (AT91C_PIO_PA13) //-  SPI Master Out Slave
    .equ AT91C_PA13_PWM2           , (AT91C_PIO_PA13) //-  PWM Channel 2
    .equ AT91C_PIO_PA14            , (1 << 14) //- Pin Controlled by PA14
    .equ AT91C_PA14_SPCK           , (AT91C_PIO_PA14) //-  SPI Serial Clock
    .equ AT91C_PA14_PWM3           , (AT91C_PIO_PA14) //-  PWM Channel 3
    .equ AT91C_PIO_PA15            , (1 << 15) //- Pin Controlled by PA15
    .equ AT91C_PA15_TF             , (AT91C_PIO_PA15) //-  SSC Transmit Frame Sync
    .equ AT91C_PA15_TIOA1          , (AT91C_PIO_PA15) //-  Timer Counter 1 Multipurpose Timer I/O Pin A
    .equ AT91C_PIO_PA16            , (1 << 16) //- Pin Controlled by PA16
    .equ AT91C_PA16_TK             , (AT91C_PIO_PA16) //-  SSC Transmit Clock
    .equ AT91C_PA16_TIOB1          , (AT91C_PIO_PA16) //-  Timer Counter 1 Multipurpose Timer I/O Pin B
    .equ AT91C_PIO_PA17            , (1 << 17) //- Pin Controlled by PA17
    .equ AT91C_PA17_TD             , (AT91C_PIO_PA17) //-  SSC Transmit data
    .equ AT91C_PA17_PCK1           , (AT91C_PIO_PA17) //-  PMC Programmable Clock Output 1
    .equ AT91C_PIO_PA18            , (1 << 18) //- Pin Controlled by PA18
    .equ AT91C_PA18_RD             , (AT91C_PIO_PA18) //-  SSC Receive Data
    .equ AT91C_PA18_PCK2           , (AT91C_PIO_PA18) //-  PMC Programmable Clock Output 2
    .equ AT91C_PIO_PA19            , (1 << 19) //- Pin Controlled by PA19
    .equ AT91C_PA19_RK             , (AT91C_PIO_PA19) //-  SSC Receive Clock
    .equ AT91C_PA19_FIQ            , (AT91C_PIO_PA19) //-  AIC Fast Interrupt Input
    .equ AT91C_PIO_PA2             , (1 <<  2) //- Pin Controlled by PA2
    .equ AT91C_PA2_PWM2            , (AT91C_PIO_PA2) //-  PWM Channel 2
    .equ AT91C_PA2_SCK0            , (AT91C_PIO_PA2) //-  USART 0 Serial Clock
    .equ AT91C_PIO_PA20            , (1 << 20) //- Pin Controlled by PA20
    .equ AT91C_PA20_RF             , (AT91C_PIO_PA20) //-  SSC Receive Frame Sync
    .equ AT91C_PA20_IRQ0           , (AT91C_PIO_PA20) //-  External Interrupt 0
    .equ AT91C_PIO_PA21            , (1 << 21) //- Pin Controlled by PA21
    .equ AT91C_PA21_RXD1           , (AT91C_PIO_PA21) //-  USART 1 Receive Data
    .equ AT91C_PA21_PCK1           , (AT91C_PIO_PA21) //-  PMC Programmable Clock Output 1
    .equ AT91C_PIO_PA22            , (1 << 22) //- Pin Controlled by PA22
    .equ AT91C_PA22_TXD1           , (AT91C_PIO_PA22) //-  USART 1 Transmit Data
    .equ AT91C_PA22_NPCS3          , (AT91C_PIO_PA22) //-  SPI Peripheral Chip Select 3
    .equ AT91C_PIO_PA23            , (1 << 23) //- Pin Controlled by PA23
    .equ AT91C_PA23_SCK1           , (AT91C_PIO_PA23) //-  USART 1 Serial Clock
    .equ AT91C_PA23_PWM0           , (AT91C_PIO_PA23) //-  PWM Channel 0
    .equ AT91C_PIO_PA24            , (1 << 24) //- Pin Controlled by PA24
    .equ AT91C_PA24_RTS1           , (AT91C_PIO_PA24) //-  USART 1 Ready To Send
    .equ AT91C_PA24_PWM1           , (AT91C_PIO_PA24) //-  PWM Channel 1
    .equ AT91C_PIO_PA25            , (1 << 25) //- Pin Controlled by PA25
    .equ AT91C_PA25_CTS1           , (AT91C_PIO_PA25) //-  USART 1 Clear To Send
    .equ AT91C_PA25_PWM2           , (AT91C_PIO_PA25) //-  PWM Channel 2
    .equ AT91C_PIO_PA26            , (1 << 26) //- Pin Controlled by PA26
    .equ AT91C_PA26_DCD1           , (AT91C_PIO_PA26) //-  USART 1 Data Carrier Detect
    .equ AT91C_PA26_TIOA2          , (AT91C_PIO_PA26) //-  Timer Counter 2 Multipurpose Timer I/O Pin A
    .equ AT91C_PIO_PA27            , (1 << 27) //- Pin Controlled by PA27
    .equ AT91C_PA27_DTR1           , (AT91C_PIO_PA27) //-  USART 1 Data Terminal ready
    .equ AT91C_PA27_TIOB2          , (AT91C_PIO_PA27) //-  Timer Counter 2 Multipurpose Timer I/O Pin B
    .equ AT91C_PIO_PA28            , (1 << 28) //- Pin Controlled by PA28
    .equ AT91C_PA28_DSR1           , (AT91C_PIO_PA28) //-  USART 1 Data Set ready
    .equ AT91C_PA28_TCLK1          , (AT91C_PIO_PA28) //-  Timer Counter 1 external clock input
    .equ AT91C_PIO_PA29            , (1 << 29) //- Pin Controlled by PA29
    .equ AT91C_PA29_RI1            , (AT91C_PIO_PA29) //-  USART 1 Ring Indicator
    .equ AT91C_PA29_TCLK2          , (AT91C_PIO_PA29) //-  Timer Counter 2 external clock input
    .equ AT91C_PIO_PA3             , (1 <<  3) //- Pin Controlled by PA3
    .equ AT91C_PA3_TWD             , (AT91C_PIO_PA3) //-  TWI Two-wire Serial Data
    .equ AT91C_PA3_NPCS3           , (AT91C_PIO_PA3) //-  SPI Peripheral Chip Select 3
    .equ AT91C_PIO_PA30            , (1 << 30) //- Pin Controlled by PA30
    .equ AT91C_PA30_IRQ1           , (AT91C_PIO_PA30) //-  External Interrupt 1
    .equ AT91C_PA30_NPCS2          , (AT91C_PIO_PA30) //-  SPI Peripheral Chip Select 2
    .equ AT91C_PIO_PA31            , (1 << 31) //- Pin Controlled by PA31
    .equ AT91C_PA31_NPCS1          , (AT91C_PIO_PA31) //-  SPI Peripheral Chip Select 1
    .equ AT91C_PA31_PCK2           , (AT91C_PIO_PA31) //-  PMC Programmable Clock Output 2
    .equ AT91C_PIO_PA4             , (1 <<  4) //- Pin Controlled by PA4
    .equ AT91C_PA4_TWCK            , (AT91C_PIO_PA4) //-  TWI Two-wire Serial Clock
    .equ AT91C_PA4_TCLK0           , (AT91C_PIO_PA4) //-  Timer Counter 0 external clock input
    .equ AT91C_PIO_PA5             , (1 <<  5) //- Pin Controlled by PA5
    .equ AT91C_PA5_RXD0            , (AT91C_PIO_PA5) //-  USART 0 Receive Data
    .equ AT91C_PA5_NPCS3           , (AT91C_PIO_PA5) //-  SPI Peripheral Chip Select 3
    .equ AT91C_PIO_PA6             , (1 <<  6) //- Pin Controlled by PA6
    .equ AT91C_PA6_TXD0            , (AT91C_PIO_PA6) //-  USART 0 Transmit Data
    .equ AT91C_PA6_PCK0            , (AT91C_PIO_PA6) //-  PMC Programmable Clock Output 0
    .equ AT91C_PIO_PA7             , (1 <<  7) //- Pin Controlled by PA7
    .equ AT91C_PA7_RTS0            , (AT91C_PIO_PA7) //-  USART 0 Ready To Send
    .equ AT91C_PA7_PWM3            , (AT91C_PIO_PA7) //-  PWM Channel 3
    .equ AT91C_PIO_PA8             , (1 <<  8) //- Pin Controlled by PA8
    .equ AT91C_PA8_CTS0            , (AT91C_PIO_PA8) //-  USART 0 Clear To Send
    .equ AT91C_PA8_ADTRG           , (AT91C_PIO_PA8) //-  ADC External Trigger
    .equ AT91C_PIO_PA9             , (1 <<  9) //- Pin Controlled by PA9
    .equ AT91C_PA9_DRXD            , (AT91C_PIO_PA9) //-  DBGU Debug Receive Data
    .equ AT91C_PA9_NPCS1           , (AT91C_PIO_PA9) //-  SPI Peripheral Chip Select 1

// - *****************************************************************************
// -               PERIPHERAL ID DEFINITIONS FOR     .equ AT91SAM7S64
// - *****************************************************************************
    .equ AT91C_ID_FIQ              , ( 0) //- Advanced Interrupt Controller (FIQ)
    .equ AT91C_ID_SYS              , ( 1) //- System Peripheral
    .equ AT91C_ID_PIOA             , ( 2) //- Parallel IO Controller
    .equ AT91C_ID_3_Reserved       , ( 3) //- Reserved
    .equ AT91C_ID_ADC              , ( 4) //- Analog-to-Digital Converter
    .equ AT91C_ID_SPI              , ( 5) //- Serial Peripheral Interface
    .equ AT91C_ID_US0              , ( 6) //- USART 0
    .equ AT91C_ID_US1              , ( 7) //- USART 1
    .equ AT91C_ID_SSC              , ( 8) //- Serial Synchronous Controller
    .equ AT91C_ID_TWI              , ( 9) //- Two-Wire Interface
    .equ AT91C_ID_PWMC             , (10) //- PWM Controller
    .equ AT91C_ID_UDP              , (11) //- USB Device Port
    .equ AT91C_ID_TC0              , (12) //- Timer Counter 0
    .equ AT91C_ID_TC1              , (13) //- Timer Counter 1
    .equ AT91C_ID_TC2              , (14) //- Timer Counter 2
    .equ AT91C_ID_15_Reserved      , (15) //- Reserved
    .equ AT91C_ID_16_Reserved      , (16) //- Reserved
    .equ AT91C_ID_17_Reserved      , (17) //- Reserved
    .equ AT91C_ID_18_Reserved      , (18) //- Reserved
    .equ AT91C_ID_19_Reserved      , (19) //- Reserved
    .equ AT91C_ID_20_Reserved      , (20) //- Reserved
    .equ AT91C_ID_21_Reserved      , (21) //- Reserved
    .equ AT91C_ID_22_Reserved      , (22) //- Reserved
    .equ AT91C_ID_23_Reserved      , (23) //- Reserved
    .equ AT91C_ID_24_Reserved      , (24) //- Reserved
    .equ AT91C_ID_25_Reserved      , (25) //- Reserved
    .equ AT91C_ID_26_Reserved      , (26) //- Reserved
    .equ AT91C_ID_27_Reserved      , (27) //- Reserved
    .equ AT91C_ID_28_Reserved      , (28) //- Reserved
    .equ AT91C_ID_29_Reserved      , (29) //- Reserved
    .equ AT91C_ID_IRQ0             , (30) //- Advanced Interrupt Controller (IRQ0)
    .equ AT91C_ID_IRQ1             , (31) //- Advanced Interrupt Controller (IRQ1)

// - *****************************************************************************
// -               BASE ADDRESS DEFINITIONS FOR     .equ AT91SAM7S64
// - *****************************************************************************
    .equ AT91C_BASE_SYS            , (0xFFFFF000) //- (SYS) Base Address
    .equ AT91C_BASE_AIC            , (0xFFFFF000) //- (AIC) Base Address
    .equ AT91C_BASE_PDC_DBGU       , (0xFFFFF300) //- (PDC_DBGU) Base Address
    .equ AT91C_BASE_DBGU           , (0xFFFFF200) //- (DBGU) Base Address
    .equ AT91C_BASE_PIOA           , (0xFFFFF400) //- (PIOA) Base Address
    .equ AT91C_BASE_CKGR           , (0xFFFFFC20) //- (CKGR) Base Address
    .equ AT91C_BASE_PMC            , (0xFFFFFC00) //- (PMC) Base Address
    .equ AT91C_BASE_RSTC           , (0xFFFFFD00) //- (RSTC) Base Address
    .equ AT91C_BASE_RTTC           , (0xFFFFFD20) //- (RTTC) Base Address
    .equ AT91C_BASE_PITC           , (0xFFFFFD30) //- (PITC) Base Address
    .equ AT91C_BASE_WDTC           , (0xFFFFFD40) //- (WDTC) Base Address
    .equ AT91C_BASE_VREG           , (0xFFFFFD60) //- (VREG) Base Address
    .equ AT91C_BASE_MC             , (0xFFFFFF00) //- (MC) Base Address
    .equ AT91C_BASE_PDC_SPI        , (0xFFFE0100) //- (PDC_SPI) Base Address
    .equ AT91C_BASE_SPI            , (0xFFFE0000) //- (SPI) Base Address
    .equ AT91C_BASE_PDC_ADC        , (0xFFFD8100) //- (PDC_ADC) Base Address
    .equ AT91C_BASE_ADC            , (0xFFFD8000) //- (ADC) Base Address
    .equ AT91C_BASE_PDC_SSC        , (0xFFFD4100) //- (PDC_SSC) Base Address
    .equ AT91C_BASE_SSC            , (0xFFFD4000) //- (SSC) Base Address
    .equ AT91C_BASE_PDC_US1        , (0xFFFC4100) //- (PDC_US1) Base Address
    .equ AT91C_BASE_US1            , (0xFFFC4000) //- (US1) Base Address
    .equ AT91C_BASE_PDC_US0        , (0xFFFC0100) //- (PDC_US0) Base Address
    .equ AT91C_BASE_US0            , (0xFFFC0000) //- (US0) Base Address
    .equ AT91C_BASE_TWI            , (0xFFFB8000) //- (TWI) Base Address
    .equ AT91C_BASE_TC0            , (0xFFFA0000) //- (TC0) Base Address
    .equ AT91C_BASE_TC1            , (0xFFFA0040) //- (TC1) Base Address
    .equ AT91C_BASE_TC2            , (0xFFFA0080) //- (TC2) Base Address
    .equ AT91C_BASE_TCB            , (0xFFFA0000) //- (TCB) Base Address
    .equ AT91C_BASE_PWMC_CH3       , (0xFFFCC260) //- (PWMC_CH3) Base Address
    .equ AT91C_BASE_PWMC_CH2       , (0xFFFCC240) //- (PWMC_CH2) Base Address
    .equ AT91C_BASE_PWMC_CH1       , (0xFFFCC220) //- (PWMC_CH1) Base Address
    .equ AT91C_BASE_PWMC_CH0       , (0xFFFCC200) //- (PWMC_CH0) Base Address
    .equ AT91C_BASE_PWMC           , (0xFFFCC000) //- (PWMC) Base Address
    .equ AT91C_BASE_UDP            , (0xFFFB0000) //- (UDP) Base Address

// - *****************************************************************************
// -               MEMORY MAPPING DEFINITIONS FOR     .equ AT91SAM7S64
// - *****************************************************************************
    .equ AT91C_ISRAM               , (0x00200000) //- Internal SRAM base address
    .equ AT91C_ISRAM_SIZE          , (0x00004000) //- Internal SRAM size in byte (16 Kbyte)
    .equ AT91C_IFLASH              , (0x00100000) //- Internal ROM base address
    .equ AT91C_IFLASH_SIZE         , (0x00010000) //- Internal ROM size in byte (64 Kbyte)
#endif /* __IAR_SYSTEMS_ASM__ */


#endif /*     .equ AT91SAM7S64_H */
