extern unsigned int lbl_83298F58;
extern char lbl_83298EE0[];
extern void fn_8235A460(void);
extern void fn_8313CB08(void);
int atexit(void (*f)(void));

void *fn_8235A170(void)
{
    if ((lbl_83298F58 & 1) == 0) {
        lbl_83298F58 |= 1;
        fn_8235A460();
        atexit(fn_8313CB08);
    }
    return lbl_83298EE0;
}
