int fn_82DDDFE0(int param_1)

{
  float fVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  
  iVar5 = param_1 + 0xf70;
  lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10) - 2;
  fVar1 = *(float *)(param_1 + 0xfb0);
  if ((int)lVar3 < 0) {
    return iVar5;
  }
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10) - 1;
  iVar2 = iVar5;
  if (3 < (int)uVar4) {
    uVar6 = (uVar4 & 0xffffffff) >> 2;
    lVar3 = lVar3 - (uVar4 & 0xfffffffc);
    do {
      if (*(float *)(iVar5 + 0x90) < fVar1) {
        iVar2 = iVar5 + 0x50;
        fVar1 = *(float *)(iVar5 + 0x90);
      }
      if (*(float *)(iVar5 + 0xe0) < fVar1) {
        iVar2 = iVar5 + 0xa0;
        fVar1 = *(float *)(iVar5 + 0xe0);
      }
      if (*(float *)(iVar5 + 0x130) < fVar1) {
        iVar2 = iVar5 + 0xf0;
        fVar1 = *(float *)(iVar5 + 0x130);
      }
      if (*(float *)(iVar5 + 0x180) < fVar1) {
        iVar2 = iVar5 + 0x140;
        fVar1 = *(float *)(iVar5 + 0x180);
      }
      iVar5 = iVar5 + 0x140;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if ((int)lVar3 < 0) {
    return iVar2;
  }
  lVar3 = lVar3 + 1;
  do {
    if (*(float *)(iVar5 + 0x90) < fVar1) {
      fVar1 = *(float *)(iVar5 + 0x90);
      iVar2 = iVar5 + 0x50;
    }
    lVar3 = lVar3 + -1;
    iVar5 = iVar5 + 0x50;
  } while (lVar3 != 0);
  return iVar2;
}

