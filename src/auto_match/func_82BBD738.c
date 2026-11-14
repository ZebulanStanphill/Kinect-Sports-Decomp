typedef union FloatBits_82BBD738 {
    float f;
    int i;
} FloatBits_82BBD738;

int fn_82BBD738(float scale, int value)
{
    FloatBits_82BBD738 v;
    v.f = (float)value * scale;
    if ((v.i & 0x7f800000) > 0x4e800000) {
        if ((v.i & 0x80000000) != 0) {
            return 0x80000000;
        }
        return 0x7fffffff;
    }
    return (int)v.f;
}
