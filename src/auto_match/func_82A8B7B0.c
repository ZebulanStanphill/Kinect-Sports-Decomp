typedef struct Desc_82A8B7B0 {
    float f0;
    float scale;
    unsigned int a;
    unsigned int b;
    unsigned int f10;
    float f14;
    unsigned int f18;
    float f1c;
} Desc_82A8B7B0;

long fn_82A8B7B0(float scale, unsigned int unused, unsigned int a, unsigned int b, Desc_82A8B7B0 *out)
{
    if (out == 0) {
        return 0x80070057;
    }
    out->scale = scale;
    out->a = a;
    out->b = b;
    out->f10 = 0;
    out->f18 = 0;
    out->f0 = 0.0f;
    out->f14 = 0.0f;
    out->f1c = 0.0f;
    return 0;
}
