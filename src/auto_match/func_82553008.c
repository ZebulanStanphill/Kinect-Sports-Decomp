/* The original copies colours as two 8-byte words (ld/std), so the type has a 64-bit view. */
typedef union Color_82553008 {
    struct {
        float r; /* 0x0 */
        float g; /* 0x4 */
        float b; /* 0x8 */
        float a; /* 0xc */
    } c;

    unsigned __int64 words[2];
} Color_82553008;

typedef struct Tint_82553008 {
    Color_82553008 color; /* 0x00 */
    char pad10[0x40 - 0x10];
    int active;  /* 0x40 */
    int pad44;   /* 0x44 */
    float pulse; /* 0x48 */
    float phase; /* 0x4c */
    int enabled; /* 0x50 */
} Tint_82553008;

extern float fn_82809868(float angle);

void fn_82553008(Tint_82553008 *self, const Color_82553008 *color)
{
    if (color->c.r == 1.0f && color->c.g == 1.0f && color->c.b == 1.0f && color->c.a == 1.0f) {
        self->active = 0;
    } else {
        self->active = 1;
        if (self->pulse != 0.0f && self->enabled != 0) {
            Color_82553008 pulsed;
            float scale = (1.0f - fn_82809868(self->phase * 6.2831855f)) * 0.475f + 0.05f;

            pulsed.c.r = (color->c.r - 1.0f) * scale + 1.0f;
            pulsed.c.g = (color->c.g - 1.0f) * scale + 1.0f;
            pulsed.c.b = (color->c.b - 1.0f) * scale + 1.0f;
            pulsed.c.a = (color->c.a - 1.0f) * scale + 1.0f;
            self->color = pulsed;
        } else {
            self->color = *color;
        }
    }
}
