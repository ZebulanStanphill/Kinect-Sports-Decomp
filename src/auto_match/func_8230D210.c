typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Self_8230D210 {
    char pad0[0xc];
    void *target;                           /* 0x0c */
    char pad10[0x10];
    __vector4 position;                     /* 0x20 */
    __vector4 direction;                    /* 0x30 */
} Self_8230D210;

extern void fn_822C4DB0(void *target, __vector4 position, __vector4 direction);

void fn_8230D210(Self_8230D210 *self)
{
    fn_822C4DB0(self->target, self->position, self->direction);
}
