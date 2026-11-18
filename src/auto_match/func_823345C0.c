extern float lbl_821CA45C[];
extern unsigned int lbl_83265A28;

static __forceinline float Random(void)
{
    union {
        unsigned int i;
        float f;
    } value;

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    value.i = lbl_83265A28 & 0x7fffff | 0x3f800000;
    return value.f - lbl_821CA45C[1];
}

typedef struct Range_823345C0 {
    char pad0[0xaac];
    float min; /* 0xaac */
    float max; /* 0xab0 */
} Range_823345C0;

typedef struct Config_823345C0 {
    char pad0[0x238];
    Range_823345C0 **range; /* 0x238 */
} Config_823345C0;

typedef struct Timer_823345C0 {
    char pad0[0xc];
    int mode; /* 0x0c */
    char pad10[0x214];
    int expired;             /* 0x224 */
    float elapsed;           /* 0x228 */
    float previous;          /* 0x22c */
    Config_823345C0 *config; /* 0x230 */
    float duration;          /* 0x234 */
} Timer_823345C0;

void fn_823345C0(Timer_823345C0 *self)
{
    Range_823345C0 **range = self->config->range;

    if (self->duration == 0.0f && self->mode == 1) {
        float min = (*range)->min;
        float max = (*range)->max;
        self->duration = min + (max - min) * Random();
    }
    if (self->elapsed > self->duration) {
        self->duration = 0.0f;
        self->elapsed = 0.0f;
        self->previous = 0.0f;
        self->expired = 1;
    }
}
