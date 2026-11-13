extern int fn_82BBFFC8();
extern int fn_82BC0088();


void fn_82BC0E80(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x24);
  uVar4 = 0;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar3 = 0;
    do {
      if ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar1 + 4)) {
        piVar2 = (int *)(*(int *)(iVar1 + 8) + iVar3);
      }
      else {
        piVar2 = (int *)fn_82BC0088(iVar1,uVar4);
      }
      iVar1 = *(int *)(param_1 + 0x24);
      if (*piVar2 == param_2) {
        fn_82BBFFC8(iVar1,uVar4);
        return;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar1 + 4));
  }
  return;
}

