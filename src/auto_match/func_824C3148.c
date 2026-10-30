extern void *fn_8265C9E0(unsigned int);
extern void *lbl_821C085C[];

typedef struct {
  void *vt;
  unsigned int v;
} Impl_824C3148;

Impl_824C3148 **fn_824C3148(Impl_824C3148 **out, Impl_824C3148 *src)
{
  Impl_824C3148 *p = (Impl_824C3148 *)fn_8265C9E0(8);
  Impl_824C3148 *r;
  if (p != 0) {
    unsigned int v = src->v;
    p->vt = lbl_821C085C;
    p->v = v;
    r = p;
  } else {
    r = 0;
  }
  *out = r;
  return out;
}
