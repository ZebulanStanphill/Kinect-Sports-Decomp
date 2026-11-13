#define true 1


unsigned __int64 fn_82FF25A8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar2 = 0;
  while( true ) {
    iVar1 = iVar3;
    if (iVar1 == 0) {
      return 2;
    }
    if (iVar1 == param_2) break;
    iVar3 = *(int *)(iVar1 + 0x14);
    iVar2 = iVar1;
  }
  if (iVar1 == 0) {
    return 2;
  }
  if (iVar1 == *param_1) {
    *param_1 = *(int *)(iVar1 + 0x14);
    return 1;
  }
  *(int *)(iVar2 + 0x14) = *(int *)(iVar1 + 0x14);
  return 1;
}

