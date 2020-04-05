#ifndef __BITBANGING_H__
#define __BITBANGING_H__

/*
 * Constants and addresses taken from
 * https://www.raspberrypi.org/app/uploads/2012/02/BCM2835-ARM-Peripherals.pdf
*/

/* GPIO 32-bit registers */

/* GPIO address base */
#define GPIO_BASE 0x7E200000

/* Selecting functionality of some pin */
#define GPFSEL0 GPIO_BASE | 0x0000
#define GPFSEL1 GPIO_BASE | 0x0004
#define GPFSEL2 GPIO_BASE | 0x0008
#define GPFSEL3 GPIO_BASE | 0x000C
#define GPFSEL4 GPIO_BASE | 0x0010
#define GPFSEL5 GPIO_BASE | 0x0014

/* Setting a pin */
#define GPFSET0 GPIO_BASE | 0x001C
#define GPFSET1 GPIO_BASE | 0x0020

/* Clearing a pin */
#define GPCLR0 GPIO_BASE | 0x0028
#define GPCLR1 GPIO_BASE | 0x002C

/* Check whether the pin is at high or low level*/
#define GPLEV0 GPIO_BASE | 0x0034
#define GPLEV1 GPIO_BASE | 0x0038

/*  */
#define GPEDS0 GPIO_BASE | 0x0040
#define GPEDS1 GPIO_BASE | 0x0044

#define GPREN0 GPIO_BASE | 0x004C
#define GPREN1 GPIO_BASE | 0x0050

#define GPFEN0 GPIO_BASE | 0x0058
#define GPFEN1 GPIO_BASE | 0x005C

#define GPHEN0 GPIO_BASE | 0x0064
#define GPHEN1 GPIO_BASE | 0x0068

#define GPLEN0 GPIO_BASE | 0x0070
#define GPLEN1 GPIO_BASE | 0x0074

#define GPAREN0 GPIO_BASE | 0x007C
#define GPAREN1 GPIO_BASE | 0x0080

#define GPAFEN0 GPIO_BASE | 0x0088
#define GPAFEN1 GPIO_BASE | 0x008C

#define GPPUD GPIO_BASE | 0x0094

#define GPPUDCLK0 GPIO_BASE | 0x0098
#define GPPUDCLK1 GPIO_BASE | 0x009C
#endif
