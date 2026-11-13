typedef struct Obj_82CF73A0 Obj_82CF73A0;
typedef struct {
  void *f0;
  void *(*f4)(Obj_82CF73A0 *, int);
  void (*f8)(Obj_82CF73A0 *, void *, int);
} Vt_82CF73A0;
struct Obj_82CF73A0 { Vt_82CF73A0 *vt; };
extern void fn_82CF68D0(void *, void *, int);

void *fn_82CF73A0(Obj_82CF73A0 *o, void *src, int n, int *cnt, int stride)
{
  void *r;
  int m;
  r = o->vt->f4(o, *cnt * stride);
  m = *cnt;
  if (m >= n) {
    m = n;
  }
  fn_82CF68D0(r, src, m * stride);
  o->vt->f8(o, src, n * stride);
  return r;
}
