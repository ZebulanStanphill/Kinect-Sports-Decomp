typedef struct Value_8306D020 {
    float v[8];
} Value_8306D020;

typedef struct Channel_8306D020 {
    int state; /* 0x0000 */
    char pad4[0x5994 - 4];
} Channel_8306D020;

typedef struct Self_8306D020 {
    char pad0[0xD80];
    int channel;          /* 0xD80 */
    float duration;       /* 0xD84 */
    float elapsed;        /* 0xD88 */
    Value_8306D020 value; /* 0xD8C */
} Self_8306D020;

extern Value_8306D020 fn_82A8CFD0(int *state, Value_8306D020 *out, float t);
extern float fn_8306E890(float x, float t);
extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);
extern void fn_82A92220(void *impl, void *desc, float t, unsigned int size, void *owner, unsigned int c,
                        void *d, unsigned int e, void *f, void *g, void *h);

void fn_8306D020(Channel_8306D020 *channels, Self_8306D020 *self, float dt)
{
    float smoothing;
    float ratio;
    float level;

    self->value = fn_82A8CFD0(&channels[self->channel].state, &self->value, dt);
    self->elapsed += dt;
    smoothing = fn_8306E890(0.01f, dt);
    if (self->duration > 0.0f) {
        ratio = self->elapsed / self->duration;
    } else {
        ratio = 1.0f;
    }
    level = fn_82539560(ratio * ratio * ratio, 0.0f, self->duration, smoothing, 1.0f);
    fn_82A92220(&channels[self->channel], &self->value, level, 0x48, self, 0, 0, 0, 0, 0, 0);
}
