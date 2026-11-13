extern int fn_8268E320();
extern int fn_8268E570();

void fn_8268E9E8(unsigned int *param_1, int param_2)
{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;

  uVar1 = *(unsigned int *)(param_2 + 0x14);
  iVar2 = *(int *)(param_2 + 0x10);
  uVar3 = *param_1;
  *(int *)(iVar2 + 0x20) = param_2;
  uVar1 = uVar1 >> uVar3;
  *(unsigned int *)(iVar2 + 0x24) = uVar1;
  fn_8268E570(param_1 + 3, iVar2);
  fn_8268E320(param_1 + 4, iVar2);
  param_1[5] = param_1[5] + uVar1;
  return;
}
