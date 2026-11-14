extern unsigned int *lbl_83217B88;
extern unsigned int *lbl_83217BA4;

unsigned char fn_829E1A80(unsigned int a, unsigned int b, unsigned int c, unsigned int *pair,
                          unsigned int *out, unsigned int flags, unsigned int *err)
{
    int hr = (*(int (**)(void *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
                         unsigned int, void *))(*(int *)lbl_83217BA4 + 4))(lbl_83217BA4, a, b, c, pair[0],
                                                                           pair[1], flags, lbl_83217B88);
    if (hr < 0) {
        *err |= 1;
        return 0;
    }
    *out = *lbl_83217B88;
    out[2] = lbl_83217B88[2];
    out[1] = lbl_83217B88[1];
    out[3] = lbl_83217B88[3];
    return 1;
}
