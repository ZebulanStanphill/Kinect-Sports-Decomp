extern void fn_8265C290(void *a, void *b, void *c);
extern int atexit(void (*f)(void));
extern void fn_8313FB70(void);
extern char lbl_831E7A04[];

void fn_831275E0(void)
{
    char tmp[1];

    fn_8265C290(lbl_831E7A04, tmp, tmp);
    atexit(fn_8313FB70);
}
