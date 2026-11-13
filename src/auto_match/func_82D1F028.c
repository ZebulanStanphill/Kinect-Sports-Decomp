typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Rotation_82D1F028 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
} Rotation_82D1F028;

typedef struct Transform_82D1F028 {
    Rotation_82D1F028 rotation;
    __vector4 translation;
} Transform_82D1F028;

extern Transform_82D1F028 lbl_8323B1D0;
extern void fn_82D1EEF8(void *self, const Transform_82D1F028 *t);

/* Sets the transform to the given rotation with zero translation. */
void fn_82D1F028(void *self, const Rotation_82D1F028 *r)
{
    Transform_82D1F028 t;

    t.rotation.col0 = r->col0;
    t.rotation.col1 = r->col1;
    t.rotation.col2 = r->col2;
    t.translation = lbl_8323B1D0.translation;

    fn_82D1EEF8(self, &t);
}
