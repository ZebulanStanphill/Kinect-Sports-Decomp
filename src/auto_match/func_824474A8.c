extern void *fn_8265C9E0(unsigned int);
extern void *lbl_821B9C08[];

typedef struct {
  void *vt;
  unsigned char v;
} Impl_824474A8;

Impl_824474A8 **fn_824474A8(Impl_824474A8 **out, unsigned char *src)
{
  Impl_824474A8 *p = (Impl_824474A8 *)fn_8265C9E0(8);
  Impl_824474A8 *r;
  if (p != 0) {
    p->vt = lbl_821B9C08;
    p->v = *src;
    r = p;
  } else {
    r = 0;
  }
  *out = r;
  return out;
}
