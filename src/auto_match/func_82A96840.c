// Vertex/pixel packing helper: clamps the value to [lo, hi], scales and offsets it, replaces
// the components selected by the mask with the rounded unsigned integer conversion, flips
// the sign bits given, clears the destination (size in bits at +4 of the format) and calls
// the format's store function with the result.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmaxfp(__vector4 a, __vector4 b);
__vector4 __vminfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vrfin(__vector4 v);
__vector4 __vctuxs(__vector4 v, int shift);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vxor(__vector4 a, __vector4 b);

void *memset(void *dst, int value, unsigned int size);

typedef struct Format_82A96840 {
    int f00;
    unsigned int bits;               // 0x04
} Format_82A96840;

typedef void (*Store_82A96840)(void *dst, const Format_82A96840 *format, __vector4 value);

void fn_82A96840(void *dst, const Format_82A96840 *format, Store_82A96840 store,
                 __vector4 value, __vector4 intMask, __vector4 scale, __vector4 offset,
                 __vector4 lo, __vector4 hi, __vector4 signFlip)
{
    __vector4 v = __vmaddfp(__vminfp(hi, __vmaxfp(lo, value)), scale, offset);

    memset(dst, 0, format->bits >> 3);
    store(dst, format, __vxor(__vsel(v, __vctuxs(__vrfin(v), 0), intMask), signFlip));
}
