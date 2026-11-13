typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);

typedef struct Obj_82F547C8 {
    int unk0;                /* 0x00 */
    float a;                 /* 0x04 */
    unsigned char flag;      /* 0x08 */
    char pad9[7];
    float b;                 /* 0x10 */
    char pad14[0xc];
    __vector4 v[2];          /* 0x20 */
    char sub[1];             /* 0x40 */
} Obj_82F547C8;

extern void fn_82F54688(void *sub);

void fn_82F547C8(Obj_82F547C8 *self)
{
    int i;

    self->a = 0.0f;
    fn_82F54688(self->sub);
    self->b = 0.0f;
    self->flag = 0;
    for (i = 0; i < 2; i++)
        self->v[i] = __vspltisw(0);
}
