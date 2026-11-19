typedef struct Noise_82E330D8 {
    int value;         /* 0x21c */
    unsigned int seed; /* 0x220 */
} Noise_82E330D8;

typedef struct Generator_82E330D8 {
    char pad0[0x100];
    int count; /* 0x100 */
    char pad104[0x20];
    float gain; /* 0x124 */
    char pad128[0xf4];
    Noise_82E330D8 noise; /* 0x21c */
} Generator_82E330D8;

void fn_82E330D8(Generator_82E330D8 **ref, float *out)
{
    Generator_82E330D8 *gen = *ref;
    int i = 0;

    if (gen->count > 0) {
        Noise_82E330D8 *noise = &gen->noise;

        do {
            int previous = noise->value;
            int seed = noise->seed * 0x19660d + 0x3c6ef35f;
            int quarter;

            i++;
            noise->seed = seed;
            quarter = seed >> 2;
            noise->value = quarter + (quarter >> 2);
            *out++ = (float)(noise->value - previous) * gen->gain * (1.0f / 536870912.0f);
        } while (i < gen->count);
    }
}
