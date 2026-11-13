extern int fn_82BC0088();


void fn_82BD1078(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 4);
      if ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar1 + 4)) {
        piVar2 = (int *)(*(int *)(iVar1 + 8) + iVar3);
      }
      else {
        piVar2 = (int *)fn_82BC0088(iVar1,uVar4);
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
      *(unsigned int *)(*piVar2 + 4) = 0;
    } while ((int)uVar4 < *(int *)(param_1 + 0x10));
  }
  return;
}

