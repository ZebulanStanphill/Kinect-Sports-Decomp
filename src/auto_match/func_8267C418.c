extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_8267BD58(void *p);
extern char *lbl_831E7E60;
extern void *lbl_831E7E64;

void fn_8267C418(void)
{
    void *cs;
    if (lbl_831E7E60 == 0)
        return;
    cs = lbl_831E7E60 + 0x2c4;
    RtlEnterCriticalSection(cs);
    if (lbl_831E7E64 == 0) {
        RtlLeaveCriticalSection(cs);
        return;
    }
    fn_8267BD58(lbl_831E7E64);
    lbl_831E7E64 = 0;
    RtlLeaveCriticalSection(cs);
}
