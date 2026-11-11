typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *);
extern RTL_CRITICAL_SECTION lbl_8326434C;
extern void *lbl_832642E8;
extern int fn_82FF6520(void *,void *);
int fn_82FEB340(void *a, int *out) {
 RtlEnterCriticalSection(&lbl_8326434C);
 *out=fn_82FF6520(lbl_832642E8,a);
 RtlLeaveCriticalSection(&lbl_8326434C);
 return 1;
}
