typedef struct {
  int f0;
  unsigned int a;
  unsigned int b;
  unsigned int c;
  int f10;
  unsigned int d;
  int e;
} Item;

typedef struct {
  char pad[0x14];
  Item **items;
} Obj;

int fn_82966400(Obj *param_1, int param_2, int param_3)
{
  if (param_1->items[param_2]->a == param_1->items[param_3]->a &&
      param_1->items[param_2]->b == param_1->items[param_3]->b &&
      param_1->items[param_2]->c == param_1->items[param_3]->c &&
      param_1->items[param_2]->d == param_1->items[param_3]->d &&
      param_1->items[param_2]->e == param_1->items[param_3]->e) {
    return 1;
  }
  return 0;
}
