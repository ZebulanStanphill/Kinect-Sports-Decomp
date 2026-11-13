#define true 1


int fn_82BC5A28(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 1;
  while( true ) {
    if (*(unsigned int *)(*(int *)(param_1 + 0x38) + 4) < uVar2) {
      return 0;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x38) + 8) + iVar3);
    if (*(int *)(iVar1 + 0x80) != param_2) break;
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 4;
  }
  return iVar1;
}

