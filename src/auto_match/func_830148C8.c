typedef struct Item Item;
typedef struct { void *f0; void *f4; void (*release)(Item *); } ItemVtbl;
struct Item { ItemVtbl *vt; };
typedef struct {
  char pad0[0x38];
  int x38;
  void *x3c;
  char pad40[0x10];
  void *x50;
  char pad54[0xc];
  void *x60;
  char pad64[8];
  void *x6c;
  char pad70[8];
  unsigned int count;
} Obj;
extern Item *fn_82FAB9C0(void *a, void *b);
extern void fn_82FFF568(Item *i, void *a, void *b);
extern void fn_83010E18(void *a, void *b);
extern char *lbl_832642E0;
extern void *lbl_832642E4;

int fn_830148C8(Obj *o)
{
  Item *it;

  if (o->x38 != 0 && ++o->count == 1) {
    fn_83010E18(lbl_832642E4, o->x50);
    if (o->x60 != 0 && (it = fn_82FAB9C0(lbl_832642E0 + 4, o->x60)) != 0) {
      fn_82FFF568(it, o->x3c, o->x50);
      it->vt->release(it);
    }
    if (o->x6c != 0 && (it = fn_82FAB9C0(lbl_832642E0 + 4, o->x6c)) != 0) {
      fn_82FFF568(it, o->x3c, o->x50);
      it->vt->release(it);
    }
  }
  return 1;
}
