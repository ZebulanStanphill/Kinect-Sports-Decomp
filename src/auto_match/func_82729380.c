extern void *lbl_820111C0[];
typedef struct { int *d; int n; int c; } Arr_82729380;
typedef struct {
  void *vt;
  int rc;
  int a;
  Arr_82729380 arr;
} Obj_82729380;

void fn_82729380(Obj_82729380 *p)
{
  Arr_82729380 *s = &p->arr;
  p->rc = 1;
  p->vt = lbl_820111C0;
  p->a = 0x19;
  s->d = 0;
  s->n = 0;
  s->c = 0;
}
