typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

double fabs(double);
double sqrt(double);

extern const float lbl_821954B0[0x28a];
extern float fn_82809D40(float y, float horizontal);

int fn_8255A0D0(__vector4 v, float *out)
{
    float y = v.vector4_f32[1];
    float horizontal = (float)sqrt(v.vector4_f32[0] * v.vector4_f32[0] + v.vector4_f32[2] * v.vector4_f32[2]);

    if (fabs(y) > lbl_821954B0[0x74] || fabs(horizontal) > lbl_821954B0[0x74]) {
        *out = fn_82809D40(-y, horizontal);
        return 1;
    }
    *out = 0.0f;
    return 0;
}
