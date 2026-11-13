extern int fn_8265CA20();


void fn_825AD4B8(int param_1)

{
  int iVar1;
  __int64 lVar2;
  int iVar3;
  int iVar4;
  
  while (*(int *)(param_1 + 0x10) != 0) {
    if ((unsigned __int64)*(unsigned int *)(param_1 + 0x10) != 0) {
      lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10) - 1;
      *(int *)(param_1 + 0x10) = (int)lVar2;
      if (lVar2 == 0) {
        *(unsigned int *)(param_1 + 0xc) = 0;
      }
    }
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 != 0) {
    iVar4 = iVar3 << 2;
    do {
      iVar4 = iVar4 + -4;
      iVar3 = iVar3 + -1;
      iVar1 = *(int *)(iVar4 + *(int *)(param_1 + 4));
      if (iVar1 != 0) {
        fn_8265CA20(iVar1);
      }
    } while (iVar3 != 0);
  }
  if (*(int *)(param_1 + 4) != 0) {
    fn_8265CA20();
  }
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 4) = 0;
  return;
}

