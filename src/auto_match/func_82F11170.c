void fn_82F11170(const short *input, short *output, unsigned int count, const int *scale)
{
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
