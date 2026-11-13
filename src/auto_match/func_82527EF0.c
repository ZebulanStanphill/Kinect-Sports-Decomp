extern int fn_825279F8(int param_1);

unsigned int fn_82527EF0(int param_1)
{
  int iVar1;
  unsigned int uVar2;

  iVar1 = *(int *)(param_1 + 0x1b8);
  switch (fn_825279F8(param_1)) {
  case 1:
    uVar2 = *(unsigned int *)(iVar1 + 0xc);
    break;
  case 2:
    uVar2 = *(unsigned int *)(param_1 + 0x40) - 0x40;
    break;
  default:
    uVar2 = 0;
    break;
  }
  return uVar2;
}
