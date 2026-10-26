extern char lbl_8323FF68[];
extern void fn_82E66690(void *p);
extern void fn_83141B98(void);
extern int atexit(void (*func)(void));

void fn_83138730(void)
{
    fn_82E66690(lbl_8323FF68);
    atexit(fn_83141B98);
}
