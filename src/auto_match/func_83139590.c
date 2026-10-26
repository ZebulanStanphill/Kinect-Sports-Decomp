extern char lbl_832641A4[];
extern void fn_82F91510(void *p);
extern void fn_83141CB0(void);
extern int atexit(void (*func)(void));

void fn_83139590(void)
{
    fn_82F91510(lbl_832641A4);
    atexit(fn_83141CB0);
}
