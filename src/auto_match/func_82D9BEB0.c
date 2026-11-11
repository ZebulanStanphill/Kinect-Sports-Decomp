// Havok shape phantom setTransformAndLinearCast shape: copies the rotation part (three
// columns) of the transform into the object at +0xb0 and forwards the translation and
// the cast arguments to the position version fn_82D9BCA8.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Rotation_82D9BEB0 {
    __vector4 col0;
    __vector4 col1;
    __vector4 col2;
} Rotation_82D9BEB0;

typedef struct Transform_82D9BEB0 {
    Rotation_82D9BEB0 rotation;        // 0x00
    __vector4 translation;       // 0x30
} Transform_82D9BEB0;

typedef struct Obj_82D9BEB0 {
    char pad00[0xb0];
    Rotation_82D9BEB0 rotation;        // 0xb0
} Obj_82D9BEB0;

void fn_82D9BCA8(Obj_82D9BEB0 *self, const __vector4 *position, const void *input, void *castCollector,
                 void *startCollector);

void fn_82D9BEB0(Obj_82D9BEB0 *self, const Transform_82D9BEB0 *transform, const void *input,
                 void *castCollector, void *startCollector)
{
    Rotation_82D9BEB0 *rotation = &self->rotation;

    rotation->col0 = transform->rotation.col0;
    rotation->col1 = transform->rotation.col1;
    rotation->col2 = transform->rotation.col2;
    fn_82D9BCA8(self, &transform->translation, input, castCollector, startCollector);
}
