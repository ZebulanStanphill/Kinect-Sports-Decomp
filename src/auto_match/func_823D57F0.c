typedef struct Channel_823D57F0 {
    float target; /* 0x0 */
    int state;    /* 0x4 */
    char pad8[0x10];
} Channel_823D57F0;

typedef struct Source_823D57F0 {
    char pad0[0x188];
    Channel_823D57F0 channels[4]; /* 0x188 */
} Source_823D57F0;

typedef struct Blender_823D57F0 {
    char pad0[0xc];
    Source_823D57F0 *source; /* 0xc */
    char pad10[0x2c];
    float weights[4]; /* 0x3c */
} Blender_823D57F0;

void fn_823D57F0(Blender_823D57F0 *self)
{
    int i;

    for (i = 0; i < 4; i++) {
        if (self->source->channels[i].state == 1) {
            float weight = self->weights[i] - self->source->channels[i].target;
            weight = weight >= 0.0f ? weight : 0.0f;
            self->weights[i] = weight - 1.0f >= 0.0f ? 1.0f : weight;
        }
    }
}
