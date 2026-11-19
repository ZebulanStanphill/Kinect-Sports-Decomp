typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern double tan(double);
extern const double lbl_82079FB0;
extern float lbl_83218BEC;
extern unsigned int lbl_83218BF0;

static __forceinline float ScaledDepth(__vector4 point)
{
    return point.vector4_f32[2] * 1000.0f;
}

/* Projects a view-space point to integer screen coordinates and a scaled depth. */
void fn_829F3488(__vector4 point, int *out)
{
    float invDepth;

    if ((lbl_83218BF0 & 1) == 0) {
        lbl_83218BF0 |= 1;
        lbl_83218BEC = 40.0f / (float)tan(lbl_82079FB0);
    }
    invDepth = 1.0f / point.vector4_f32[2];
    out[0] = (int)(lbl_83218BEC * point.vector4_f32[0] * invDepth + 40.0f);
    out[1] = (int)(30.0f - lbl_83218BEC * point.vector4_f32[1] * invDepth);
    out[2] = (int)ScaledDepth(point);
}
