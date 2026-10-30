extern unsigned int lbl_83298F68;
extern char lbl_83298F40[];
extern void fn_8235A1C0(void);
extern void fn_8313CAC8(void);
int atexit(void (*f)(void));

void *fn_8235A080(void)
{
    if ((lbl_83298F68 & 1) == 0) {
        lbl_83298F68 |= 1;
        fn_8235A1C0();
        atexit(fn_8313CAC8);
    }
    return lbl_83298F40;
}
