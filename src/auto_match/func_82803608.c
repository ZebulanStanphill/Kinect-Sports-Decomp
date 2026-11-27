/* Copies the six default vectors of lbl_83156D60 to their outputs, then loads five unaligned vectors:
   three from the source float array (bytes 0, 0xc, 0x18) and two from the other one (0x10, 0x20). */

#include "xdk/vectorintrinsics.h"

typedef struct Source_82803608 {
    int pad0;
    float *values; /* 0x4 */
} Source_82803608;

typedef struct Other_82803608 {
    char pad0[0x54];
    float *values; /* 0x54 */
} Other_82803608;

extern __vector4 lbl_83156D60[6];

static __forceinline __vector4 LoadUnaligned(const float *p, int offset)
{
    return __vor(__lvlx(p, offset), __lvrx(p, offset + 16));
}

void fn_82803608(Source_82803608 *source, Other_82803608 *other, __vector4 *out0, __vector4 *out1,
                 __vector4 *out2, __vector4 *out3, __vector4 *out4, __vector4 *default0, __vector4 *default1,
                 __vector4 *default2, __vector4 *default5, __vector4 *default3, __vector4 *default4)
{
    *default0 = lbl_83156D60[0];
    *default1 = lbl_83156D60[1];
    *default2 = lbl_83156D60[2];
    *default5 = lbl_83156D60[5];
    *default3 = lbl_83156D60[3];
    *default4 = lbl_83156D60[4];
    *out0 = LoadUnaligned(source->values, 0);
    *out1 = LoadUnaligned(source->values, 0xc);
    *out2 = LoadUnaligned(source->values, 0x18);
    *out3 = LoadUnaligned(other->values, 0x10);
    *out4 = LoadUnaligned(other->values, 0x20);
}
