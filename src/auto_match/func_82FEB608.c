typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *);
extern RTL_CRITICAL_SECTION lbl_8326434C;
extern void *lbl_83264300;
typedef struct Info_82FEB608 { int v[6]; } Info_82FEB608;
extern Info_82FEB608 fn_83015740(void *, void *);
int fn_82FEB608(void *a, Info_82FEB608 *out) {
 RtlEnterCriticalSection(&lbl_8326434C);
 *out = fn_83015740(lbl_83264300, a);
 RtlLeaveCriticalSection(&lbl_8326434C);
 return 1;
}
