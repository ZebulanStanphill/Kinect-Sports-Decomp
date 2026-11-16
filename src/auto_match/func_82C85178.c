void fn_82C85178(short *values, int count, const int *scale)
{
    int multiplier = scale[0];
    int bias = scale[1];
    int index;
    values[0] = values[0] * scale[4];
    for (index = 1; index < count; index++) {
        int value = values[index];
        if (value != 0) {
            if (value > 0) {
                values[index] = value * multiplier + bias;
            } else {
                values[index] = value * multiplier - bias;
            }
        }
    }
}
