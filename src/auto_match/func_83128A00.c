extern void fn_828A2240(void *a, void *b, void *c);
extern int atexit(void (*f)(void));
extern void fn_83140F50(void);
extern char lbl_83213F00[];

void fn_83128A00(void)
{
    char tmp[1];

    fn_828A2240(lbl_83213F00, tmp, tmp);
    atexit(fn_83140F50);
}
