int fn_82F11878(void *self, unsigned short *output, const unsigned short *coefficients, const int *scanOrder,
                int count)
{
    short position;
    short zeroRun;
    int index;

    output[0] = coefficients[0];
    position = 2;
    zeroRun = 0;
    output[1] = 0;
    for (index = 1; index < count; index++) {
        unsigned short value = coefficients[scanOrder[index]];
        if (value == 0) {
            zeroRun++;
        } else {
            output[position++] = value;
            output[position++] = zeroRun;
            zeroRun = 0;
        }
    }
    return position;
}
