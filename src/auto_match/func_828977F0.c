void fn_828977F0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  
  uVar4 = 0;
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x10) + 8);
  if (uVar1 != 0) {
    iVar3 = 0;
    do {
      if (uVar4 < *(unsigned int *)(*(int *)(param_1 + 0x10) + 8)) {
        piVar2 = *(int **)(*(int *)(param_1 + 8) + iVar3);
      }
      else {
        piVar2 = (int *)0x0;
      }
      (*(int (**)())(*piVar2 + 4))(piVar2,param_2,param_3);
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar4 < uVar1);
  }
  return;
}

