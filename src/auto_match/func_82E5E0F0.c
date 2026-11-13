extern char lbl_82154C18[];
extern char lbl_82154AA8[];
typedef struct Interface_82E5E0F0 Interface_82E5E0F0;
typedef int (*Call)();
struct Interface_82E5E0F0 {Call *vt;};
extern int fn_82E62630(Interface_82E5E0F0 *r, void *arg);

int fn_82E5E0F0(Interface_82E5E0F0 *p, void *arg)
{
  Interface_82E5E0F0 *q, *r;
  int hr;

  if (!p || !arg)
    return 0x80004003;
  q = 0;
  r = 0;
  hr = p->vt[0](p, lbl_82154C18, &q);
  if (hr >= 0) {
    hr = q->vt[4](q, lbl_82154AA8, 0, &r);
    if (hr >= 0) {
      if (r == 0)
        hr = 0xc00d36bb;
      else
        hr = fn_82E62630(r, arg);
    }
  }
  if (q) { q->vt[2](q); q = 0; }
  if (r) r->vt[2](r);
  return hr;
}
