typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
__vector4 __vspltisw(int value);

typedef struct Obj_824CD4E8 {
    void *vtbl;
    int pad04[11];
    unsigned char data[0x1c0];
    unsigned char data2[8];
    int a;
    int b;
    __vector4 v0;
    __vector4 v1;
} Obj_824CD4E8;

extern void fn_82F53BF0(Obj_824CD4E8 *self);
extern void fn_82A1EFC0(void *dst, int c, unsigned int n);
extern char lbl_821C0C28[];

Obj_824CD4E8 *fn_824CD4E8(Obj_824CD4E8 *self)
{
    fn_82F53BF0(self);
    self->vtbl = lbl_821C0C28;
    fn_82A1EFC0(self->data, 0, 0x1c0);
    fn_82A1EFC0(self->data2, 0, 8);
    self->a = 0;
    self->b = 0;
    self->v0 = __vspltisw(0);
    self->v1 = __vspltisw(0);
    return self;
}
