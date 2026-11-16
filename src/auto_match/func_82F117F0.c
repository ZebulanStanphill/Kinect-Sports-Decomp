typedef struct Scale_82F117F0 {
    int values[13];
} Scale_82F117F0;

typedef struct Context_82F117F0 {
    char padding[0x6d24];
    Scale_82F117F0 *scales; /* 0x6d24 */
} Context_82F117F0;

void fn_82F117F0(Context_82F117F0 *self, const short *input, short *output, unsigned int count,
                 unsigned int selected)
{
    const int *scale = self->scales[selected].values;
    int multiplier = scale[0];
    int bias = scale[1];
    unsigned int index;
    output[0] = input[0] * scale[10];
    for (index = 1; index < count; index++) {
        int value = input[index];
        if (value != 0) {
            if (value < 0) {
                output[index] = value * multiplier - bias;
            } else {
                output[index] = value * multiplier + bias;
            }
        } else {
            output[index] = 0;
        }
    }
}
