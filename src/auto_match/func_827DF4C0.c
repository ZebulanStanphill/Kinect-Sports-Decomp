extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern int fn_827DEA58(void *x);
extern void *fn_827DF1D0(char *p, int a);
extern void *fn_827E2610(void *x);

int fn_827DF4C0(char *p, int a)
{
    int r = 0;
    void *x;
    RtlEnterCriticalSection(p + 400);
    x = fn_827DF1D0(p, a);
    if (x) { r = fn_827DEA58(fn_827E2610(x)); }
    RtlLeaveCriticalSection(p + 400);
    return r;
}
