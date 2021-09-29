
#ifndef MYIP_H
#define MYIP_H


/****************** Include Files ********************/
#include "xil_types.h"
#include "xstatus.h"

#define MYIP_S00_AXI_SLV_REG0_OFFSET 0
#define MYIP_S00_AXI_SLV_REG1_OFFSET 4
#define MYIP_S00_AXI_SLV_REG2_OFFSET 8
#define MYIP_S00_AXI_SLV_REG3_OFFSET 12
#define MYIP_S00_AXI_SLV_REG4_OFFSET 16
#define MYIP_S00_AXI_SLV_REG5_OFFSET 20
#define MYIP_S00_AXI_SLV_REG6_OFFSET 24
#define MYIP_S00_AXI_SLV_REG7_OFFSET 28
#define MYIP_S00_AXI_SLV_REG8_OFFSET 32
#define MYIP_S00_AXI_SLV_REG9_OFFSET 36
#define MYIP_S00_AXI_SLV_REG10_OFFSET 40
#define MYIP_S00_AXI_SLV_REG11_OFFSET 44
#define MYIP_S00_AXI_SLV_REG12_OFFSET 48
#define MYIP_S00_AXI_SLV_REG13_OFFSET 52
#define MYIP_S00_AXI_SLV_REG14_OFFSET 56
#define MYIP_S00_AXI_SLV_REG15_OFFSET 60
#define MYIP_S00_AXI_SLV_REG16_OFFSET 64
#define MYIP_S00_AXI_SLV_REG17_OFFSET 68
#define MYIP_S00_AXI_SLV_REG18_OFFSET 72
#define MYIP_S00_AXI_SLV_REG19_OFFSET 76
#define MYIP_S00_AXI_SLV_REG20_OFFSET 80
#define MYIP_S00_AXI_SLV_REG21_OFFSET 84
#define MYIP_S00_AXI_SLV_REG22_OFFSET 88
#define MYIP_S00_AXI_SLV_REG23_OFFSET 92
#define MYIP_S00_AXI_SLV_REG24_OFFSET 96
#define MYIP_S00_AXI_SLV_REG25_OFFSET 100
#define MYIP_S00_AXI_SLV_REG26_OFFSET 104
#define MYIP_S00_AXI_SLV_REG27_OFFSET 108
#define MYIP_S00_AXI_SLV_REG28_OFFSET 112
#define MYIP_S00_AXI_SLV_REG29_OFFSET 116
#define MYIP_S00_AXI_SLV_REG30_OFFSET 120
#define MYIP_S00_AXI_SLV_REG31_OFFSET 124
#define MYIP_S00_AXI_SLV_REG32_OFFSET 128
#define MYIP_S00_AXI_SLV_REG33_OFFSET 132
#define MYIP_S00_AXI_SLV_REG34_OFFSET 136
#define MYIP_S00_AXI_SLV_REG35_OFFSET 140
#define MYIP_S00_AXI_SLV_REG36_OFFSET 144
#define MYIP_S00_AXI_SLV_REG37_OFFSET 148
#define MYIP_S00_AXI_SLV_REG38_OFFSET 152
#define MYIP_S00_AXI_SLV_REG39_OFFSET 156
#define MYIP_S00_AXI_SLV_REG40_OFFSET 160
#define MYIP_S00_AXI_SLV_REG41_OFFSET 164
#define MYIP_S00_AXI_SLV_REG42_OFFSET 168
#define MYIP_S00_AXI_SLV_REG43_OFFSET 172
#define MYIP_S00_AXI_SLV_REG44_OFFSET 176
#define MYIP_S00_AXI_SLV_REG45_OFFSET 180
#define MYIP_S00_AXI_SLV_REG46_OFFSET 184
#define MYIP_S00_AXI_SLV_REG47_OFFSET 188
#define MYIP_S00_AXI_SLV_REG48_OFFSET 192
#define MYIP_S00_AXI_SLV_REG49_OFFSET 196
#define MYIP_S00_AXI_SLV_REG50_OFFSET 200
#define MYIP_S00_AXI_SLV_REG51_OFFSET 204
#define MYIP_S00_AXI_SLV_REG52_OFFSET 208
#define MYIP_S00_AXI_SLV_REG53_OFFSET 212
#define MYIP_S00_AXI_SLV_REG54_OFFSET 216
#define MYIP_S00_AXI_SLV_REG55_OFFSET 220
#define MYIP_S00_AXI_SLV_REG56_OFFSET 224
#define MYIP_S00_AXI_SLV_REG57_OFFSET 228
#define MYIP_S00_AXI_SLV_REG58_OFFSET 232
#define MYIP_S00_AXI_SLV_REG59_OFFSET 236
#define MYIP_S00_AXI_SLV_REG60_OFFSET 240
#define MYIP_S00_AXI_SLV_REG61_OFFSET 244
#define MYIP_S00_AXI_SLV_REG62_OFFSET 248
#define MYIP_S00_AXI_SLV_REG63_OFFSET 252
#define MYIP_S00_AXI_SLV_REG64_OFFSET 256
#define MYIP_S00_AXI_SLV_REG65_OFFSET 260
#define MYIP_S00_AXI_SLV_REG66_OFFSET 264
#define MYIP_S00_AXI_SLV_REG67_OFFSET 268
#define MYIP_S00_AXI_SLV_REG68_OFFSET 272
#define MYIP_S00_AXI_SLV_REG69_OFFSET 276
#define MYIP_S00_AXI_SLV_REG70_OFFSET 280
#define MYIP_S00_AXI_SLV_REG71_OFFSET 284
#define MYIP_S00_AXI_SLV_REG72_OFFSET 288
#define MYIP_S00_AXI_SLV_REG73_OFFSET 292
#define MYIP_S00_AXI_SLV_REG74_OFFSET 296
#define MYIP_S00_AXI_SLV_REG75_OFFSET 300
#define MYIP_S00_AXI_SLV_REG76_OFFSET 304
#define MYIP_S00_AXI_SLV_REG77_OFFSET 308
#define MYIP_S00_AXI_SLV_REG78_OFFSET 312
#define MYIP_S00_AXI_SLV_REG79_OFFSET 316
#define MYIP_S00_AXI_SLV_REG80_OFFSET 320
#define MYIP_S00_AXI_SLV_REG81_OFFSET 324
#define MYIP_S00_AXI_SLV_REG82_OFFSET 328
#define MYIP_S00_AXI_SLV_REG83_OFFSET 332
#define MYIP_S00_AXI_SLV_REG84_OFFSET 336
#define MYIP_S00_AXI_SLV_REG85_OFFSET 340
#define MYIP_S00_AXI_SLV_REG86_OFFSET 344
#define MYIP_S00_AXI_SLV_REG87_OFFSET 348
#define MYIP_S00_AXI_SLV_REG88_OFFSET 352
#define MYIP_S00_AXI_SLV_REG89_OFFSET 356
#define MYIP_S00_AXI_SLV_REG90_OFFSET 360
#define MYIP_S00_AXI_SLV_REG91_OFFSET 364
#define MYIP_S00_AXI_SLV_REG92_OFFSET 368
#define MYIP_S00_AXI_SLV_REG93_OFFSET 372
#define MYIP_S00_AXI_SLV_REG94_OFFSET 376
#define MYIP_S00_AXI_SLV_REG95_OFFSET 380
#define MYIP_S00_AXI_SLV_REG96_OFFSET 384
#define MYIP_S00_AXI_SLV_REG97_OFFSET 388
#define MYIP_S00_AXI_SLV_REG98_OFFSET 392
#define MYIP_S00_AXI_SLV_REG99_OFFSET 396
#define MYIP_S00_AXI_SLV_REG100_OFFSET 400
#define MYIP_S00_AXI_SLV_REG101_OFFSET 404
#define MYIP_S00_AXI_SLV_REG102_OFFSET 408
#define MYIP_S00_AXI_SLV_REG103_OFFSET 412
#define MYIP_S00_AXI_SLV_REG104_OFFSET 416
#define MYIP_S00_AXI_SLV_REG105_OFFSET 420
#define MYIP_S00_AXI_SLV_REG106_OFFSET 424
#define MYIP_S00_AXI_SLV_REG107_OFFSET 428
#define MYIP_S00_AXI_SLV_REG108_OFFSET 432
#define MYIP_S00_AXI_SLV_REG109_OFFSET 436
#define MYIP_S00_AXI_SLV_REG110_OFFSET 440
#define MYIP_S00_AXI_SLV_REG111_OFFSET 444
#define MYIP_S00_AXI_SLV_REG112_OFFSET 448
#define MYIP_S00_AXI_SLV_REG113_OFFSET 452
#define MYIP_S00_AXI_SLV_REG114_OFFSET 456
#define MYIP_S00_AXI_SLV_REG115_OFFSET 460
#define MYIP_S00_AXI_SLV_REG116_OFFSET 464
#define MYIP_S00_AXI_SLV_REG117_OFFSET 468
#define MYIP_S00_AXI_SLV_REG118_OFFSET 472
#define MYIP_S00_AXI_SLV_REG119_OFFSET 476
#define MYIP_S00_AXI_SLV_REG120_OFFSET 480
#define MYIP_S00_AXI_SLV_REG121_OFFSET 484
#define MYIP_S00_AXI_SLV_REG122_OFFSET 488
#define MYIP_S00_AXI_SLV_REG123_OFFSET 492
#define MYIP_S00_AXI_SLV_REG124_OFFSET 496
#define MYIP_S00_AXI_SLV_REG125_OFFSET 500
#define MYIP_S00_AXI_SLV_REG126_OFFSET 504
#define MYIP_S00_AXI_SLV_REG127_OFFSET 508


/**************************** Type Definitions *****************************/
/**
 *
 * Write a value to a MYIP register. A 32 bit write is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is written.
 *
 * @param   BaseAddress is the base address of the MYIPdevice.
 * @param   RegOffset is the register offset from the base to write to.
 * @param   Data is the data written to the register.
 *
 * @return  None.
 *
 * @note
 * C-style signature:
 * 	void MYIP_mWriteReg(u32 BaseAddress, unsigned RegOffset, u32 Data)
 *
 */
#define MYIP_mWriteReg(BaseAddress, RegOffset, Data) \
  	Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))

/**
 *
 * Read a value from a MYIP register. A 32 bit read is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is read from the register. The most significant data
 * will be read as 0.
 *
 * @param   BaseAddress is the base address of the MYIP device.
 * @param   RegOffset is the register offset from the base to write to.
 *
 * @return  Data is the data from the register.
 *
 * @note
 * C-style signature:
 * 	u32 MYIP_mReadReg(u32 BaseAddress, unsigned RegOffset)
 *
 */
#define MYIP_mReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))

/************************** Function Prototypes ****************************/
/**
 *
 * Run a self-test on the driver/device. Note this may be a destructive test if
 * resets of the device are performed.
 *
 * If the hardware system is not built correctly, this function may never
 * return to the caller.
 *
 * @param   baseaddr_p is the base address of the MYIP instance to be worked on.
 *
 * @return
 *
 *    - XST_SUCCESS   if all self-test code passed
 *    - XST_FAILURE   if any self-test code failed
 *
 * @note    Caching must be turned off for this function to work.
 * @note    Self test may fail if data memory and device are not on the same bus.
 *
 */
XStatus MYIP_Reg_SelfTest(void * baseaddr_p);

#endif // MYIP_H
