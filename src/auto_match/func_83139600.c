extern char lbl_832641F0[];
extern void fn_82F96418(void *p);
extern void fn_83141D00(void);
extern int atexit(void (*func)(void));

void fn_83139600(void)
{
    fn_82F96418(lbl_832641F0);
    atexit(fn_83141D00);
}
