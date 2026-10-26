extern char lbl_83264580[];
extern void RtlInitializeCriticalSection(void *p);
extern void fn_83141DA0(void);
extern int atexit(void (*func)(void));

void fn_83139850(void)
{
    RtlInitializeCriticalSection(lbl_83264580);
    atexit(fn_83141DA0);
}
