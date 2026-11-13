typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

double fabs(double);

extern const float lbl_82196080;
extern float fn_8306EA28(float x, float z);

int fn_8306EE80(__vector4 v, float *out)
{
    float x = v.vector4_f32[0];
    float z = v.vector4_f32[2];

    if (fabs(x) > lbl_82196080 || fabs(z) > lbl_82196080) {
        *out = fn_8306EA28(x, z);
        return 1;
    }
    *out = 0.0f;
    return 0;
}
