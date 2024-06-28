#include <gccore.h>
#include <ogc/machine/processor.h>
#include "i2c.h"

#define TMP1075_ADDR (0x49 << 1)
#define REG_TEMP    0x00

namespace TMP1075 {
    bool isConnected(){
        u32 level;
        u8 i2cRet;
        static bool firstTime = true;
        static bool ret = false;

        if (firstTime) {
            firstTime = false;
            _CPU_ISR_Disable(level);
            ret = true;
            i2c_start();
            i2cRet = i2c_sendByte(TMP1075_ADDR);
            if (!i2cRet) {
                ret = false;
            }
            i2c_stop();
            _CPU_ISR_Restore(level);
        }
        return ret;
    }

    float getTemperature() {
        u8 error;
        u16 reg_value = i2c_read16(TMP1075_ADDR, REG_TEMP, &error);
        int16_t signed_temp = (reg_value >> 8) | (reg_value << 8);
        return (signed_temp >> 4) * 0.0625f;
    }
}