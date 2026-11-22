typedef struct Channel_823D5728 {
    float rate;      /* 0x0 */
    float startTime; /* 0x4 */
    int mode;        /* 0x8 */
    float target;    /* 0xc */
    int state;       /* 0x10 */
    char pad14[0x4];
} Channel_823D5728;

typedef struct Source_823D5728 {
    char pad0[0x17c];
    Channel_823D5728 channels[4]; /* 0x17c */
} Source_823D5728;

typedef struct Blender_823D5728 {
    char pad0[0xc];
    Source_823D5728 *source; /* 0xc */
    char pad10[0x2c];
    float weights[4]; /* 0x3c */
    char pad4C[0x48];
    int frame; /* 0x94 */
} Blender_823D5728;

void fn_823D5728(Blender_823D5728 *self)
{
    int i;

    for (i = 0; i < 4; i++) {
        Channel_823D5728 *channel = &self->source->channels[i];

        if (channel->mode == 3 && (float)self->frame > channel->startTime) {
            float weight = channel->rate + self->weights[i];
            weight = weight >= 0.0f ? weight : 0.0f;
            self->weights[i] = weight - 1.0f >= 0.0f ? 1.0f : weight;
        }
    }
}
