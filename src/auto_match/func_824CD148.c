extern unsigned int lbl_83298E9C;
extern char lbl_83298E84[];
extern void fn_824CD198(void);
extern void fn_8313ECD0(void);
int atexit(void (*f)(void));

void *fn_824CD148(void)
{
    if ((lbl_83298E9C & 1) == 0) {
        lbl_83298E9C |= 1;
        fn_824CD198();
        atexit(fn_8313ECD0);
    }
    return lbl_83298E84;
}
