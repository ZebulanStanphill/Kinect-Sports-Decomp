extern char lbl_8326434C[];
extern void RtlInitializeCriticalSection(void *p);
extern void fn_83141D48(void);
extern int atexit(void (*func)(void));

void fn_831396D0(void)
{
    RtlInitializeCriticalSection(lbl_8326434C);
    atexit(fn_83141D48);
}
