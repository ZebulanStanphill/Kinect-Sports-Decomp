typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_82DC20F0 {
    unsigned char pad0[0x18];
    unsigned char unk18;
    unsigned char unk19;
} Obj_82DC20F0;

typedef struct Body_82DC20F0 {
    unsigned char pad0[0xf0];
    unsigned char transform[0x40];
} Body_82DC20F0;

void fn_82CE5088(__vector4 *out, const void *t, const __vector4 *v);
int fn_82DC1F50(Obj_82DC20F0 *self, const __vector4 *p);
int fn_82DC2020(Obj_82DC20F0 *self, const __vector4 *p);

int fn_82DC20F0(Obj_82DC20F0 *self, Body_82DC20F0 *a, Body_82DC20F0 *b, const __vector4 *v)
{
    __vector4 pa;
    __vector4 pb;
    int r;

    fn_82CE5088(&pa, a->transform, v);
    fn_82CE5088(&pb, b->transform, v);
    r = fn_82DC1F50(self, &pa);
    fn_82DC2020(self, &pb);
    self->unk18 = 1;
    self->unk19 = 1;
    return r;
}
