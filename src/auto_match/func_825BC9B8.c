extern int fn_82577EE0(int *p, float *a, float *b, int *d);

int fn_825BC9B8(int param_1, float *a, float *b)
{
  if (*(int **)(param_1 + 0x8c4) != 0 && fn_82577EE0(*(int **)(param_1 + 0x8c4), a, b, 0) != 0) {
    return 1;
  }
  return 0;
}
