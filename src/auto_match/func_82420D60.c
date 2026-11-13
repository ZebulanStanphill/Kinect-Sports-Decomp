typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Src_82420D60 {
    char pad00[0x50];
    __vector4 v50;
    char pad60[0x60];
    __vector4 vC0;
} Src_82420D60;

typedef struct Obj_82420D60 {
    char pad00[0x10];
    Src_82420D60 *src;
} Obj_82420D60;

typedef struct Out_82420D60 {
    char pad00[0x10];
    __vector4 v10;
    __vector4 v20;
} Out_82420D60;
void fn_82420D60(const Obj_82420D60 *self, Out_82420D60 *out)
{
    if (self->src == 0) {
        return;
    }
    out->v10 = self->src->v50;
    out->v20 = self->src->vC0;
}
