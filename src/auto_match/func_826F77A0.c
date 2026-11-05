typedef struct { char pad[0x30]; int key; } Item_826F77A0;
typedef struct {
  char pad[0xab8];
  Item_826F77A0 **items;
  unsigned count;
} Obj_826F77A0;
extern void fn_8270EED8(Item_826F77A0 *, int);
extern void fn_8270EED8(Item_826F77A0 *, int);

void fn_826F77A0(Obj_826F77A0 *o, int key)
{
  unsigned i;
  for (i = 0; i < o->count; i++) {
    if (o->items[i] != 0) {
      if (o->items[i]->key == key) { fn_8270EED8(o->items[i], key); return; }
    }
  }
}
