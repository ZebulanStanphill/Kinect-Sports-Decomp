typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);
extern RTL_CRITICAL_SECTION lbl_8315C428;
extern char lbl_83215000[];
extern int fn_829CFAB0(int idx);

int fn_829CFBC0(int idx)
{
    int r = 0;

    RtlEnterCriticalSection(&lbl_8315C428);
    if (((int *)(lbl_83215000 + 0x2128))[idx] != 0)
        r = fn_829CFAB0(idx);
    RtlLeaveCriticalSection(&lbl_8315C428);
    return r;
}
