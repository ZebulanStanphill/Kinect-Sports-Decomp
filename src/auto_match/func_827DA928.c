extern __int64 fn_827E38C0();


__int64 fn_827DA928(int param_1)
{
  unsigned int *p;
  unsigned int *e;
  __int64 sum = 0;

  p = *(unsigned int **)(param_1 + 4);
  e = *(unsigned int **)(param_1 + 8);
  for (; p != e; p++) {
    sum = fn_827E38C0(*p) + sum;
  }
  p = *(unsigned int **)(param_1 + 0x2c);
  e = *(unsigned int **)(param_1 + 0x30);
  for (; p != e; p++) {
    sum = fn_827E38C0(*p) + sum;
  }
  return sum;
}
