typedef struct Iface Iface;
typedef struct {
  int f0;
  unsigned (*f4)(Iface *);
  int f8;
  unsigned (*fc)(Iface *);
  unsigned char *(*f10)(Iface *);
} IVt;
struct Iface { IVt *vt; };
typedef struct {
  char pad0[0xc];
  unsigned char flag;
  char pad0d[0xb];
  int f18;
  char pad1c[4];
  Iface *ifc;
  char pad24[4];
  int f28;
} Obj;
extern int fn_8240D928();
extern unsigned char fn_82897BA8(int);
extern void fn_828996C8(Obj *, int);
extern void fn_8289AC08(Obj *, int, int, int, int);
extern void fn_8289D8D0(int);
extern void fn_828A1318(int, Obj *);
extern void fn_82BA02A8(Obj *);

void fn_828AAF70(Obj *o, unsigned char v)
{
  unsigned char *base;
  int idx;
  if (o->ifc == 0 || o->ifc->vt->f4(o->ifc) == 0) {
    if (o->ifc == 0 || o->ifc->vt->fc(o->ifc) == 0) {
      if (o->ifc == 0) {
        return;
      }
      if (o->ifc->vt->f10(o->ifc) == 0) {
        return;
      }
      if (o->ifc != 0) {
        base = o->ifc->vt->f10(o->ifc);
      } else {
        base = 0;
      }
      fn_8289D8D0(o->f28);
      idx = fn_8240D928();
      if (v == base[(idx + 4) * 4]) {
        return;
      }
      fn_8289AC08(o, 1, 0, 1, 0);
      fn_82BA02A8(o);
      base[(idx + 4) * 4] = v;
    } else {
      if (v == o->flag) {
        return;
      }
      fn_8289AC08(o, 1, 0, 1, 0);
      fn_82BA02A8(o);
      o->flag = v;
    }
    fn_8289AC08(o, 1, 1, 1, 0);
    if (fn_82897BA8(o->f18) != 0) {
      return;
    }
  } else {
    if (v == o->flag) {
      return;
    }
    fn_8289AC08(o, 1, 0, 1, 0);
    fn_82BA02A8(o);
    o->flag = v;
    fn_8289AC08(o, 1, 1, 1, 0);
    if (fn_82897BA8(o->f18) != 0) {
      fn_828996C8(o, -1);
      return;
    }
  }
  fn_828A1318(o->f28, o);
}
