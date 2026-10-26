extern char lbl_832645B4[];
extern void RtlInitializeCriticalSection(void *p);
extern void fn_83141DC0(void);
extern int atexit(void (*func)(void));

void fn_83139888(void)
{
    RtlInitializeCriticalSection(lbl_832645B4);
    atexit(fn_83141DC0);
}
