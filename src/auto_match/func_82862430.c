typedef struct { char pad[0x14]; } Item;
typedef struct {
  char pad[0x38];
  unsigned short n38;
  short pad3a;
  Item *items;
  unsigned short n40;
} Obj;
extern void fn_82862388(Item *it, int a, int b);

void fn_82862430(Obj *param_1, int param_2, int param_3)
{
  int i;

  for (i = 0; i < param_1->n38; i++) {
  }
  for (i = 0; i < param_1->n40; i++) {
    fn_82862388(&param_1->items[i], param_2, param_3);
  }
}
