
extern unsigned char lbl_832760AA, lbl_832760AB;
extern unsigned lbl_832760B8, lbl_832760BC;
extern void fn_8225F6D0(void);
extern void *fn_8245AE18(void);
extern void fn_8245B168(void *, void *, int);

void fn_824B70F0(void)
{
    unsigned a, b, uninitialized;
    unsigned short value;
    void *stream;
    if (lbl_832760AA) {
        if (!lbl_832760AB)
            fn_8225F6D0();
        a = lbl_832760B8;
        b = lbl_832760BC;
    } else {
        {
            unsigned x, y;
            b = y;
            a = x;
        }
        lbl_832760B8 = 0;
        lbl_832760BC = 0;
    }
    stream = fn_8245AE18();
    value = (unsigned short)a;
    fn_8245B168(stream, &value, 2);
    value = (unsigned short)b;
    fn_8245B168(stream, &value, 2);
}
