typedef struct Node_82A4FAC0 { int *item; struct Node_82A4FAC0 *next; } Node_82A4FAC0;

void fn_82A4FAC0(int param_1, int param_2)
{
  Node_82A4FAC0 *n;
  Node_82A4FAC0 *cur;
  int hr;
  int *obj;

  n = *(Node_82A4FAC0 **)(param_1 + 0x2c);
  hr = 0;
  while (n != 0 && hr >= 0) {
    cur = n;
    if (n != 0) {
      n = n->next;
      obj = *(int **)cur;
    } else {
      obj = 0;
    }
    obj = (int *)*obj;
    hr = (*(int (**)(int *, int, int))(*obj + 4))(obj, 0, param_2);
  }
}
