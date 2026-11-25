typedef struct Output_829E4C68 {
    char bytes[0x14];
} Output_829E4C68;

typedef struct Cache_829E4C68 {
    char pad[0x34];
    Output_829E4C68 *current;
    char pad2[0x10];
    Output_829E4C68 output;
} Cache_829E4C68;

extern Cache_829E4C68 lbl_83217B08;
extern const float lbl_820577E8;
extern int fn_829E37E0(int, float *);
extern int fn_829E3800(int, float *);
extern int fn_829E37F0(void *, float *);
extern int fn_829E37D0(float *, float *);
extern int fn_829DAFC8(int, float, float, float, float *, float *, float *, unsigned int *);
extern int fn_829E3810(char *, float);
extern int fn_829E3820(char *, float);
extern int fn_829E3830(char *, float);
extern int fn_829E3840(char *, float);

int fn_829E4C68(void *unused, int mode, void *settings, unsigned int *out)
{
    float scale;
    float y;
    float x;
    float width;
    float z;
    float adjustment;
    float height;
    unsigned int resultValue;
    int result;

    result = fn_829E37E0((int)settings, &x);
    if (result < 0) {
        return result;
    }
    result = fn_829E3800((int)settings, &y);
    if (result < 0) {
        return result;
    }
    result = fn_829E37F0(settings, &z);
    if (result < 0) {
        return result;
    }
    result = fn_829DAFC8(mode != 0, x, y, z, &width, &scale, &height, &resultValue);
    if (result < 0) {
        return result;
    }
    if (mode == 1) {
        x = width;
        y = scale;
        z = height;
        if (x != 0.0f && y != 0.0f) {
            fn_829E3810(settings, lbl_820577E8 / (x * y));
        }
    }
    if (!(scale > 0.0f)) {
        return 0x8000ffff;
    }

    adjustment = 0.0f;
    result = fn_829E37D0(settings, &adjustment);
    if (result >= 0) {
        fn_829E3810(lbl_83217B08.output.bytes, ((x * y) * adjustment) / (width * scale));
        fn_829E3820(lbl_83217B08.output.bytes, width);
        fn_829E3830(lbl_83217B08.output.bytes, height);
        fn_829E3840(lbl_83217B08.output.bytes, scale);
        lbl_83217B08.current = &lbl_83217B08.output;
        *out = resultValue;
        result = 0;
    }
    return result;
}
