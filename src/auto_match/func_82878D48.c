typedef struct Item_82878D48 {
  struct {
    int pad0;
    unsigned char (*f4)(struct Item_82878D48 *);
    int pad[5];
    void (*f1c)(struct Item_82878D48 *);
  } *vt;
} Item_82878D48;
typedef struct Obj_82878D48 { char pad[0x7c]; Item_82878D48 **begin; Item_82878D48 **end; } Obj_82878D48;
extern unsigned char fn_82870AA0(Item_82878D48 *);
extern void *memmove(void *, const void *, unsigned);

unsigned fn_82878D48(Obj_82878D48 *o, unsigned char flag)
{
  Item_82878D48 **p, **q;
  Item_82878D48 *it;
  p = o->begin;
  if (p != o->end) {
    do {
      q = p + 1;
      it = *p;
      if (flag == 0 && (fn_82870AA0(it) != 0 || it->vt->f4(it) != 1)) {
        p = p + 1;
        q = q + 1;
      } else {
        memmove(p, q, ((o->end - q)) * 4);
        o->end = o->end - 1;
        it->vt->f1c(it);
      }
    } while (p != o->end);
  }
  return 0x20200000;
}
