typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Rotation_82D1F090 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
} Rotation_82D1F090;

typedef struct Transform_82D1F090 {
    Rotation_82D1F090 rotation;
    __vector4 translation;
} Transform_82D1F090;

extern Transform_82D1F090 lbl_8323B1D0;
extern void fn_82CE6010(Rotation_82D1F090 *self, const __vector4 *q);
extern void fn_82D1EEF8(void *self, const Transform_82D1F090 *t);

void fn_82D1F090(void *self, const __vector4 *q)
{
    Transform_82D1F090 t;

    t.rotation.col0 = lbl_8323B1D0.rotation.col0;
    t.rotation.col1 = lbl_8323B1D0.rotation.col1;
    t.rotation.col2 = lbl_8323B1D0.rotation.col2;
    t.translation = lbl_8323B1D0.translation;

    fn_82CE6010(&t.rotation, q);
    fn_82D1EEF8(self, &t);
}
