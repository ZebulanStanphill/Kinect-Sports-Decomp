typedef unsigned char bool;
extern int fn_82BFE128();
extern unsigned __int64 storeWordConditionalIndexed();


/* WARNING: Removing unreachable block (ram,0x82623438) */

void fn_82623380(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar4;
  int iVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  int iVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  unsigned int *puVar12;
  unsigned __int64 in_MSR;
  char in_RESERVE;
  unsigned char in_cr0;
  
  for (puVar12 = *(unsigned int **)(param_1 + 0x10); puVar12 != *(unsigned int **)(param_1 + 0x14);
      puVar12 = puVar12 + 3) {
    uVar1 = *(unsigned int *)(param_1 + 0xc);
    lVar10 = 4;
    iVar5 = puVar12[1];
    uVar2 = puVar12[2];
    uVar3 = *puVar12;
    uVar11 = (unsigned __int64)uVar1;
    do {
      piVar4 = (int *)*(int *)uVar11;
      if ((piVar4[1] == uVar2) && (*piVar4 == iVar5)) {
        fn_82BFE128(piVar4[4],uVar3,param_3,param_4,param_5);
        param_5 = in_MSR;
        lVar7 = (unsigned __int64)uVar1 + 0x20;
        do {
          puVar8 = (unsigned int *)lVar7;
          if (in_RESERVE != '\0') {
            uVar6 = storeWordConditionalIndexed((unsigned __int64)*puVar8 - (unsigned __int64)uVar2,0,lVar7);
            *puVar8 = uVar6;
            in_cr0 = 2;
          }
          in_MSR = param_5;
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
      lVar10 = lVar10 + -1;
      in_cr0 = (lVar10 == 0) << 1;
      uVar11 = uVar11 + 4;
    } while (lVar10 != 0);
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 != *(int *)(param_1 + 0x14)) {
    for (iVar9 = iVar5; iVar9 != *(int *)(param_1 + 0x14); iVar9 = iVar9 + 0xc) {
    }
    *(int *)(param_1 + 0x14) = iVar5;
  }
  return;
}

