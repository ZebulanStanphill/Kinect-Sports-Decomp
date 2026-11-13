extern int atexit(void (*f)(void));
extern void *fn_8305B500(void *self);
extern void fn_83141E20(void);
extern unsigned int lbl_83265060;
extern char lbl_83265058[];

void *fn_83056560(void)
{
    if ((lbl_83265060 & 1) == 0) {
        lbl_83265060 |= 1;
        fn_8305B500(lbl_83265058);
        atexit(fn_83141E20);
    }
    return lbl_83265058;
}
