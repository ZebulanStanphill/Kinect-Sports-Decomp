extern void fn_823AFB58(int, int);
static int ne(int *a, int *b) { if (a != b) return 1; return 0; }
void fn_8239A9D8(int param_1, int param_2)
{
  int *b, *e;
  b = *(int **)(param_1 + 420); e = *(int **)(param_1 + 424);
  for (; ne(b, e); b++) fn_823AFB58(*b, param_2);
  b = *(int **)(param_1 + 452); e = *(int **)(param_1 + 456);
  for (; ne(b, e); b++) fn_823AFB58(*b, param_2);
  b = *(int **)(param_1 + 436); e = *(int **)(param_1 + 440);
  for (; ne(b, e); b++) fn_823AFB58(*b, param_2);
  if (*(int *)(param_1 + 0x1e4) != 0) fn_823AFB58(*(int *)(param_1 + 0x1e4), param_2);
}
