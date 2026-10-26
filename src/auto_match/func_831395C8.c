extern char lbl_832641CC[];
extern void fn_82F93840(void *p);
extern void fn_83141CD8(void);
extern int atexit(void (*func)(void));

void fn_831395C8(void)
{
    fn_82F93840(lbl_832641CC);
    atexit(fn_83141CD8);
}
