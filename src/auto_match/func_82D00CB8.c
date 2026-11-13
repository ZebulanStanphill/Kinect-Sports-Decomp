typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Rotation_82D00CB8 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
} Rotation_82D00CB8;

typedef struct Transform_82D00CB8 {
    Rotation_82D00CB8 rotation;
    __vector4 translation;
} Transform_82D00CB8;

extern __vector4 lbl_8323B1A0;
extern void fn_82D06B30(Transform_82D00CB8 *t);
extern void fn_82D007A0(Transform_82D00CB8 *t, void *a);

void fn_82D00CB8(const Rotation_82D00CB8 *r, void *a)
{
    Transform_82D00CB8 t;

    t.rotation.col0 = r->col0;
    t.rotation.col1 = r->col1;
    t.rotation.col2 = r->col2;
    t.translation = lbl_8323B1A0;

    fn_82D06B30(&t);
    fn_82D007A0(&t, a);
}
