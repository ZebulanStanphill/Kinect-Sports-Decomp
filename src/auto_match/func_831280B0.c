extern char lbl_8320A3E0[];
extern void fn_82811058(void *p);
extern void fn_831400A0(void);
extern int atexit(void (*func)(void));

void fn_831280B0(void)
{
    fn_82811058(lbl_8320A3E0);
    atexit(fn_831400A0);
}
