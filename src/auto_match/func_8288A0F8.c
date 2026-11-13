extern int atexit(void (*f)(void));
extern void *fn_82889EE0(void *self);
extern void fn_83140920(void);
extern unsigned int lbl_83213EC0;
extern char lbl_83213E94[];

void *fn_8288A0F8(void)
{
    if ((lbl_83213EC0 & 1) == 0) {
        lbl_83213EC0 |= 1;
        fn_82889EE0(lbl_83213E94);
        atexit(fn_83140920);
    }
    return lbl_83213E94;
}
