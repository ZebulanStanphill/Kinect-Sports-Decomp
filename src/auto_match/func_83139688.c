extern char lbl_83264240[];
extern void fn_82FA7E10(void *p);
extern void fn_83141D28(void);
extern int atexit(void (*func)(void));

void fn_83139688(void)
{
    fn_82FA7E10(lbl_83264240);
    atexit(fn_83141D28);
}
