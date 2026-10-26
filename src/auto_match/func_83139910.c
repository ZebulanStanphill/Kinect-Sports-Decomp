extern char lbl_83264EA8[];
extern void RtlInitializeCriticalSection(void *p);
extern void fn_83141E10(void);
extern int atexit(void (*func)(void));

void fn_83139910(void)
{
    RtlInitializeCriticalSection(lbl_83264EA8);
    atexit(fn_83141E10);
}
