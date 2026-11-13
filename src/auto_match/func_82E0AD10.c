extern int fn_82CE5338();
extern int fn_82CE5410();


void fn_82E0AD10(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    puVar2 = *(unsigned int **)(param_1 + 0x34);
    while ((unsigned __int64)*puVar2 != (param_2 & 0xffffffff)) {
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
      if (*(int *)(param_1 + 0x38) <= iVar1) {
        return;
      }
    }
    iVar3 = *(int *)(param_1 + 0x38) + -1;
    *(int *)(param_1 + 0x38) = iVar3;
    if (iVar3 != iVar1) {
      *(unsigned int *)(iVar1 * 4 + *(int *)(param_1 + 0x34)) =
           *(unsigned int *)(iVar3 * 4 + *(int *)(param_1 + 0x34));
    }
    iVar1 = fn_82CE5410();
    fn_82CE5338(*(unsigned int *)(iVar1 + 0x10),param_2);
  }
  return;
}

