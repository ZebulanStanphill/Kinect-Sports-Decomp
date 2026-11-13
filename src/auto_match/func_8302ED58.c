typedef struct Node_8302ED58 {
  struct Node_8302ED58 *next;
  int pad4;
  int f8[0x1c];
} Node_8302ED58;

typedef struct Item_8302ED58 {
  int a0, a4, a8, ac;
  int f10;
  int f14;
  unsigned int f18;
  int f1c[0x12];
  int f64;
} Item_8302ED58;

void fn_8302ED58(int param_1, unsigned int param_2, unsigned int param_3)
{
  Node_8302ED58 *n;
  Item_8302ED58 *it;

  n = *(Node_8302ED58 **)(param_1 + 0x104);
  if (n != 0) {
    do {
      it = (Item_8302ED58 *)((char *)n + 8);
      if ((param_2 == 0 || param_2 == it->f18) && (param_3 == 0 || it->f10 == param_3) && it->f64 != 1) {
        it->f64 = 1;
      }
      n = n->next;
    } while (n != 0);
  }
}
