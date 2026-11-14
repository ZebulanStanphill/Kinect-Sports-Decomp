int fn_82935FA0(void *ctx, unsigned int code)
{
    unsigned int result = 0;
    int last = 0;
    int i = 0;
    int shift = 0;
    do {
        int v = (code >> shift) & 7;
        if (v >= 1 && v <= 4) {
            if (v <= last)
                return -1;
            result |= v << (v * 3 - 3);
            last = v;
        } else {
            if (v != 0) {
                if (i != last)
                    return -1;
                last++;
            }
            result |= v << shift;
        }
        shift += 3;
        i++;
    } while (shift < 12);
    return result;
}
