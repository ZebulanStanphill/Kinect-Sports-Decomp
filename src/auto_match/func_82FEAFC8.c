typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *cs);
extern int fn_8301EDC8(void *a, void *b);
extern RTL_CRITICAL_SECTION lbl_8326434C;

int fn_82FEAFC8(void *a, void *b)
{
    int result;

    RtlEnterCriticalSection(&lbl_8326434C);
    result = fn_8301EDC8(a, b);
    RtlLeaveCriticalSection(&lbl_8326434C);
    return result;
}
