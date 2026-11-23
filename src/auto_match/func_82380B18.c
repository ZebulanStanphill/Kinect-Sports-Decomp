typedef struct Audio_82380B18 {
    char pad000[0x4];
    unsigned int active; /* 0x004 */
    char pad008[0x1c4];
    int sound;    /* 0x1CC */
    float level;  /* 0x1D0 */
    int playing;  /* 0x1D4 */
    float fade;   /* 0x1D8 */
    float volume; /* 0x1DC */
    float pitch;  /* 0x1E0 */
} Audio_82380B18;

typedef struct Speaker_82380B18 {
    char pad000[0xa8];
    float maximumPitch; /* 0x0A8 */
    char pad0AC[0x140];
    Audio_82380B18 *audio; /* 0x1EC */
    char pad1F0[0x10];
    float loopLevel; /* 0x200 */
    char pad204[0x4];
    float level; /* 0x208 */
    char pad20C[0x4];
    int loopSound; /* 0x210 */
} Speaker_82380B18;

extern void fn_8254EEB8(Audio_82380B18 *target, int sound, float volume, float pitch, float pan);

static __forceinline float Min(float a, float b)
{
    return b - a >= 0.0f ? a : b;
}

void fn_82380B18(Speaker_82380B18 *self, float *input)
{
    float level = input[0] * 100.0f;
    float pitch = input[2] * 0.6f;
    float maximum;
    float loop;
    int sound;
    Audio_82380B18 *audio;

    self->level = level;
    maximum = self->maximumPitch;
    if (self->audio->active != 0) {
        fn_8254EEB8(self->audio, (int)level, input[2], Min(maximum, pitch), input[1]);
    }
    loop = input[3];
    if (loop > 0.0f) {
        audio = self->audio;
        self->loopLevel = loop;
        sound = self->loopSound;
        if (audio->active != 0) {
            audio->level = loop;
            audio->fade = 1.5f;
            audio->sound = sound;
            audio->playing = 1;
            audio->volume = 1.0f;
            audio->pitch = 1.0f;
        }
    }
}
