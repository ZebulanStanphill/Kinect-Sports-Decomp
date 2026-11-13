extern int atexit(void (*f)(void));
extern void fn_83141448(void);
extern char lbl_82024D24[];
extern void *lbl_83214424;
extern unsigned int lbl_83214428;

void **fn_828D48E8(void)
{
    if ((lbl_83214428 & 1) == 0) {
        lbl_83214428 |= 1;
        lbl_83214424 = lbl_82024D24;
        atexit(fn_83141448);
    }
    return &lbl_83214424;
}
