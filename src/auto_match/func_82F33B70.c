unsigned int fn_82F33B70(unsigned short count, unsigned int initial, unsigned int *factors)
{
    unsigned int product;
    unsigned short index;
    unsigned int value;
    unsigned int high;
    unsigned int low;
    unsigned int partial;
    unsigned int last;

    product = 0;
    if (count != 0) {
        product = initial;
        index = 0;
        while (index < count) {
            value = *factors;
            high = product >> 16;
            low = product;
            if (high == 0 && (unsigned short)(value >> 16) == 0) {
                product = (value & 0xffff) * (product & 0xffff);
            } else {
                if ((product >> 16) != 0 && (unsigned short)(value >> 16) != 0) {
                    return -1;
                }
                if ((unsigned short)(value >> 16) != 0) {
                    low = value;
                    value = product;
                }
                value &= 0xffff;
                partial = (low >> 16) * value;
                if ((unsigned short)(partial >> 16) != 0) {
                    return -1;
                }
                last = (low & 0xffff) * value;
                product = (partial << 16) + last;
                if (product < last) {
                    return -1;
                }
            }
            factors += 2;
            ++index;
        }
    }
    return product;
}
