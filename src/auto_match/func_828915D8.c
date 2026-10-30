struct Item_828915D8;
typedef struct ItemVT_828915D8 { void *pad0; void (*f4)(struct Item_828915D8 *, void *); } ItemVT_828915D8;
typedef struct Item_828915D8 { ItemVT_828915D8 *vt; } Item_828915D8;
typedef struct Obj2_828915D8 {
  char pad0[0x6c];
  void *f6c;
  char pad1[0x10];
  char f80[0xc];
  Item_828915D8 **begin;
  Item_828915D8 **end;
  char pad2[9];
  unsigned char f9d;
  unsigned char f9e;
} Obj2_828915D8;

extern void fn_8223C478(void *bs, int a, int b);
extern void fn_828A12E8(void *a);
extern void fn_828B5C88(void *a, void *b, void *bs);
extern void fn_828E9DB8(void *bs, int v, int n);

void fn_828915D8(Obj2_828915D8 *p, void *bs)
{
  int c;
  Item_828915D8 **it;
  Item_828915D8 *e;

  fn_828B5C88(p->f80, p->f6c, bs);
  c = p->f9d != 0;
  fn_8223C478(bs, 1, 0);
  fn_828E9DB8(bs, c, 1);
  if (p->f9d != 0) {
    unsigned char d;
    fn_828A12E8(p->f6c);
    d = p->f9e;
    fn_8223C478(bs, 8, 0);
    fn_828E9DB8(bs, d, 8);
    for (it = p->begin; it != p->end; it++) {
      e = *it;
      fn_8223C478(bs, 1, 0);
      fn_828E9DB8(bs, e != 0, 1);
      if (e != 0) {
        e->vt->f4(e, bs);
      }
    }
  }
}
