typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_82D96668 {
    char pad00[0x20];
    __vector4 v20;
    __vector4 v30;
} Obj_82D96668;

void fn_82D96668(Obj_82D96668 *self, const __vector4 *a, const __vector4 *b)
{
    self->v20 = *a;
    self->v30 = *b;
}
