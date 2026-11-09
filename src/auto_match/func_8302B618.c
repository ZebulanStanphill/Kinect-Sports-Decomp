typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);
extern int fn_8302B6E0(void *a, void *b);
extern RTL_CRITICAL_SECTION lbl_83264EA8;

int fn_8302B618(void *a, void *b)
{
    int result;

    RtlEnterCriticalSection(&lbl_83264EA8);
    result = fn_8302B6E0(a, b);
    RtlLeaveCriticalSection(&lbl_83264EA8);
    return result;
}
