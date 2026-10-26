extern char lbl_831E7A70[];
extern void fn_82669F50(void *p);
extern void fn_8313FC20(void);
extern int atexit(void (*func)(void));

void fn_83127700(void)
{
    fn_82669F50(lbl_831E7A70);
    atexit(fn_8313FC20);
}
