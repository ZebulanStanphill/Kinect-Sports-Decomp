typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vcmpgtfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __vand(__vector4 a, __vector4 b);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vcfsx(__vector4 v, int shift);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct Levels_824D8ED8 {
    char pad0[8];
    float limits[3];            // 0x08
    char pad14[0x10];
} Levels_824D8ED8;

typedef struct Config_824D8ED8 {
    char pad0[0x10c];
    Levels_824D8ED8 a;          // 0x10c
    Levels_824D8ED8 b;          // 0x130
    char pad154[8];
} Config_824D8ED8;

typedef struct Owner_824D8ED8 {
    char pad0[0x6c];
    int mode;                   // 0x6c
} Owner_824D8ED8;

extern Config_824D8ED8 lbl_831C3E30;

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

int fn_824D8ED8(Owner_824D8ED8 *self, __vector4 v)
{
    const Levels_824D8ED8 *levels;
    __vector4 length;
    int i;
    int result;
    levels = self->mode != 0 ? &lbl_831C3E30.a : &lbl_831C3E30.b;
    result = 1;
    length = Length3(v);
    for (i = 0; i < 3; i++) {
        if (length.vector4_f32[0] < levels->limits[i] || i == 2) {
            result = i;
            break;
        }
    }
    return result;
}
