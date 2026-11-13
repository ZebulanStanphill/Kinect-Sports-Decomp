#define true 1


void fn_82773A88(int *param_1)

{
  short sVar1;
  unsigned int uVar2;
  short *psVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  uVar2 = param_1[1];
  uVar4 = (unsigned __int64)uVar2;
  if ((0 < (int)uVar2) && (*(short *)(uVar2 * 2 + *param_1 + -2) == 0)) {
    uVar4 = uVar4 - 1;
  }
  uVar4 = uVar4 - 1;
  if ((__int64)uVar4 < 0) {
    return;
  }
  lVar5 = (uVar4 & 0x7fffffff) << 1;
  while( true ) {
    psVar3 = (short *)((int)lVar5 + *param_1);
    sVar1 = *psVar3;
    if ((sVar1 != 10) && (sVar1 != 0xd)) break;
    uVar4 = uVar4 - 1;
    lVar5 = lVar5 + -2;
    param_1[1] = param_1[1] + -1;
    *psVar3 = 0;
    if ((__int64)uVar4 < 0) {
      return;
    }
  }
  return;
}

