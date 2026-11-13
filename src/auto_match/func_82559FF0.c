typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

double fabs(double);

extern const float lbl_821954B0[0x28a];
extern float fn_82809D40(float x, float z);

int fn_82559FF0(__vector4 v, float *out)
{
    float x = v.vector4_f32[0];
    float z = v.vector4_f32[2];

    if (fabs(x) > lbl_821954B0[0x74] || fabs(z) > lbl_821954B0[0x74]) {
        *out = fn_82809D40(x, z);
        return 1;
    }
    *out = 0.0f;
    return 0;
}
