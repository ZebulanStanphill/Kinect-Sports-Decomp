extern int fn_827D9698(int);
extern void fn_827DDFB8(int, int);
int fn_82628230(int param_1, int *param_2, int param_3)
{
  int *p;
  int *end;
  int v;
  p = *(int **)(param_1 + 0x34);
  end = *(int **)(param_1 + 0x38);
  for (; p != end; p++) {
    v = *p;
    if (fn_827D9698(v) == *param_2) {
      fn_827DDFB8(param_3, v);
    }
  }
  return 0;
}
