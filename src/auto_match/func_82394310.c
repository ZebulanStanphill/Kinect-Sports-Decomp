extern void *fn_8265C9E0(unsigned int);
extern void *lbl_821B4990[];

typedef struct {
  void *vt;
  unsigned int v;
} Impl_82394310;

Impl_82394310 **fn_82394310(Impl_82394310 **out, unsigned int *src)
{
  Impl_82394310 *p = (Impl_82394310 *)fn_8265C9E0(8);
  Impl_82394310 *r;
  if (p != 0) {
    p->vt = lbl_821B4990;
    p->v = *src;
    r = p;
  } else {
    r = 0;
  }
  *out = r;
  return out;
}
