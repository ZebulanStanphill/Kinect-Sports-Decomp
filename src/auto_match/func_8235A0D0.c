extern unsigned int lbl_83298F64;
extern char lbl_83298F28[];
extern void fn_8235A268(void);
extern void fn_8313CAD8(void);
int atexit(void (*f)(void));

void *fn_8235A0D0(void)
{
    if ((lbl_83298F64 & 1) == 0) {
        lbl_83298F64 |= 1;
        fn_8235A268();
        atexit(fn_8313CAD8);
    }
    return lbl_83298F28;
}
