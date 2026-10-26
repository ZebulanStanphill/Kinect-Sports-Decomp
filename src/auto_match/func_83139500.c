extern char lbl_832632C8[];
extern void fn_82F62590(void *p);
extern void fn_83141C30(void);
extern int atexit(void (*func)(void));

void fn_83139500(void)
{
    fn_82F62590(lbl_832632C8);
    atexit(fn_83141C30);
}
