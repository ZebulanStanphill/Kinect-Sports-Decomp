typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Matrix3_82CEBE60 {
    __vector4 col[3];
} Matrix3_82CEBE60;

static __forceinline void Set_82CEBE60(__vector4 *out, float x, float y, float z, float w)
{
    __vector4 v;

    v.vector4_f32[0] = x;
    v.vector4_f32[1] = y;
    v.vector4_f32[2] = z;
    v.vector4_f32[3] = w;
    *out = v;
}

void fn_82CEBE60(Matrix3_82CEBE60 *self, const float *v)
{
    Set_82CEBE60(&self->col[0], 0.0f, v[2], -v[1], 0.0f);
    Set_82CEBE60(&self->col[1], -v[2], 0.0f, v[0], 0.0f);
    Set_82CEBE60(&self->col[2], v[1], -v[0], 0.0f, 0.0f);
}
