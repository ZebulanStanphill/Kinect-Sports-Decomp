extern float lbl_8208E088;

typedef struct Color_82DDC8E0 {
    float r;
    float g;
    float b;
} Color_82DDC8E0;

static __forceinline float random_82DDC8E0(int seed)
{
    int n = (0x3039u - seed * 0x3e39b193u) & 0x7fffffff;
    return (float)n * lbl_8208E088;
}

void fn_82DDC8E0(int seed, float lo, float hi, Color_82DDC8E0 *out)
{
    float range = hi - lo;
    Color_82DDC8E0 c;

    c.r = random_82DDC8E0(seed);
    c.g = random_82DDC8E0(seed);
    c.b = random_82DDC8E0(seed);
    out->r = (c.r + lo) * range;
    out->g = (c.g + lo) * range;
    out->b = (c.b + lo) * range;
}
