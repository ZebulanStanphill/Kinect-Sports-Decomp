typedef struct Obj_82CE6A70 Obj_82CE6A70;
typedef struct {
  void *f0, *f4, *f8;
  void *(*fc)(Obj_82CE6A70 *, int *, int);
  void (*f10)(Obj_82CE6A70 *, void *, int, int);
} Vt_82CE6A70;
struct Obj_82CE6A70 { Vt_82CE6A70 *vt; };
extern void fn_82CF68D0(void *, void *, int);

void *fn_82CE6A70(Obj_82CE6A70 *o, void *dst, int n, int *cnt, int stride)
{
  void *r;
  int m;
  r = o->vt->fc(o, cnt, stride);
  m = *cnt;
  if (n < *cnt) {
    m = n;
  }
  fn_82CF68D0(r, dst, m * stride);
  o->vt->f10(o, dst, n, stride);
  return r;
}
