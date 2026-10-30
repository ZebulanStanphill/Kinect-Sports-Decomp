extern unsigned int lbl_83298F60;
extern char lbl_83298F10[];
extern void fn_8235A310(void);
extern void fn_8313CAE8(void);
int atexit(void (*f)(void));

void *fn_8235A120(void)
{
    if ((lbl_83298F60 & 1) == 0) {
        lbl_83298F60 |= 1;
        fn_8235A310();
        atexit(fn_8313CAE8);
    }
    return lbl_83298F10;
}
