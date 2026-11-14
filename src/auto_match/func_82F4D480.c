typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct State_82F4D480 {
    __int64 id;
    int c, d;
    __vector4 v0;
    __vector4 v1;
} State_82F4D480;

extern State_82F4D480 lbl_83261840;

void fn_82F4D480(void *self, State_82F4D480 *out)
{
    if (out == 0)
        return;
    out->id = lbl_83261840.id;
    out->c = lbl_83261840.c;
    out->d = lbl_83261840.d;
    out->v0 = lbl_83261840.v0;
    out->v1 = lbl_83261840.v1;
}
