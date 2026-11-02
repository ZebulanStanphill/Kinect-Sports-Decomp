typedef struct { void **vt; } Iface;
extern int fn_826C8C70();
extern int fn_826E9378();
typedef Iface *(*Fn1)(Iface *);
typedef void (*Fn2)(Iface *, void *, void *);

void fn_826E1138(char *self, void *arg)
{
  Iface *s = *(Iface **)(*(char **)(self + 0x10) + 0x34);
  if (s != 0) {
    Iface *t = ((Fn1)s->vt[2])(s);
    ((Fn2)t->vt[5])(t, self, arg);
  } else {
    char *p = *(char **)(self + 0x314);
    char *q;
    if (p == 0) p = self + 0x28;
    fn_826C8C70(p, "GFx_DefineExternalSoundLoader: Audio library is not set.\n");
    q = *(char **)(self + 0x314);
    fn_826E9378(q != 0 ? q : self + 0x28);
  }
}
