unsigned __int64 fn_82BC5E78(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = *(unsigned int *)(param_1 + 4);
  uVar2 = 0;
  if (0 < (int)uVar1) {
    iVar4 = 0;
    do {
      if (uVar2 < uVar1) {
        piVar3 = (int *)(*(int *)(param_1 + 8) + iVar4);
      }
      else {
        piVar3 = (int *)0x0;
      }
      if (*piVar3 == *param_2) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      iVar4 = iVar4 + 4;
    } while ((int)uVar2 < (int)uVar1);
  }
  return 0;
}

