extern void *fn_8265C9E0(unsigned int);
extern void *lbl_821C097C[];

typedef struct {
  void *vt;
  unsigned int v;
} Impl_824C1150;

Impl_824C1150 **fn_824C1150(Impl_824C1150 **out, Impl_824C1150 *src)
{
  Impl_824C1150 *p = (Impl_824C1150 *)fn_8265C9E0(8);
  Impl_824C1150 *r;
  if (p != 0) {
    unsigned int v = src->v;
    p->vt = lbl_821C097C;
    p->v = v;
    r = p;
  } else {
    r = 0;
  }
  *out = r;
  return out;
}
