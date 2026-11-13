extern int fn_82A3FC78();


unsigned __int64 fn_82A3FF60(int param_1,__int64 param_2,unsigned int param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  RtlEnterCriticalSection(0xffffffff83219da4);
  lVar5 = param_2 + param_4 + 8;
  uVar3 = fn_82A3FC78(param_1,0,lVar5);
  uVar4 = 0;
  if ((uVar3 & 0xffffffff) != 0) {
    uVar4 = uVar3 + 8;
    if ((param_4 & 0xffffffff) != 0) {
      trapWord(6,param_4,0);
      uVar4 = (__int64)((int)((uVar4 & 0xffffffff) / (param_4 & 0xffffffff)) + 1) *
              (__int64)(int)param_4;
    }
    iVar1 = (int)uVar4;
    *(unsigned int *)(iVar1 + -8) = param_3;
    *(int *)(iVar1 + -4) = iVar1 - (int)uVar3;
    iVar1 = ((param_3 & 0x1fff) + 5) * 4;
    iVar2 = (int)lVar5;
    *(int *)(iVar1 + param_1) = *(int *)(iVar1 + param_1) + iVar2;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar2;
  }
  RtlLeaveCriticalSection(0xffffffff83219da4);
  return uVar4;
}

