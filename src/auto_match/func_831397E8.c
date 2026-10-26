extern char lbl_83264558[];
extern void RtlInitializeCriticalSection(void *p);
extern void fn_83141D98(void);
extern int atexit(void (*func)(void));

void fn_831397E8(void)
{
    RtlInitializeCriticalSection(lbl_83264558);
    atexit(fn_83141D98);
}
