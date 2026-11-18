typedef struct Color_82BBEEF0 {
    float r;
    float g;
    float b;
    float a;
} Color_82BBEEF0;

int fn_82BBEEF0(Color_82BBEEF0 *colors, const unsigned int *block)
{
    unsigned int bits;
    int i;

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
