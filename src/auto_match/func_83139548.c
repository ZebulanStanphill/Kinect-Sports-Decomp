extern char lbl_8326337C[];
extern void fn_82F62590(void *p);
extern void fn_83141C90(void);
extern int atexit(void (*func)(void));

void fn_83139548(void)
{
    fn_82F62590(lbl_8326337C);
    atexit(fn_83141C90);
}
