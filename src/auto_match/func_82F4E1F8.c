#include "xdk/vectorintrinsics.h"

typedef struct Global_82F4E1F8 {
    char pad[0xb00];
    __vector4 value;
} Global_82F4E1F8;

extern Global_82F4E1F8 *lbl_8326183C;

float fn_82F4E1F8(void)
{
    __vector4 v = lbl_8326183C->value;
    return v.vector4_f32[3];
}
