extern void *memset(void *dst, int value, unsigned int size);

void fn_82B439A0(unsigned int *bits, unsigned int count)
{
    unsigned int words;
    unsigned int whole;

    if (count != 0) {
        words = count >> 5;
        whole = count & ~31u;
        if (words != 0) {
            memset(bits, 0xff, words * 4);
        }
        if (whole != count) {
            bits[words] = (1 << (count - whole)) - 1;
        }
    }
}
