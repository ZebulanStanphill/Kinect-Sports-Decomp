void fn_82F07F08(unsigned char *self, short *input, short *output)
{
    int scale = *(int *)(self + 0x5b4);
    unsigned char index = 1;
    int bias = *(int *)(self + 0x5b8);
    do {
        int value = input[index];
        if (value != 0) {
            int product = value * scale;
            if (value < 0) {
                output[index] = (value * scale) - bias;
            } else {
                output[index] = product + bias;
            }
        } else {
            output[index] = 0;
        }
        index++;
    } while (index < 64);
}
