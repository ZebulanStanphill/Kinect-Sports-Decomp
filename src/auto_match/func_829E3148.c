typedef struct Self_829E3148 {
    char pad0[0x10];
    float f10;
    char pad14[0x2c];
    char sub[0x14];
    float f54;
    char pad58[8];
    float f60;
    char pad64[8];
    unsigned char ready;
    unsigned char started;
} Self_829E3148;

extern float lbl_8315C704;
static const float kLevel_829E3148 = 100.0f;

extern int fn_829E53C0(void *sub, float a, float b, float c);
extern void *fn_829DB740(void);
extern int fn_829E3820(void *sub, float v);

int fn_829E3148(Self_829E3148 *self)
{
    int hr;
    if (self->ready == 0) {
        return 0x8000ffff;
    }
    fn_829E53C0(self->sub, kLevel_829E3148, self->f54, lbl_8315C704);
    fn_829DB740();
    hr = fn_829E3820(self->sub, kLevel_829E3148);
    if (hr >= 0) {
        self->f60 = kLevel_829E3148;
        self->f10 = kLevel_829E3148;
        self->started = 1;
        hr = 0;
    }
    return hr;
}
