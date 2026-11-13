extern float lbl_821CA45C[];


static __forceinline float rnd2(unsigned int *seed)
{
    float k = lbl_821CA45C[1];
    union { unsigned int i; float f; } value;
    *seed = *seed * 0x19660d + 0x3c6ef35f;
    value.i = *seed & 0x7fffff | 0x3f800000;
    return value.f - k;
}
float fn_82520738(unsigned int *seed, float lo, float hi)
{
    return lo + (hi - lo) * rnd2(seed);
}
