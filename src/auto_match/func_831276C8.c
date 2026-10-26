extern char lbl_831E7A5C[];
extern void fn_82669E38(void *p);
extern void fn_8313FBF8(void);
extern int atexit(void (*func)(void));

void fn_831276C8(void)
{
    fn_82669E38(lbl_831E7A5C);
    atexit(fn_8313FBF8);
}
