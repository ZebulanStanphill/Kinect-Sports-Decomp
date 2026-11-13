#define true 1


__int64 fn_82BC59C8(int param_1,int param_2)

{
  __int64 lVar1;
  unsigned int uVar2;
  int iVar3;
  
  lVar1 = 1;
  iVar3 = 0;
  uVar2 = 1;
  while( true ) {
    if (*(unsigned int *)(*(int *)(param_1 + 0x3c) + 4) < uVar2) {
      return -1;
    }
    if (param_2 == *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 8) + iVar3)) break;
    lVar1 = lVar1 + 1;
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return lVar1;
}

