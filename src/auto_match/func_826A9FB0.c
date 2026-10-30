extern void *fn_8267B890(void *heap, int size, int flags);
extern void *lbl_831E7E64;
extern char lbl_82007308[];
typedef struct { void *vt; int refs; int a; int b; } T;
T *fn_826A9FB0(void)
{
  T *p = (T *)fn_8267B890(lbl_831E7E64, 0x10, 0);
  if (p != 0) {
    p->vt = lbl_82007308;
    p->refs = 1;
    p->a = 0;
    p->b = 0;
    return p;
  }
  return 0;
}
