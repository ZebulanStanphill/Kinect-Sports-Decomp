typedef struct Iface { struct IfaceVt *vt; } Iface;
struct IfaceVt {
  int (*f0)(Iface *, int, int, int, int, int);
  void *f4[9];
  void (*f28)(Iface *);
};
typedef struct { int pad[2]; Iface *m8; } Obj;
extern int fn_82F60AC0(Iface **);

void fn_82F529D0(Obj *o)
{
  Iface *p = 0;
  int hr = fn_82F60AC0(&p);
  if (hr >= 0) {
    hr = p->vt->f0(p, 1, 0x20, 0x100, 0, -1);
    if (hr >= 0) {
      Iface *q = p;
      p = 0;
      o->m8 = q;
    }
  }
  if (p != 0) p->vt->f28(p);
}
