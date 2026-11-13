void fn_82E91F20(int param_1)

{
  float fVar1;
  unsigned int uVar2;
  __int64 lVar3;
  __int64 lVar4;
  int iVar6;
  __int64 lVar5;
  int iVar7;
  __int64 lVar8;
  
  iVar6 = *(int *)(param_1 + 0x84) + 1;
  lVar3 = 0;
  lVar8 = 7;
  iVar7 = iVar6 / 0x15 + (iVar6 >> 0x1f);
  *(unsigned int *)(param_1 + 0x80) =
       *(unsigned int *)((iVar6 + (iVar7 - (iVar7 >> 0x1f)) * -0x15 + 10) * 4 + param_1);
  do {
    lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x84) + lVar3;
    lVar5 = lVar4 + 2;
    iVar7 = (int)lVar5;
    uVar2 = iVar7 / 0x15 + (iVar7 >> 0x1f);
    fVar1 = *(float *)((int)((lVar5 + ((__int64)(int)uVar2 + (unsigned __int64)(uVar2 >> 0x1f)) * -0x15 +
                              10 & 0xffffffff) << 2) + param_1);
    if (*(float *)(param_1 + 0x80) < fVar1) {
      *(float *)(param_1 + 0x80) = fVar1;
    }
    lVar4 = lVar4 + 3;
    iVar7 = (int)lVar4;
    uVar2 = iVar7 / 0x15 + (iVar7 >> 0x1f);
    fVar1 = *(float *)((int)((lVar4 + ((__int64)(int)uVar2 + (unsigned __int64)(uVar2 >> 0x1f)) * -0x15 +
                              10 & 0xffffffff) << 2) + param_1);
    if (*(float *)(param_1 + 0x80) < fVar1) {
      *(float *)(param_1 + 0x80) = fVar1;
    }
    lVar3 = lVar3 + 2;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}

