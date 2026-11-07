typedef unsigned int uint;

extern int fn_825279F8(int param_1);

uint fn_82527EF0(int param_1)
{
  int iVar1;
  uint uVar2;

  iVar1 = *(int *)(param_1 + 0x1b8);
  switch (fn_825279F8(param_1)) {
  case 1:
    uVar2 = *(uint *)(iVar1 + 0xc);
    break;
  case 2:
    uVar2 = *(uint *)(param_1 + 0x40) - 0x40;
    break;
  default:
    uVar2 = 0;
    break;
  }
  return uVar2;
}
