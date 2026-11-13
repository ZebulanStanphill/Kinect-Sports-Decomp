extern int fn_8278FDC8();
extern int fn_82792180();


void fn_8279A300(int param_1,unsigned __int64 param_2)

{
  int iVar2;
  __int64 lVar1;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  uVar5 = param_2;
  if ((*(unsigned int *)(param_1 + 0x1c) != 0) &&
     (iVar2 = fn_8278FDC8((unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + 0x14), iVar2 != 0)) {
    uVar4 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x30);
    uVar3 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x30) + 0x1c) +
            (unsigned __int64)*(unsigned int *)(param_1 + 0x68);
    if (((uVar3 & 0xffffffff) <= uVar4) && (uVar4 <= (uVar3 + param_2 & 0xffffffff))) {
      uVar5 = uVar4 - uVar3;
      if ((param_2 & 0xffffffff) <= (uVar4 - uVar3 & 0xffffffff)) {
        uVar5 = param_2;
      }
      uVar3 = fn_8278FDC8(*(int *)(param_1 + 0x1c) + 0x14);
      uVar4 = (*(unsigned int *)(param_1 + 0x28) - uVar5) + param_2;
      if ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff)) {
        lVar1 = fn_8278FDC8((unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + 0x14);
        uVar5 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x28) - lVar1) + param_2;
        iVar2 = fn_8278FDC8((unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + 0x14);
        *(int *)(param_1 + 0x28) = iVar2;
        iVar2 = *(int *)(param_1 + 0xa8) + iVar2;
      }
      else {
        *(int *)(param_1 + 0x28) = (int)uVar4;
        iVar2 = (*(int *)(param_1 + 0xa8) - (int)uVar5) + (int)param_2;
      }
      *(int *)(param_1 + 0xa8) = iVar2;
    }
  }
  if ((uVar5 & 0xffffffff) != 0) {
    fn_82792180(param_1 + 0x4c,uVar5);
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + (int)uVar5;
  }
  return;
}

