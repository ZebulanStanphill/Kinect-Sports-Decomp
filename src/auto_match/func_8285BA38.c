typedef struct { char pad[0x30]; } Item;
typedef struct {
  int count;
  Item *items;
} Obj;
extern void fn_83061548(Item *it, int a);
extern void fn_8285C198(Item *it, int a);

void fn_8285BA38(Obj *param_1)
{
  int i;

  if (param_1->items != 0) {
    for (i = 0; i < param_1->count; i++) {
      fn_83061548(&param_1->items[i], 0);
    }
    if (param_1->items != 0) {
      fn_8285C198(param_1->items, 3);
    }
    param_1->items = 0;
  }
}
