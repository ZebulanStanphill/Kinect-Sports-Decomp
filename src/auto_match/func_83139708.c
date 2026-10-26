extern char lbl_83264368[];
extern void fn_83016390(void *p);
extern void fn_83141D50(void);
extern int atexit(void (*func)(void));

void fn_83139708(void)
{
    fn_83016390(lbl_83264368);
    atexit(fn_83141D50);
}
