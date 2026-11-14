typedef struct Item_82796740 { char pad[4]; unsigned f4; char pad8[0x14]; unsigned f1c; } Item_82796740;
typedef struct Cont_82796740 { char pad[4]; int count; } Cont_82796740;
typedef struct Hdl_82796740 { Cont_82796740 *c; int idx; } Hdl_82796740;
typedef struct Owner_82796740 { char pad[0xc]; Item_82796740 **items; } Owner_82796740;
extern void fn_8267BE38(void *);
extern unsigned char fn_8278FD18(Item_82796740 *);
extern void fn_82794B38(void *);
extern void *fn_82794B88(Owner_82796740 *);
extern void *fn_827961E0(void *, void *);
extern void fn_82796390(Item_82796740 ***, unsigned, void **);
extern Item_82796740 *fn_82796570(Owner_82796740 *, void *);

Item_82796740 *fn_82796740(Owner_82796740 *o, Hdl_82796740 *h, void *p3)
{
  unsigned idx;
  unsigned val;
  void *s;
  unsigned char bad;
  Item_82796740 *res;
  if (h->c == 0 || h->idx < 0 || h->idx >= h->c->count) {
    bad = 1;
  } else {
    bad = 0;
  }
  if (bad) {
    return fn_82796570(o, p3);
  }
  idx = h->idx;
  val = 0;
  if (idx != 0) {
    Item_82796740 *e = o->items[idx - 1];
    unsigned a = e->f4;
    unsigned b = e->f1c;
    unsigned len = a;
    if (a != 0 && fn_8278FD18(e) != 0)
      len = a - 1;
    val = len + b;
  }
  s = fn_827961E0(fn_82794B88(o), p3);
  fn_82796390(&o->items, idx, &s);
  if (s != 0) {
    fn_82794B38(s);
    fn_8267BE38(s);
  }
  res = o->items[idx];
  res->f1c = val;
  return res;
}
