typedef struct Item_82E3BFD8 Item_82E3BFD8;
typedef struct {
  void (*f0)(Item_82E3BFD8 *self);
  void (*f1)(Item_82E3BFD8 *self);
  void (*f2)(Item_82E3BFD8 *self);
} ItemVtbl_82E3BFD8;
struct Item_82E3BFD8 { ItemVtbl_82E3BFD8 *vt; };
extern int fn_82E58BE8(void *q, Item_82E3BFD8 **out);

void fn_82E3BFD8(char *self)
{
  Item_82E3BFD8 *p = 0;

  while (fn_82E58BE8(self + 0xc0, &p) != 0) {
    if (p != 0) {
      p->vt->f2(p);
      p = 0;
    }
  }
}
