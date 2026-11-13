extern int fn_8302BF38();


int fn_8302BBA8(int param_1)
{
  unsigned int *p = *(unsigned int **)(param_1 + 0x18);
  if (p != 0) {
    return fn_8302BF38(p + 1) + *p;
  }
  return 0;
}
