extern void fn_8229FAB8(int, int, int);
extern void fn_8229FF28(int, int);

typedef struct { int *items; int pad[3]; int index; } List;
typedef struct { char pad[0x20]; float value; } Item;

#define VAL(l) ((int)((Item *)(l)->items[(l)->index])->value)

void fn_82374DA8(int param_1)
{
  List **pair;

  if (*(int *)(param_1 + 0x204) == 0) {
    pair = (List **)**(int **)(param_1 + 8);
    fn_8229FAB8(*(int *)(*(int *)(param_1 + 0xd4) + 0xc), VAL(pair[0]), VAL(pair[1]));
  }
  else {
    pair = (List **)**(int **)(param_1 + 8);
    fn_8229FF28(*(int *)(*(int *)(param_1 + 0xd4) + 0xc), VAL(pair[0]));
  }
}
