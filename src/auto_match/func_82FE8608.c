typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vexptefp(__vector4 v);
float __fsel(float c, float a, float b);

extern const float lbl_8216C698;            /* minimum level (dB) */
extern int lbl_831BC76C;                    /* current priority */
extern float lbl_831BC804;                  /* gain */
extern float lbl_831BC808;                  /* level (dB) */
extern unsigned int lbl_832643A0;           /* static guard */
extern __vector4 lbl_83264390;              /* static: log2(10) / 20 */
extern const __vector4 lbl_8217BAE0;

extern double fn_82F655D8(double x, double y);   /* pow */
extern float fn_8301E4B8(float level);

static __forceinline __vector4 Replicate(float value)
{
    return __vspltw(__lvlx(&value, 0), 0);
}

static __forceinline __vector4 ReplicateP(const float *p)
{
    return __vspltw(__lvlx(p, 0), 0);
}

int fn_82FE8608(float level, int priority)
{
    if (level < lbl_8216C698 || level > 0.0f)
        return 0x1f;
    if (priority <= lbl_831BC76C) {
        float a, b, gain;
        __vector4 v[2];

        lbl_831BC76C = priority;
        a = (float)fn_82F655D8(10.0, level * 0.05f);
        b = fn_8301E4B8(level);
        v[0] = Replicate(level);
        if ((lbl_832643A0 & 1) == 0) {
            lbl_832643A0 |= 1;
            lbl_83264390 = lbl_8217BAE0;
        }
        v[0] = __vexptefp(__vmulfp(v[0], lbl_83264390));
        lbl_831BC808 = level;
        gain = __fsel(a - b, a, b);
        lbl_831BC804 = __fsel(gain - v[0].vector4_f32[0], gain, v[0].vector4_f32[0]);
    }
    return 1;
}
