typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Rotation_82D8B2D8 {
    __vector4 cols[3];
} Rotation_82D8B2D8;

typedef struct Transform_82D8B2D8 {
    Rotation_82D8B2D8 rotation;     /* 0x00 */
    __vector4 translation;          /* 0x30 */
} Transform_82D8B2D8;

typedef struct QTransform_82D8B2D8 {
    char pad00[0x10];
    __vector4 translation;          /* 0x10 */
    __vector4 rotation;             /* 0x20 quaternion */
} QTransform_82D8B2D8;

/* hkQuaternion::set(const hkRotation &), out of line */
extern void fn_82CE5990(__vector4 *quat, const Rotation_82D8B2D8 *rotation);

void fn_82D8B2D8(QTransform_82D8B2D8 *self, const Transform_82D8B2D8 *transform)
{
    self->translation = transform->translation;
    fn_82CE5990(&self->rotation, &transform->rotation);
}
