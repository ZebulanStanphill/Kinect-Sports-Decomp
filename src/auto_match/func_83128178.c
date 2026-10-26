extern char lbl_832116F8[];
extern void fn_82811058(void *p);
extern void fn_831400D8(void);
extern int atexit(void (*func)(void));

void fn_83128178(void)
{
    fn_82811058(lbl_832116F8);
    atexit(fn_831400D8);
}
