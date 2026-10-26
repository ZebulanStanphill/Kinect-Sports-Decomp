extern void fn_828A2468(void *a, void *b, void *c);
extern int atexit(void (*f)(void));
extern void fn_83140F98(void);
extern char lbl_83213F30[];

void fn_83128AE0(void)
{
    char tmp[1];

    fn_828A2468(lbl_83213F30, tmp, tmp);
    atexit(fn_83140F98);
}
