typedef int (*code)();

unsigned int fn_8269ABD8(int param_1)
{
  int iVar1;

  iVar1 = (*(code *)(*(int *)(param_1 + -0xc) + 0x40))(param_1 + -0xc);
  return (~*(unsigned int *)(iVar1 + 0xb00) >> 6) & 1;
}
