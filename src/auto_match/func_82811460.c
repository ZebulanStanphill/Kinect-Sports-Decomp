int fn_82811460(unsigned int bits)
{
    int index;
    unsigned int width;
    unsigned int mask;

    if (bits != 0) {
        width = 16;
        mask = 0xffff;
        index = 0;
        do {
            if (((mask << index) & bits) == 0) {
                index += width;
            }
            width >>= 1;
            mask >>= width;
        } while (width != 0);
    } else {
        index = -1;
    }
    return index;
}
