typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vxor(__vector4 a, __vector4 b);

typedef struct Object_830824B8 {
    char pad00[0x30];
    __vector4 position;     /* 0x30 */
    char sub40[0x50];       /* 0x40 */
    __vector4 velocity;     /* 0x90 */
    float scale;            /* 0xa0 */
} Object_830824B8;

extern void fn_83082330(void *sub);
extern void fn_82CE6010(Object_830824B8 *self, int arg);

static __forceinline void setZero_830824B8(__vector4 *v)
{
    *v = __vxor(*v, *v);
}

static __forceinline void copy_830824B8(__vector4 *dst, const __vector4 *src)
{
    *dst = *src;
}

void fn_830824B8(Object_830824B8 *self, const __vector4 *position, int arg)
{
    fn_83082330(self->sub40);
    fn_82CE6010(self, arg);
    self->position = *position;
    setZero_830824B8(&self->velocity);
    self->scale = 1.0f;
}
