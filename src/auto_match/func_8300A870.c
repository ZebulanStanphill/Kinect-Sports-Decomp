typedef struct Slot { int id; int a; int b; } Slot;
typedef struct SlotSet { int hdr[3]; Slot slots[4]; } SlotSet;
typedef struct Item Item;
typedef struct ItemVtbl { char pad[0x50]; void (*fn50)(Item *self); } ItemVtbl;
struct Item { ItemVtbl *vt; char pad[0x14]; unsigned short f18; };
typedef struct Pair { int key; Item *item; } Pair;
typedef struct Obj {
  char pad0[0xc];
  void *ctx;
  char pad10[0x28 - 0x10];
  SlotSet *set;
  char pad2c[0x48 - 0x2c];
  Pair *begin;
  Pair *end;
} Obj;
extern Obj *lbl_832645A8;
extern void fn_82FEC018(void);
extern void fn_82FEC0A0(void);
extern void fn_82FEC350(void *ctx);
extern void fn_82FEC4C0(void *ctx);
extern void fn_8300A140(Obj *o);
extern void fn_8300A298(Obj *o);

static unsigned char anyActive(Obj *o)
{
  unsigned int i;
  if (o->set != 0) {
    for (i = 0; i < 4; i++) {
      if (o->set->slots[i].id != -1)
        return 1;
    }
  }
  return 0;
}

void fn_8300A870(Obj *o)
{
  void *ctx;
  Pair *it;

  if (anyActive(o)) {
    if (o == lbl_832645A8) {
      fn_8300A140(o);
      fn_82FEC018();
      fn_8300A298(o);
      fn_82FEC0A0();
    } else {
      ctx = o->ctx;
      fn_8300A140(o);
      fn_82FEC350(ctx);
      ctx = o->ctx;
      fn_8300A298(o);
      fn_82FEC4C0(ctx);
    }
  }
  for (it = o->begin; it != o->end; it++) {
    Item *item = it->item;
    if (item->f18 != 0)
      item->vt->fn50(item);
  }
}
