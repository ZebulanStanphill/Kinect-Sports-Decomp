extern unsigned char lbl_8315C720[];

void fn_829E3AB8(int *tab)
{
    int i;

    for (i = 0; i < 256; i++) {
        tab[i] = lbl_8315C720[i] * 0x4d;
        tab[i + 256] = lbl_8315C720[i] * 0x96;
        tab[i + 512] = lbl_8315C720[i] * 0x1d + 0x80;
    }
}
