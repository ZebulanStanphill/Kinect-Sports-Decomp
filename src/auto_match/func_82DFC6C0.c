#include "xdk/vectorintrinsics.h"

void fn_82DFC6C0(char *vehicle, float timestep, char *output)
{
    char *data = *(char **)(vehicle + 0x1c); /* m_data */
    float factor = *(float *)(data + 0x6c);  /* m_extraTorqueFactor */
    float amount;
    __vector4 direction;
    __vector4 scale;
    if (factor == 0.0f) {
        return;
    }
    amount = *(float *)(vehicle + 0xbc) * factor * timestep;
    direction = *(__vector4 *)(data + 0x30);
    scale = __vspltw(__lvlx(&amount, 0), 0);
    *(__vector4 *)(output + 0x20) =
        __vmaddfp(__vmulfp(direction, scale), *(__vector4 *)(data + 0x180), *(__vector4 *)(output + 0x20));
}
