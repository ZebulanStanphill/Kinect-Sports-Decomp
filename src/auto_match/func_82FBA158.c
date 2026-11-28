typedef struct BandParams_82FBA158 {
    float values[4];       /* 0x00 */
    unsigned char enabled; /* 0x10 */
} BandParams_82FBA158;

typedef struct Params_82FBA158 {
    int pad0;
    BandParams_82FBA158 bands[3]; /* 0x04 */
    float gainDb;                 /* 0x40 */
    int pad44;
    unsigned char dirty[3]; /* 0x48 */
} Params_82FBA158;

typedef struct BandState_82FBA158 {
    float values[5];
} BandState_82FBA158;

typedef struct History_82FBA158 {
    float values[4];
} History_82FBA158;

typedef struct Effect_82FBA158 {
    int pad0;
    BandState_82FBA158 bands[3]; /* 0x04 */
    Params_82FBA158 *params;     /* 0x40 */
    unsigned int frameCount;     /* 0x44 */
    int pad48;
    History_82FBA158 *history; /* 0x4c */
    float gain;                /* 0x50 */
} Effect_82FBA158;

extern double fn_82F655D8(double x, double y);
extern void fn_82FB9918(Effect_82FBA158 *self, int band, BandParams_82FBA158 *params);
extern void fn_82FB9FC0(void *buffer, BandState_82FBA158 *band, History_82FBA158 *history,
                        unsigned int frameCount);
extern void fn_82FB9DE8(void *buffer, float from, float to, unsigned int frameCount);
extern void fn_82FB9EF0(void *buffer, float gain, unsigned int frameCount);

void fn_82FBA158(Effect_82FBA158 *self, void *buffer)
{
    unsigned char enabled0;
    unsigned char enabled1;
    unsigned char enabled2;
    float gain;
    BandParams_82FBA158 *band;

    if (self->frameCount == 0) {
        return;
    }
    band = &self->params->bands[0];
    enabled0 = band->enabled;
    if (self->params->dirty[0]) {
        fn_82FB9918(self, 0, band);
        self->params->dirty[0] = 0;
    }
    band = &self->params->bands[1];
    enabled1 = band->enabled;
    if (self->params->dirty[1]) {
        fn_82FB9918(self, 1, band);
        self->params->dirty[1] = 0;
    }
    band = &self->params->bands[2];
    enabled2 = band->enabled;
    if (self->params->dirty[2]) {
        fn_82FB9918(self, 2, band);
        self->params->dirty[2] = 0;
    }
    gain = (float)fn_82F655D8(10.0, self->params->gainDb * 0.05f);
    if (enabled0) {
        fn_82FB9FC0(buffer, &self->bands[0], self->history, self->frameCount);
    }
    if (enabled1) {
        fn_82FB9FC0(buffer, &self->bands[1], self->history + self->frameCount, self->frameCount);
    }
    if (enabled2) {
        fn_82FB9FC0(buffer, &self->bands[2], self->history + self->frameCount * 2, self->frameCount);
    }
    if (gain != self->gain) {
        fn_82FB9DE8(buffer, self->gain, gain, self->frameCount);
        self->gain = gain;
    } else {
        fn_82FB9EF0(buffer, self->gain, self->frameCount);
    }
}
