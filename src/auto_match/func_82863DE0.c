extern char lbl_832116B4[0x28];
extern void fn_82810328(const float *first, const float *second, float *out);
extern float fn_82810BE8(const float *vector);
extern float fn_8280A5D8(float value);
extern void fn_82810360(const float *source, float *out);
extern int fn_82810470(const float *vector);
extern void fn_82810B78(const float *source, float *out);
extern float fn_82810280(const float *first, const float *second);

float fn_82863DE0(unsigned int mode, const float *position, float scale, const float *direction)
{
    float normal[4];
    float delta[4];
    float distance;
    fn_82810328(position, (const float *)(lbl_832116B4 + 0xc), delta);
    distance = fn_82810BE8(delta);
    distance = fn_8280A5D8(distance * distance);
    switch (mode) {
    case 0:
        return distance * scale;
    case 1:
        fn_82810360((const float *)(lbl_832116B4 + 0x18), normal);
        if (fn_82810470(normal) == 0) {
            fn_82810B78(normal, normal);
        }
        return -((float)fn_82810280(direction, normal) * distance * scale);
    default:
        return 0.0f;
    }
}
