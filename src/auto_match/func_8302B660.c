typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void fn_8302B738(void *a, void *b);
extern RTL_CRITICAL_SECTION lbl_83264EA8;

void fn_8302B660(void *a, void *b)
{
    RtlEnterCriticalSection(&lbl_83264EA8);
    fn_8302B738(a, b);
    RtlLeaveCriticalSection(&lbl_83264EA8);
}
