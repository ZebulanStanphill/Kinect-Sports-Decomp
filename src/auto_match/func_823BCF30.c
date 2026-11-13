typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
__vector4 __vaddfp(__vector4 a, __vector4 b);

struct Src_823BCF30;
typedef struct SrcVT_823BCF30 {
    int pad[5];
    void (*f14)(struct Src_823BCF30 *self, int a, __vector4 *out);
} SrcVT_823BCF30;
typedef struct Src_823BCF30 { SrcVT_823BCF30 *vt; } Src_823BCF30;

typedef struct Obj_823BCF30 {
    char pad0[0x10];
    __vector4 offset;
    Src_823BCF30 *pos;
    Src_823BCF30 *rot;
} Obj_823BCF30;

typedef struct Out_823BCF30 {
    char pad0[0x10];
    __vector4 pos;
    __vector4 rot;
} Out_823BCF30;

void fn_823BCF30(Obj_823BCF30 *self, int a, Out_823BCF30 *out)
{
    __vector4 p;
    __vector4 r;

    self->pos->vt->f14(self->pos, a, &p);
    if (out != 0) {
        out->pos = __vaddfp(self->offset, p);
    }
    self->rot->vt->f14(self->rot, a, &r);
    if (out != 0) {
        out->rot = r;
    }
}
