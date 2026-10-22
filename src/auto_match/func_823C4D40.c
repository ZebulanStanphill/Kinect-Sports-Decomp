typedef struct { char pad[0x2c]; int value; } Item;
typedef struct { void **items; int pad[3]; int index; } List;

typedef struct {
  char pad0[8];
  List ***lists;          /* 0x008 */
  char pad1[0x41c - 0xc];
  int state;              /* 0x41c */
  int listIndex;          /* 0x420 */
  int key;                /* 0x424 */
  char pad2[0x9a0 - 0x428];
  Item *item;             /* 0x9a0 */
  Item *fallback;         /* 0x9a4 */
} Obj;

extern Item *fn_822ABA88(void *a, int b);

int fn_823C4D40(Obj *self)
{
  Item *item;
  int state;
  List *l;

  item = self->item;
  if (item == 0) {
    state = self->state;
    item = self->fallback;
    if (state == 3 || state == 4 || state == 5) {
      l = (*self->lists)[self->listIndex];
      item = fn_822ABA88(l->items[l->index], self->key);
    }
  }
  return item ? item->value : -1;
}
