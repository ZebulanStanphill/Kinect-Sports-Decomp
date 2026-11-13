extern int fn_8277CB10();
extern int fn_8277CB10();

typedef struct { char pad[0x30]; unsigned int idx; } Item;
typedef struct {
  char pad[0x8c];
  Item **items;
  unsigned int count;
  int pad94;
  char sub[0x18];
  unsigned int *arr;
} Obj;

void fn_8277E2E0(Obj *o)
{
  unsigned int i;

  fn_8277CB10(o->sub, &o->items);
  for (i = 0; i < o->count; i++) {
      o->items[i]->idx = i;
      o->arr[i] = i;
  }
}
