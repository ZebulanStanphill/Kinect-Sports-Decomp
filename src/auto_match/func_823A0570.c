typedef struct Audio_823A0570 {
    char pad0[0x4];
    unsigned int active; /* 0x4 */
} Audio_823A0570;

typedef struct Speaker_823A0570 {
    char pad0[0x40];
    Audio_823A0570 *audio; /* 0x40 */
    char pad44[0xe8];
    float level; /* 0x12c */
} Speaker_823A0570;

extern void fn_8254EEB8(Audio_823A0570 *target, int sound, float volume, float pitch, float pan);

static __forceinline float Min(float a, float b)
{
    return b - a >= 0.0f ? a : b;
}

static __forceinline float Max(float a, float b)
{
    return a - b >= 0.0f ? a : b;
}

void fn_823A0570(Speaker_823A0570 *self, float *input)
{
    float volume = Max(input[2], 0.5f);
    float pitch = volume * 0.6f;
    float level = input[0] * 100.0f;

    self->level = level;
    if (self->audio->active != 0) {
        fn_8254EEB8(self->audio, (int)level, volume, Min(0.5f, pitch), input[1]);
    }
}
