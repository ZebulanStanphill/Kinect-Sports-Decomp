typedef struct Item_8274BB58 { int (**vt)(struct Item_8274BB58 *); } Item_8274BB58;
typedef struct Iface_8274BB58 { Item_8274BB58 *(**vt)(struct Iface_8274BB58 *, int); } Iface_8274BB58;
typedef struct Mgr_8274BB58 { int f0, f4; Iface_8274BB58 iface; } Mgr_8274BB58;
typedef struct Rc_8274BB58 { int f0, f4; int refs; } Rc_8274BB58;
typedef struct Inner_8274BB58 { char pad[0x78]; int f78; } Inner_8274BB58;
typedef struct Obj_8274BB58 { int f0; int f4; int f8; int fc; int f10; int f14; Inner_8274BB58 *f18; } Obj_8274BB58;
extern Mgr_8274BB58 *fn_826A7398(Inner_8274BB58 *);
extern void fn_82681728(Rc_8274BB58 **, int, const char *);
extern void fn_82694B60(Rc_8274BB58 **, int);
extern void fn_82681838(int, Rc_8274BB58 **);
extern void fn_826944C8(Rc_8274BB58 *);
extern void fn_8267C4F0(Item_8274BB58 *);

void fn_8274BB58(Obj_8274BB58 *o)
{
  Mgr_8274BB58 *m;
  Iface_8274BB58 *ifc;
  Item_8274BB58 *p;
  Rc_8274BB58 *rc;
  Rc_8274BB58 *r;
  int n;

  if (o->f18 != 0) {
    m = fn_826A7398(o->f18);
    ifc = &m->iface;
    p = ifc->vt[3](ifc, 0x1b);
    fn_82681728(&rc, o->f18->f78 + 0x254, "UNKNOWN");
    if (p != 0) {
      fn_82694B60(&rc, p->vt[2](p));
    }
    fn_82681838(o->f4, &rc);
    r = rc;
    n = r->refs - 1;
    r->refs = n;
    if (n == 0) {
      fn_826944C8(r);
    }
    if (p != 0) {
      fn_8267C4F0(p);
    }
  }
}
