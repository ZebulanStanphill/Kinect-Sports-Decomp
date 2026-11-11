typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *);
extern RTL_CRITICAL_SECTION lbl_8326434C;
extern void *lbl_83264300;
extern unsigned char fn_83015838(void *,void *);
int fn_82FEB670(void *a, unsigned char *out) {
 RtlEnterCriticalSection(&lbl_8326434C);
 *out=fn_83015838(lbl_83264300,a);
 RtlLeaveCriticalSection(&lbl_8326434C);
 return 1;
}
