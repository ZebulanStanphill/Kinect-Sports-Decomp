#define true 1


unsigned __int64 fn_82FA7BC8(int *param_1,int param_2)

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
    iVar3 = *(int *)(iVar1 + 0x3c);
    iVar2 = iVar1;
  }
  if (iVar1 == 0) {
    return 2;
  }
  if (iVar1 == *param_1) {
    *param_1 = *(int *)(iVar1 + 0x3c);
  }
  else {
    *(int *)(iVar2 + 0x3c) = *(int *)(iVar1 + 0x3c);
  }
  if (iVar1 == param_1[1]) {
    param_1[1] = iVar2;
  }
  param_1[2] = param_1[2] + -1;
  return 1;
}

