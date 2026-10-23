extern int atexit(void (*f)(void));
extern void fn_8313FCC0(void);
extern char lbl_821963BC[];
extern void *lbl_831E7E70;
extern unsigned int lbl_831E7E74;

void **fn_8267E720(void)
{
    if ((lbl_831E7E74 & 1) == 0) {
        lbl_831E7E74 |= 1;
        lbl_831E7E70 = lbl_821963BC;
        atexit(fn_8313FCC0);
    }
    return &lbl_831E7E70;
}
