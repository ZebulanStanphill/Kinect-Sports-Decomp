extern unsigned int *auStack_80;
extern int fn_8296C8C8();
extern int fn_82975B00();
extern unsigned int iStack_90;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;


unsigned __int64
fn_8297AA48(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  int *piVar9;
  int iVar10;
  unsigned int uVar11;
  int *piVar12;
  unsigned int uVar13;
  int iVar14;
  unsigned __int64 uVar15;
  struct { int first; unsigned int second; } stack_pair_90;

  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned char auStack_80 [4];
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  
  uVar13 = *(unsigned int *)(*(int *)((int)((param_3 & 0xffffffff) << 2) + *(int *)(param_1 + 0x14)) + 0x38)
  ;
  if (uVar13 != 0xffffffff) {
    param_3 = (unsigned __int64)uVar13;
  }
  iVar2 = *(int *)((int)((param_3 & 0xffffffff) << 2) + *(int *)(param_1 + 0x14));
  if (((*param_2 == *(int *)(iVar2 + 4)) &&
      (iVar14 = *(int *)(iVar2 + 0xc) * 4, *(int *)(iVar14 + param_2[4]) == -1)) &&
     (((unsigned int)param_2[1] <= *(unsigned int *)(param_2[2] + iVar14) ||
      ((unsigned int)param_2[1] <= *(unsigned int *)(param_2[3] + iVar14))))) {
    if (param_6 == -1) {
      uVar8 = 0;
      if (param_2[0xb] != 0) {
        iVar14 = 0;
        uVar15 = 0xffffffffffffffff;
        uVar11 = 0xffffffff;
        do {
          uVar6 = 0;
          iVar10 = *(int *)(iVar2 + 0xc) * 4;
          uVar3 = *(unsigned int *)(param_2[0xf] + iVar10);
          uVar13 = *(unsigned int *)(iVar14 + param_2[8]);
          piVar9 = (int *)(*(int *)(param_2[0x10] + iVar10) * 4 + param_2[0x11]);
          if (uVar3 == 0) {
LAB_8297ab68:
            if (param_5 != -1) {
              uVar6 = 0;
              iVar10 = *(int *)(*(int *)(param_5 * 4 + *(int *)(param_1 + 0x14)) + 0xc) * 4;
              uVar3 = *(unsigned int *)(iVar10 + param_2[0xf]);
              piVar9 = (int *)(*(int *)(iVar10 + param_2[0x10]) * 4 + param_2[0x11]);
              if (uVar3 != 0) {
                do {
                  if (uVar13 == *(unsigned int *)(*piVar9 * 4 + param_2[4])) break;
                  uVar6 = uVar6 + 1;
                  piVar9 = piVar9 + 1;
                } while (uVar6 < uVar3);
                if (uVar6 < uVar3) goto LAB_8297ac30;
              }
            }
            uVar4 = fn_8296C8C8(param_1,param_2,param_3,uVar13,param_4,auStack_80,uVar15);
            if ((uVar4 & 0xffffffff) < (uVar15 & 0xffffffff)) {
              stack_pair_90.second = uStack_7c;
              uStack_88 = uStack_78;
              uStack_84 = uStack_74;
              uVar15 = uVar4;
              uVar11 = uVar13;
              if ((uVar4 & 0xffffffff) == 0) break;
            }
          }
          else {
            do {
              if (uVar13 == *(unsigned int *)(*piVar9 * 4 + param_2[4])) break;
              uVar6 = uVar6 + 1;
              piVar9 = piVar9 + 1;
            } while (uVar6 < uVar3);
            if (uVar3 <= uVar6) goto LAB_8297ab68;
          }
LAB_8297ac30:
          uVar13 = uVar11;
          uVar4 = uVar15;
          uVar8 = uVar8 + 1;
          iVar14 = iVar14 + 4;
          uVar15 = uVar4;
          uVar11 = uVar13;
        } while (uVar8 < (unsigned int)param_2[0xb]);
        goto LAB_8297ac78;
      }
    }
    else {
      uVar13 = *(unsigned int *)(param_6 * 4 + param_2[8]);
      uVar4 = fn_8296C8C8(param_1,param_2,param_3,uVar13,param_4,&stack_pair_90.first,0xffffffffffffffff);
LAB_8297ac78:
      if ((int)uVar4 != -1) {
        *(unsigned int *)(*(int *)(iVar2 + 0xc) * 4 + param_2[4]) = uVar13;
        if (((*(unsigned int *)(param_1 + 0xcc) & 4) != 0) && (uVar8 = param_2[9], uVar13 < uVar8)) {
          iVar14 = 0;
          if (*(unsigned int *)param_2[8] != uVar13) {
            iVar10 = 0;
            do {
              iVar10 = iVar10 + 4;
              iVar14 = iVar14 + 1;
            } while (*(unsigned int *)(iVar10 + param_2[8]) != uVar13);
          }
          uVar11 = iVar14 + 1;
          if (uVar11 < uVar8) {
            iVar14 = uVar11 * 4;
            do {
              uVar11 = uVar11 + 1;
              puVar7 = (unsigned int *)(iVar14 + param_2[8]);
              iVar14 = iVar14 + 4;
              puVar7[-1] = *puVar7;
              uVar8 = param_2[9];
            } while (uVar11 < uVar8);
          }
          *(unsigned int *)(uVar8 * 4 + param_2[8] + -4) = uVar13;
        }
        uVar8 = 0;
        piVar9 = &stack_pair_90.first;
        do {
          iVar10 = (*(int *)(iVar2 + 0xc) * 4 + uVar8) * 4;
          iVar14 = *(int *)(iVar10 + param_2[6]);
          if (iVar14 != -1) {
            iVar1 = *piVar9;
            *(int *)(param_2[5] + iVar10) = iVar1;
            piVar12 = (int *)((uVar13 * 4 + iVar1) * 4 + param_2[7]);
            if (*piVar12 != -1) {
              do {
                if (*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar12 * 4) + 0x58) <=
                    *(unsigned int *)(*(int *)(iVar14 * 4 + *(int *)(param_1 + 0x14)) + 0x58)) break;
                piVar12 = (int *)(*(int *)(*piVar12 * 4 + *(int *)(param_1 + 0x14)) + 0x30);
              } while (*piVar12 != -1);
            }
            *(int *)(*(int *)(iVar14 * 4 + *(int *)(param_1 + 0x14)) + 0x30) = *piVar12;
            *piVar12 = iVar14;
          }
          uVar8 = uVar8 + 1;
          piVar9 = piVar9 + 1;
        } while (uVar8 < 4);
        goto LAB_8297ae08;
      }
    }
    if ((param_2[0x18] & 0x40000000U) != 0) {
      fn_82975B00(param_1,*(unsigned int *)(param_2[0x17] + 0x3c),0xfa4,0xffffffff82038a28);
    }
    uVar5 = 0xffffffff80004005;
  }
  else {
LAB_8297ae08:
    if ((*(int *)(iVar2 + 8) == -1) ||
       (uVar5 = fn_8297AA48(param_1,param_2,*(int *)(iVar2 + 8),0,0xffffffffffffffff,
                              0xffffffffffffffff), -1 < (int)uVar5)) {
      uVar5 = 0;
    }
  }
  return uVar5;
}

