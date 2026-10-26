extern char lbl_8323A940[];
extern void fn_82CE3CB8(void *p);
extern void fn_83141AE8(void);
extern int atexit(void (*func)(void));

void fn_8312AB88(void)
{
    fn_82CE3CB8(lbl_8323A940);
    atexit(fn_83141AE8);
}
