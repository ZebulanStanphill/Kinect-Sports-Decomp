typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Plane_82F5E7C8 {
    __vector4 normal;
    float d;
} Plane_82F5E7C8;

extern float fn_82F534A0(__vector4 a, __vector4 b);
extern __vector4 fn_82F534D8(float x, float y, float z, float w);

Plane_82F5E7C8 *fn_82F5E7C8(Plane_82F5E7C8 *self, __vector4 normal, __vector4 point)
{
    float dot = fn_82F534A0(point, normal);
    self->normal = fn_82F534D8(normal.vector4_f32[0], normal.vector4_f32[1], normal.vector4_f32[2], 0.0f);
    self->d = -dot;
    return self;
}
