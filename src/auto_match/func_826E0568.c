typedef struct { void **vt; } Iface;
extern int fn_826C8C70();
extern int fn_826E9378();
typedef void (*Fn7)(Iface *, void *, void *);

void fn_826E0568(char *self, void *arg)
{
  Iface *s = *(Iface **)(*(char **)(self + 0x10) + 0x30);
  if (s != 0) {
    ((Fn7)s->vt[7])(s, self, arg);
  } else {
    char *p = *(char **)(self + 0x314);
    char *q;
    if (p == 0) p = self + 0x28;
    fn_826C8C70(p, "GFx_DefineVideoStream: Video libarary is not set.\n");
    q = *(char **)(self + 0x314);
    fn_826E9378(q != 0 ? q : self + 0x28);
  }
}
