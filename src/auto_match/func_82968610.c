typedef unsigned int uint;

void fn_82968610(int param_1,int param_2,uint param_3)
{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x14));
  if (*(int *)(iVar1 + 0x38) != -1) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x38) * 4 + *(int *)(param_1 + 0x14));
  }
  iVar2 = *(int *)(*(int *)(iVar1 + 4) * 4 + *(int *)(param_1 + 0x10));
  if (*(uint *)(iVar1 + 0x54) > param_3) {
    *(uint *)(iVar1 + 0x54) = param_3;
  }
  if (*(uint *)(iVar1 + 0x58) < param_3) {
    *(uint *)(iVar1 + 0x58) = param_3;
  }
  *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x5c) + 1;
  if (*(int *)(iVar1 + 8) == -1) return;
  if (*(uint *)(iVar2 + 0x28) > param_3) {
    *(uint *)(iVar2 + 0x28) = param_3;
  }
  if (*(uint *)(iVar2 + 0x2c) < param_3) {
    *(uint *)(iVar2 + 0x2c) = param_3;
  }
  *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + 1;
  fn_82968610(param_1, *(int *)(iVar1 + 8), param_3);
}
