extern int fn_82963958();
extern int fn_8299A190();
extern int memcpy();
extern unsigned int iStack_464;


unsigned __int64 fn_8299A220(int param_1,int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  int *piVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  int *piVar11;
  unsigned __int64 uVar12;
  int iStack_464;
  int aiStack_460 [252];
  
  uVar4 = 0;
  piVar3 = param_2;
  if ((param_3 & 0xffffffff) != 0) {
    do {
      iVar5 = *piVar3;
      if (iVar5 != 0) {
        uVar6 = 0;
        if (*(int *)(iVar5 + 0xc) != 0) {
          iVar7 = 0;
          do {
            uVar6 = uVar6 + 1;
            piVar11 = (int *)(*(int *)(iVar5 + 0x10) + iVar7);
            iVar7 = iVar7 + 4;
            *(unsigned int *)(*(int *)(*piVar11 * 4 + *(int *)(param_1 + 0x14)) + 0x48) = uVar4;
          } while (uVar6 < *(unsigned int *)(iVar5 + 0xc));
        }
        *(unsigned int *)(iVar5 + 0x1c) = 0;
        *(unsigned int *)(iVar5 + 0x14) = 0;
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while ((unsigned __int64)uVar4 < (param_3 & 0xffffffff));
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(iVar5 + *(int *)(param_1 + 0x14));
      iVar7 = *(int *)(iVar1 + 0x38);
      if (iVar7 != -1) {
        *(unsigned int *)(iVar1 + 0x48) =
             *(unsigned int *)(*(int *)(iVar7 * 4 + *(int *)(param_1 + 0x14)) + 0x48);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar4 < *(unsigned int *)(param_1 + 8));
  }
  uVar10 = 0;
  piVar3 = param_2;
  if ((param_3 & 0xffffffff) != 0) {
    do {
      iVar5 = *piVar3;
      if (iVar5 != 0) {
        uVar12 = 0;
        uVar4 = 0;
        if (*(int *)(iVar5 + 4) != 0) {
          iVar7 = 0;
          piVar11 = &iStack_464;
          do {
            iVar1 = *(int *)(*(int *)(*(int *)(iVar7 + *(int *)(iVar5 + 8)) * 4 +
                                     *(int *)(param_1 + 0x14)) + 0x48);
            if (iVar1 != -1) {
              uVar9 = 0;
              if ((uVar12 & 0xffffffff) != 0) {
                piVar8 = aiStack_460;
                do {
                  if (*piVar8 == iVar1) break;
                  uVar9 = uVar9 + 1;
                  piVar8 = piVar8 + 1;
                } while ((uVar9 & 0xffffffff) < (uVar12 & 0xffffffff));
              }
              if ((uVar9 & 0xffffffff) == (uVar12 & 0xffffffff)) {
                piVar11 = piVar11 + 1;
                *piVar11 = iVar1;
                uVar12 = uVar12 + 1;
              }
              uVar2 = fn_8299A190(param_2[iVar1],uVar10);
              if ((int)uVar2 < 0) {
                return uVar2;
              }
            }
            uVar4 = uVar4 + 1;
            iVar7 = iVar7 + 4;
          } while (uVar4 < *(unsigned int *)(iVar5 + 4));
        }
        uVar9 = fn_82963958(uVar12);
        *(int *)(iVar5 + 0x18) = (int)uVar9;
        if ((uVar9 & 0xffffffff) == 0) {
          return 0xffffffff8007000e;
        }
        memcpy(uVar9,aiStack_460,(uVar12 & 0x3fffffff) << 2);
        *(int *)(iVar5 + 0x14) = (int)uVar12;
      }
      uVar10 = uVar10 + 1;
      piVar3 = piVar3 + 1;
    } while ((uVar10 & 0xffffffff) < (param_3 & 0xffffffff));
  }
  return 0;
}

