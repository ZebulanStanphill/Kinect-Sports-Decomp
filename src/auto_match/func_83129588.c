extern void fn_828EEB88(void *a, void *b, void *c);
extern int atexit(void (*f)(void));
extern void fn_83141A20(void);
extern char lbl_83214554[];

void fn_83129588(void)
{
    char tmp[1];

    fn_828EEB88(lbl_83214554, tmp, tmp);
    atexit(fn_83141A20);
}
