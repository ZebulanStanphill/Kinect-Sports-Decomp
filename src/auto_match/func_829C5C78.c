typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
__vector4 __vspltisw(int value);
double sqrt(double);

extern const double lbl_82005710;

__vector4 fn_829C5C78(const int *v)
{
    __vector4 r;
    double x = v[0];
    double y = v[1];
    double z = v[2];
    double len = sqrt(x * x + y * y + z * z);
    double inv;

    if (len != lbl_82005710) {
        inv = 1.0 / len;
        r.vector4_f32[3] = 0.0f;
        r.vector4_f32[1] = (float)(y * inv);
        r.vector4_f32[2] = (float)(z * inv);
        r.vector4_f32[0] = -(float)(x * inv);
        return r;
    }
    return __vspltisw(0);
}
