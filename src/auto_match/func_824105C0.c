typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Src_824105C0 {
    char pad00[0x50];
    __vector4 v50;
    char pad60[0x60];
    __vector4 vC0;
} Src_824105C0;

typedef struct Obj_824105C0 {
    char pad00[0x28];
    Src_824105C0 *src;
} Obj_824105C0;

typedef struct Out_824105C0 {
    char pad00[0x10];
    __vector4 v10;
    __vector4 v20;
} Out_824105C0;
void fn_824105C0(const Obj_824105C0 *self, Out_824105C0 *out)
{
    if (self->src == 0) {
        return;
    }
    out->v10 = self->src->v50;
    out->v20 = self->src->vC0;
}
