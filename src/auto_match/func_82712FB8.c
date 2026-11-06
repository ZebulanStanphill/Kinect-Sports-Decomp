extern int fn_8268B8E8(int, unsigned int);
extern unsigned int fn_826BCBA0(int, char *, int, int, double);

int fn_82712FB8(int param_1)
{
  unsigned int uVar1;
  char auStack_50[64];

  uVar1 = fn_826BCBA0(param_1, auStack_50, 0x40, 10, *(double *)(param_1 + 0x20));
  fn_8268B8E8(param_1 + 0x28, uVar1);
  return (*(unsigned int *)(param_1 + 0x28) & 0xfffffffc) + 8;
}
