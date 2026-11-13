typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *);
extern RTL_CRITICAL_SECTION lbl_8326434C;
extern void *lbl_83264300;
typedef struct Info_82FEB928 { float x; int v[5]; } Info_82FEB928;
extern Info_82FEB928 fn_83015740(void *, void *);

int fn_82FEB928(void *a, float *out)
{
    Info_82FEB928 info;
    RtlEnterCriticalSection(&lbl_8326434C);
    info = fn_83015740(lbl_83264300, a);
    RtlLeaveCriticalSection(&lbl_8326434C);
    *out = info.x;
    return 1;
}
