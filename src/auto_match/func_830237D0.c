typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);
extern unsigned char fn_83023568(void *p);
extern void fn_83023618(void *p);
extern void fn_82A1E810(int x);
extern int lbl_83264AA4;

void fn_830237D0(char *p)
{
    unsigned char ok;
    RtlEnterCriticalSection((RTL_CRITICAL_SECTION *)(p + 4));
    if (fn_83023568(p - 4) && *(unsigned short *)(p + 0x44) != 0)
        ok = 1;
    else
        ok = 0;
    if (ok)
        fn_83023618(p - 4);
    RtlLeaveCriticalSection((RTL_CRITICAL_SECTION *)(p + 4));
    fn_82A1E810(lbl_83264AA4);
}
