extern char lbl_8326440C[];
extern void RtlInitializeCriticalSection(void *p);
extern void fn_83141D68(void);
extern int atexit(void (*func)(void));

void fn_83139780(void)
{
    RtlInitializeCriticalSection(lbl_8326440C);
    atexit(fn_83141D68);
}
