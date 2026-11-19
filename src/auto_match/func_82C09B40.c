extern void *memset(void *dest, int value, unsigned int size);

int fn_82C09B40(const unsigned char *text, unsigned int size, int *values, unsigned short count)
{
    unsigned short index;
    unsigned short digits;
    unsigned char negative;
    unsigned short i;
    unsigned int length;

    index = 0;
    digits = 0;
    negative = 0;
    if (values == 0) {
        return 1;
    }
    memset(values, 0, count * sizeof(int));
    length = size >> 1;
    for (i = 0; i < length; i++) {
        unsigned char c = *text;
        if (c == ',') {
            if (negative == 1) {
                values[index] = -values[index];
                negative = 0;
            }
            if (index >= count - 1) {
                return 1;
            }
            index++;
            digits = 0;
        } else if (c == '-') {
            if (digits != 0) {
                return 1;
            }
            negative = 1;
        } else if (c >= '0' && c <= '9') {
            digits++;
            values[index] = values[index] * 10 + c - '0';
        } else {
            if (c != 0) {
                return 1;
            }
            if (negative == 1) {
                values[index] = -values[index];
                negative = 0;
            }
        }
        text += 2;
    }
    return index != count - 1;
}
