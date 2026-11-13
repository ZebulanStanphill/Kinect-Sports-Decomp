void fn_82C17FD0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar3;
  
  iVar1 = (int)param_2;
  *(int *)(param_1 + 0x148) = iVar1;
  *(int *)(param_1 + 0x14c) = (int)param_3;
  uVar2 = param_2;
  uVar4 = param_3;
  if (0 < iVar1) {
    do {
      uVar3 = uVar2;
      if ((int)uVar2 < (int)uVar4) {
        uVar3 = uVar4;
        uVar4 = uVar2;
      }
      uVar2 = uVar3 - uVar4;
    } while (0 < (__int64)uVar2);
  }
  iVar5 = (int)uVar4;
  if (iVar5 == 0) {
    return;
  }
  *(int *)(param_1 + 0x148) = iVar1 / iVar5;
  trapWord(6,uVar4,0);
  *(int *)(param_1 + 0x14c) = (int)param_3 / iVar5;
  trapWord(6,uVar4,0);
  trapWord(5,uVar4 & ~(((param_2 & 0x7fffffff) << 1 | (param_2 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar4 & ~(((param_3 & 0x7fffffff) << 1 | (param_3 & 0xffffffff) >> 0x1f) - 1),0xffff);
  return;
}

