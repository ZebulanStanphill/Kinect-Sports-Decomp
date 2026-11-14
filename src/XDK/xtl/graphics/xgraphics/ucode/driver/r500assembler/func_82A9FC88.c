int fn_82A9FC88(int *bits, int count)
{
    int word;
    int bit;
    for (word = count / 32; word >= 0; word--) {
        if (bits[word] != -1) {
            for (bit = 31; bit >= 0; bit--) {
                if (((1 << bit) & bits[word]) == 0)
                    return word * 32 + bit;
            }
        }
    }
    return -1;
}
