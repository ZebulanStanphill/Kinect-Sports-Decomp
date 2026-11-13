extern long _InterlockedIncrement(long *);
extern long _InterlockedDecrement(long *);
extern void RtlInitializeCriticalSection(void *cs);
typedef struct Obj_82A3FE48 {
    char pad[0xc];
    long refs;
    char pad10[0x44];
    char cs[0x1c];
} Obj_82A3FE48;
extern long fn_82A3FB78(Obj_82A3FE48 *self, int flag);

long fn_82A3FE48(Obj_82A3FE48 *p)
{
    long hr = 0;
    if ((unsigned long)_InterlockedIncrement(&p->refs) == 1) {
        RtlInitializeCriticalSection(p->cs);
        hr = fn_82A3FB78(p, 0);
        if (hr < 0) {
            _InterlockedDecrement(&p->refs);
        }
    }
    return hr;
}
