typedef struct Color_829B2420 {
    float r;
    float g;
    float b;
    float a;
} Color_829B2420;

extern int fn_829B2110(Color_829B2420 *colors, const unsigned int *block);

int fn_829B2420(Color_829B2420 *colors, const unsigned int *block)
{
    unsigned int bits;
    int i;
    int hr;

    hr = fn_829B2110(colors, block + 2);
    if (hr < 0) {
        return hr;
    }
    bits = block[0];
    bits = (bits << 16) | (bits >> 16);
    for (i = 0; i < 8; i++) {
        colors[i].a = (float)(bits & 0xf) * (1.0f / 15.0f);
        bits >>= 4;
    }
    bits = block[1];
    bits = (bits << 16) | (bits >> 16);
    for (i = 8; i < 16; i++) {
        colors[i].a = (float)(bits & 0xf) * (1.0f / 15.0f);
        bits >>= 4;
    }
    return 0;
}
