__int64 fn_82A381F0(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  
  RtlEnterCriticalSection(param_1 + 0x14);
  uVar1 = *(unsigned int *)(param_1 + 8);
  uVar5 = (unsigned __int64)uVar1;
  uVar4 = 0;
  uVar3 = (param_2 & 0x7ffffff) / 0xc;
  trapWord(6,uVar5,0);
  uVar3 = uVar3 - (__int64)(int)(uVar3 / uVar5) * (__int64)(int)uVar1;
  if (uVar5 != 0) {
    do {
      if ((unsigned __int64)*(unsigned int *)((int)uVar3 * 0x58 + *(int *)(param_1 + 4)) == (param_2 & 0xffffffff))
      break;
      uVar4 = uVar4 + 1;
      trapWord(6,uVar5,0);
      uVar3 = (uVar3 + 1) -
              (__int64)(int)((uVar3 + 1 & 0xffffffff) / (unsigned __int64)uVar1) * (__int64)(int)uVar1;
    } while (uVar4 < uVar1);
  }
  RtlLeaveCriticalSection(param_1 + 0x14);
  puVar6 = (unsigned int *)((int)uVar3 * 0x58 + *(unsigned int *)(param_1 + 4));
  if ((unsigned __int64)*puVar6 == (param_2 & 0xffffffff)) {
    if ((param_3 == 0) && (puVar6[1] == 0xffffffff)) {
      uVar3 = (unsigned __int64)puVar6[4];
    }
    lVar2 = uVar3 * 0x58 + (unsigned __int64)*(unsigned int *)(param_1 + 4);
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}

