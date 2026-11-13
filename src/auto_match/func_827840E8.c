extern unsigned int uStack_10;


void fn_827840E8(double param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  float *pfVar8;
  int iVar9;
  unsigned __int64 uStack_10;
  
  uVar3 = 0;
  if (*(int *)(param_2 + 0x18) == 0) {
    return;
  }
  do {
    iVar9 = *(int *)((uVar3 >> 4 & 0xffffffc) + *(int *)(param_2 + 0x24)) + (uVar3 & 0x3f) * 0x18;
    uVar6 = (unsigned __int64)*(unsigned int *)(iVar9 + 4);
    if (2 < uVar6) {
      uVar1 = *(unsigned int *)(iVar9 + 8);
      uVar4 = *(unsigned __int64 *)
               (*(int *)((uVar1 >> 6 & 0x3fffffc) + *(int *)(param_2 + 0x14)) + (uVar1 & 0xff) * 8);
      if (1 < (uVar6 - 1 & 0xffffffff)) {
        lVar7 = uVar6 - 2;
        uVar5 = (unsigned __int64)uVar1;
        uStack_10 = uVar4;
        do {
          uVar5 = uVar5 + 1;
          pfVar8 = (float *)(*(int *)(((unsigned int)uVar5 >> 6 & 0x3fffffc) + *(int *)(param_2 + 0x14)) +
                            ((unsigned int)uVar5 & 0xff) * 8);
          if ((double)(ABS(*pfVar8 - (((unsigned __int64)(uStack_10) >> 0) & 0xFFFFFFFF)) + ABS(pfVar8[1] - (((unsigned __int64)(uStack_10) >> 32) & 0xFFFFFFFF))) < param_1)
          {
            *(unsigned __int64 *)pfVar8 = uVar4;
          }
          else {
            uVar4 = *(unsigned __int64 *)pfVar8;
            uStack_10 = uVar4;
          }
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      uVar6 = (uVar6 - 1) + (unsigned __int64)uVar1;
      uVar1 = (unsigned int)uVar6;
      uVar2 = uVar1 - 1;
      uVar4 = *(unsigned __int64 *)
               (*(int *)((uVar1 >> 6 & 0x3fffffc) + *(int *)(param_2 + 0x14)) +
               ((unsigned int)((uVar6 & 0xffffffff) << 3) & 0x7f8));
      pfVar8 = (float *)(*(int *)((uVar2 >> 6 & 0x3fffffc) + *(int *)(param_2 + 0x14)) +
                        (uVar2 & 0xff) * 8);
      uStack_10 = ((((unsigned __int64)(uStack_10)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((float)uVar4)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      uStack_10 = ((((unsigned __int64)(uStack_10)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((float)((unsigned __int64)uVar4 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      if ((double)(ABS(*pfVar8 - (((unsigned __int64)(uStack_10) >> 0) & 0xFFFFFFFF)) + ABS(pfVar8[1] - (((unsigned __int64)(uStack_10) >> 32) & 0xFFFFFFFF))) < param_1) {
        *(unsigned __int64 *)pfVar8 = uVar4;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(unsigned int *)(param_2 + 0x18));
  return;
}

