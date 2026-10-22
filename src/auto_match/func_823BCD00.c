typedef void (*vfn)(void *p, int f);
typedef struct { vfn *vtbl; } VObj;
extern int fn_8265CA20(void *p);
extern char lbl_82197048[];

typedef struct {
  void *vtbl;
  char pad[0x20 - 4];
  VObj *a;
  VObj *b;
} Obj;

Obj *fn_823BCD00(Obj *p, unsigned int flags)
{
  if (p->b != 0) {
    (*p->b->vtbl[0])(p->b, 1);
  }
  if (p->a != 0) {
    (*p->a->vtbl[0])(p->a, 1);
  }
  p->vtbl = lbl_82197048;
  if (flags & 1) {
    fn_8265CA20(p);
  }
  return p;
}
