extern void fn_828A2468(void *a, void *b, void *c);
extern int atexit(void (*f)(void));
extern void fn_83141040(void);
extern char lbl_83213F20[];

void fn_83128AA0(void)
{
    char tmp[1];

    fn_828A2468(lbl_83213F20, tmp, tmp);
    atexit(fn_83141040);
}
