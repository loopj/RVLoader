#pragma once

//#define HW_GPIO_BASE 0x0d8000C0
#define HW_GPIO_BASE 0xCD0000C0
#define HW_GPIO_BASE_ADDR 0x0D8000C0

#define HW_GPIOB_OUT        (*((vu32*)(HW_GPIO_BASE + 0x00)))
#define HW_GPIOB_DIR        (*((vu32*)(HW_GPIO_BASE + 0x04)))
#define HW_GPIOB_IN         (*((vu32*)(HW_GPIO_BASE + 0x08)))
#define HW_GPIOB_INTLVL     (*((vu32*)(HW_GPIO_BASE + 0x0C)))
#define HW_GPIOB_INTFLAG    (*((vu32*)(HW_GPIO_BASE + 0x10)))
#define HW_GPIOB_INTMASK    (*((vu32*)(HW_GPIO_BASE + 0x14)))
#define HW_GPIOB_INMIR      (*((vu32*)(HW_GPIO_BASE + 0x18)))
#define HW_GPIO_ENABLE      (*((vu32*)(HW_GPIO_BASE + 0x1C)))
#define HW_GPIO_OUT         (*((vu32*)(HW_GPIO_BASE + 0x20)))
#define HW_GPIO_DIR         (*((vu32*)(HW_GPIO_BASE + 0x24)))
#define HW_GPIO_IN          (*((vu32*)(HW_GPIO_BASE + 0x28)))
#define HW_GPIO_INTLVL      (*((vu32*)(HW_GPIO_BASE + 0x2C)))
#define HW_GPIO_INTFLAG     (*((vu32*)(HW_GPIO_BASE + 0x30)))
#define HW_GPIO_INTMASK     (*((vu32*)(HW_GPIO_BASE + 0x34)))
#define HW_GPIO_INMIR       (*((vu32*)(HW_GPIO_BASE + 0x38)))
//#define HW_GPIO_OWNER		(HW_GPIO_BASE + 0x3C)

#define HW_GPIOB_OUT_ADDR        (HW_GPIO_BASE_ADDR + 0x00)
#define HW_GPIOB_DIR_ADDR        (HW_GPIO_BASE_ADDR + 0x04)
#define HW_GPIOB_IN_ADDR         (HW_GPIO_BASE_ADDR + 0x08)
#define HW_GPIOB_INTLVL_ADDR     (HW_GPIO_BASE_ADDR + 0x0C)
#define HW_GPIOB_INTFLAG_ADDR    (HW_GPIO_BASE_ADDR + 0x10)
#define HW_GPIOB_INTMASK_ADDR    (HW_GPIO_BASE_ADDR + 0x14)
#define HW_GPIOB_INMIR_ADDR      (HW_GPIO_BASE_ADDR + 0x18)
#define HW_GPIO_ENABLE_ADDR      (HW_GPIO_BASE_ADDR + 0x1C)
#define HW_GPIO_OUT_ADDR         (HW_GPIO_BASE_ADDR + 0x20)
#define HW_GPIO_DIR_ADDR         (HW_GPIO_BASE_ADDR + 0x24)
#define HW_GPIO_IN_ADDR          (HW_GPIO_BASE_ADDR + 0x28)
#define HW_GPIO_INTLVL_ADDR      (HW_GPIO_BASE_ADDR + 0x2C)
#define HW_GPIO_INTFLAG_ADDR     (HW_GPIO_BASE_ADDR + 0x30)
#define HW_GPIO_INTMASK_ADDR     (HW_GPIO_BASE_ADDR + 0x34)
#define HW_GPIO_INMIR_ADDR       (HW_GPIO_BASE_ADDR + 0x38)
#define HW_GPIO_OWNER_ADDR       (HW_GPIO_BASE_ADDR + 0x3C)

#define GPIO_DEBUG0 (1<<16)
#define GPIO_DEBUG1 (1<<17)
#define GPIO_DEBUG2 (1<<18)
#define GPIO_DEBUG3 (1<<19)
#define GPIO_DEBUG4 (1<<20)
#define GPIO_DEBUG5 (1<<21)
#define GPIO_DEBUG6 (1<<22)
#define GPIO_DEBUG7 (1<<23)