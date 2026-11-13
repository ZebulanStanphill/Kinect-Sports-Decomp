/* Script binding (func_8274BB58 sibling): looks up item 0x1b through the host interface and returns its
   name (from a tagged ref-counted string the item returns by value), or "UNKNOWN". */
typedef struct Str_826A81F8 { unsigned int tagged; } Str_826A81F8;
typedef struct Ref_826A81F8 { int f0; long refs; } Ref_826A81F8;
typedef struct Item_826A81F8 { void **vt; } Item_826A81F8;
typedef struct Iface_826A81F8 { Item_826A81F8 *(**vt)(struct Iface_826A81F8 *, int); } Iface_826A81F8;
typedef struct Mgr_826A81F8 { int f0, f4; Iface_826A81F8 iface; } Mgr_826A81F8;
typedef struct Host_826A81F8 { Mgr_826A81F8 *(**vt)(struct Host_826A81F8 *); } Host_826A81F8;
typedef struct Rc_826A81F8 { int f0, f4; int refs; } Rc_826A81F8;
typedef struct Inner_826A81F8 { char pad[0x74]; Host_826A81F8 *host; int f78; } Inner_826A81F8;
typedef struct Obj_826A81F8 { int f0; int f4; int f8; int fc; int f10; int f14; Inner_826A81F8 *f18; } Obj_826A81F8;

typedef Str_826A81F8 *(*GetName_826A81F8)(Str_826A81F8 *out, Item_826A81F8 *p);

extern void fn_82681728(Rc_826A81F8 **, int, const char *);
extern void fn_82694B60(Rc_826A81F8 **, const char *);
extern void fn_82681838(int, Rc_826A81F8 **);
extern void fn_826944C8(Rc_826A81F8 *);
extern void fn_8267C4F0(Item_826A81F8 *);
extern void fn_8267BE38(void *);

void fn_826A81F8(Obj_826A81F8 *o)
{
  Mgr_826A81F8 *m;
  Iface_826A81F8 *ifc;
  Item_826A81F8 *p;
  Rc_826A81F8 *rc;
  Rc_826A81F8 *r;
  Host_826A81F8 *h;
  int n;

  if (o->f18 != 0) {
    h = o->f18->host;
    m = h->vt[16](h);
    ifc = &m->iface;
    p = ifc->vt[3](ifc, 0x1b);
    fn_82681728(&rc, o->f18->f78 + 0x254, "UNKNOWN");
    if (p != 0) {
      Str_826A81F8 s;
      Ref_826A81F8 *sr;
      fn_82694B60(&rc, (const char *)(((GetName_826A81F8)p->vt[5])(&s, p)->tagged & ~3u) + 8);
      sr = (Ref_826A81F8 *)(s.tagged & ~3u);
      if (_InterlockedExchangeAdd(&sr->refs, -1) - 1 == 0) {
        fn_8267BE38(sr);
      }
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
