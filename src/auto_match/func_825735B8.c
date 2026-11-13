extern int fn_82F6B0C0();


unsigned int fn_825735B8(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar5 = 0;
    do {
      uVar1 = *(unsigned int *)(*(int *)(param_1 + 8) + iVar5);
      if ((uVar1 != 0) &&
         (iVar2 = fn_82F6B0C0((unsigned __int64)uVar1 + 0x110,param_2,0x80), iVar2 == 0)) {
        iVar5 = *(int *)(uVar4 * 4 + *(int *)(param_1 + 8));
        goto LAB_82573624;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar4 < *(unsigned int *)(param_1 + 0x10));
  }
  iVar5 = 0;
LAB_82573624:
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(unsigned int *)(iVar5 + 0x1b0);
  }
  return uVar3;
}

