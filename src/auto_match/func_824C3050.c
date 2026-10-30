extern void *fn_8265C9E0(unsigned int);
extern void *lbl_821C0854[];

typedef struct {
  void *vt;
  unsigned int v;
} Impl_824C3050;

Impl_824C3050 **fn_824C3050(Impl_824C3050 **out, Impl_824C3050 *src)
{
  Impl_824C3050 *p = (Impl_824C3050 *)fn_8265C9E0(8);
  Impl_824C3050 *r;
  if (p != 0) {
    unsigned int v = src->v;
    p->vt = lbl_821C0854;
    p->v = v;
    r = p;
  } else {
    r = 0;
  }
  *out = r;
  return out;
}
