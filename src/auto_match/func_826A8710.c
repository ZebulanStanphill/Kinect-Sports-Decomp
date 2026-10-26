typedef int (*code)();

unsigned int fn_826A8710(int param_1)
{
  int *o = *(int **)(param_1 + 0x74);
  int iVar1 = (*(code *)(*o + 0x40))(o);
  return *(unsigned int *)(iVar1 + 0xb00) >> 2 & 1;
}
