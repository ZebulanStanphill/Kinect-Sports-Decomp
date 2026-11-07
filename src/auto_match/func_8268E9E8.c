typedef unsigned int uint;

extern int fn_8268E320();
extern int fn_8268E570();

void fn_8268E9E8(uint *param_1, int param_2)
{
  uint uVar1;
  int iVar2;
  uint uVar3;

  uVar1 = *(uint *)(param_2 + 0x14);
  iVar2 = *(int *)(param_2 + 0x10);
  uVar3 = *param_1;
  *(int *)(iVar2 + 0x20) = param_2;
  uVar1 = uVar1 >> uVar3;
  *(uint *)(iVar2 + 0x24) = uVar1;
  fn_8268E570(param_1 + 3, iVar2);
  fn_8268E320(param_1 + 4, iVar2);
  param_1[5] = param_1[5] + uVar1;
  return;
}
