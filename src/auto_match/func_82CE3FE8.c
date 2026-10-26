typedef struct Lock { int a, b, c; int count; int d, e; char cs[1]; } Lock;
extern Lock *lbl_8323A960;
extern unsigned int lbl_8323A964;
extern int KeTlsSetValue(unsigned int idx, void *v);
extern void RtlLeaveCriticalSection(void *cs);

void fn_82CE3FE8(void)
{
  Lock *l = lbl_8323A960;
  if (--l->count <= 0) {
    KeTlsSetValue(lbl_8323A964, 0);
    RtlLeaveCriticalSection(l->cs);
  }
}
