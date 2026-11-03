typedef struct Item_827E3BF8 Item_827E3BF8;
typedef struct Iface_827E3BF8 Iface_827E3BF8;
struct Iface_827E3BF8 {
  struct {
    char pad0[0xc];
    int (*f0c)(Iface_827E3BF8 *self, Item_827E3BF8 *it);
    int (*f10)(Iface_827E3BF8 *self, Item_827E3BF8 *it);
    char pad14[4];
    int (*f18)(Iface_827E3BF8 *self);
    char pad1c[4];
    unsigned int (*f20)(Iface_827E3BF8 *self);
  } *vt;
};
struct Item_827E3BF8 {
  char pad[0x20];
  int f20;
  Iface_827E3BF8 *p24;
};
typedef struct Node_827E3BF8 {
  struct Node_827E3BF8 *next;
  struct Node_827E3BF8 *prev;
  Item_827E3BF8 *item;
} Node_827E3BF8;
typedef struct {
  char pad0[4];
  Node_827E3BF8 *list;
  char pad8[0x58 - 8];
  int f58;
} Obj_827E3BF8;

extern void fn_827E3BB0(Obj_827E3BF8 *o, Item_827E3BF8 **it);
extern void fn_827E42E8(unsigned int u, Item_827E3BF8 **it);
extern void fn_827E4580(Iface_827E3BF8 *p);
extern void fn_827E4628(Iface_827E3BF8 *p, int r);
extern void fn_827DA3B0(int a, Iface_827E3BF8 *p);

int fn_827E3BF8(Obj_827E3BF8 *o, int *count)
{
  Node_827E3BF8 *h = o->list;
  Node_827E3BF8 *n = h->next;
  Item_827E3BF8 *it;
  Iface_827E3BF8 *p;
  unsigned int u;
  int r, r2, r3;
  Item_827E3BF8 *local;

  while (n != h) {
    it = n->item;
    *count = *count + 1;
    p = it->p24;
    u = p->vt->f20(p);
    r = p->vt->f0c(p, it);
    it->f20 = r;
    local = it;
    n = n->next;
    if (r != 0x3e5 && r != 0x3e4) {
      r2 = p->vt->f10(p, it);
      if (u != 0) {
        fn_827E42E8(u, &local);
      } else {
        fn_827E3BB0(o, &local);
      }
      r3 = p->vt->f18(p);
      if (r2 == 0) {
        fn_827E4580(p);
        fn_827DA3B0(o->f58, p);
      } else if (r2 != 0x3e5 && r2 != 0x3e4) {
        fn_827E4628(p, r2);
        fn_827DA3B0(o->f58, p);
        return r2;
      }
      if (r3 == 0x10e1) return 0x10e1;
    }
    h = o->list;
  }
  return 0;
}
