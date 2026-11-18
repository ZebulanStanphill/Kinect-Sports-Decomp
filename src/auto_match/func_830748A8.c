typedef struct Weights_830748A8 {
    char padding000[0x3c0];
    float levels[20];  /* 0x3c0 */
    float weights[20]; /* 0x410 */
    char padding460[0x8a8];
    unsigned char enabled; /* 0xd08 */
} Weights_830748A8;

extern void fn_830743D0(Weights_830748A8 *self, void *input);
extern void fn_83074490(Weights_830748A8 *self, void *input, float time);
extern void fn_83075D90(void *output, int index, float value);
extern float fn_8306F3A8(Weights_830748A8 *self, void *input, float time);

float fn_830748A8(Weights_830748A8 *self, void *input, void *output, float time)
{
    int index;
    float total;

    fn_830743D0(self, input);
    if (self->enabled) {
        fn_83074490(self, input, time);
    }
    total = 0.0f;
    for (index = 0; index < 20; index++) {
        float value = self->levels[index] * self->weights[index];
        total += value;
        fn_83075D90(output, index, value);
    }
    return fn_8306F3A8(self, input, time) * (total * 0.05f);
}
