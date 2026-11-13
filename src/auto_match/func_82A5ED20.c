extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A5DAC0();
extern int fn_82A5E850();
extern int fn_82A64020();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8315F708;


__int64 fn_82A5ED20(int param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4,int *param_5)

{
  unsigned short uVar1;
  unsigned short uVar2;
  short sVar3;
  short *psVar4;
  float *pfVar5;
  short sVar7;
  unsigned int uVar6;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  __int64 lVar13;
  short sVar14;
  unsigned int uVar15;
  int *piVar17;
  unsigned __int64 uVar16;
  unsigned int uVar18;
  
  if ((param_2 & 0xffffffff) != 0) {
    piVar17 = param_5;
    do {
      if ((*(unsigned int *)(*(int *)(param_1 + 4) + 0x418) & 2) != 0) {
        fn_82A5DAC0(*(unsigned int *)(((int)param_3 - (int)param_5) + (int)piVar17));
        fn_82A5DAC0(*piVar17);
      }
      param_2 = param_2 - 1;
      piVar17 = piVar17 + 2;
    } while (param_2 != 0);
  }
  lVar13 = 0;
  if ((*(unsigned int *)(*(int *)(param_1 + 4) + 0x418) & 2) == 2) {
    uVar1 = *(unsigned short *)(*param_3 + 2);
    uVar15 = (unsigned int)uVar1;
    uVar2 = *(unsigned short *)(*param_5 + 2);
    lVar13 = fn_8265C940((__int64)(int)(unsigned int)uVar2 * (__int64)(int)(unsigned int)uVar1 * 4 &
                               0xfffffffc,0x20970000);
    *(int *)(param_1 + 0xc) = (int)lVar13;
    if (lVar13 == 0) {
      lVar13 = -0x7ff8fff2;
    }
    else {
      psVar4 = (short *)*param_3;
      iVar9 = 0;
      sVar3 = psVar4[7];
      sVar14 = sVar3;
      if (*psVar4 == -2) {
        iVar9 = *(int *)(psVar4 + 10);
        sVar14 = psVar4[9];
      }
      iVar10 = 0;
      if (*(short *)*param_5 == -2) {
        iVar10 = *(int *)((short *)*param_5 + 10);
      }
      if (((iVar9 == 0) && (iVar9 = 0, uVar15 != 0)) && (uVar15 < 9)) {
        iVar9 = *(int *)(&lbl_8315F708 + (unsigned int)uVar1 * 4);
      }
      if (((iVar10 == 0) && (iVar10 = 0, uVar2 != 0)) && (uVar2 < 9)) {
        iVar10 = *(int *)(&lbl_8315F708 + (unsigned int)uVar2 * 4);
      }
      lVar13 = fn_82A5E850(uVar15,uVar2,iVar9,iVar10);
      if (-1 < lVar13) {
        uVar16 = 4;
        *(unsigned int *)(param_1 + 0x14) = 0;
        if ((unsigned int)uVar1 == (unsigned int)uVar2) {
          uVar16 = 7;
          uVar8 = 0;
          if (uVar2 != 0) {
            iVar9 = 0;
            do {
              uVar11 = 0;
              if (uVar15 != 0) {
                pfVar5 = *(float **)(param_1 + 0xc);
                uVar18 = uVar15;
                do {
                  if (uVar11 == uVar8) {
                    if (pfVar5[iVar9 + uVar11] != *pfVar5) {
                      uVar16 = uVar16 & 0xfffffffe;
                    }
                  }
                  else if (pfVar5[iVar9 + uVar11] != lbl_821AAD20) {
                    uVar16 = uVar16 & 0xfffffffc;
                  }
                  uVar11 = uVar11 + 1;
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
              uVar8 = uVar8 + 1;
              iVar9 = iVar9 + uVar15;
            } while (uVar8 < uVar2);
          }
        }
        if ((uVar16 & 1) != 0) {
          fn_8265C990(*(unsigned int *)(param_1 + 0xc),0x20970000);
          *(unsigned int *)(param_1 + 0xc) = 0;
          *(unsigned int *)(param_1 + 0x14) = 1;
        }
        sVar7 = fn_82A5DAC0(*param_3);
        if (sVar7 == 1) {
          if (sVar3 == 0x20) {
            if (sVar14 == 0x20) {
              uVar6 = fn_82A64020(6,uVar15,uVar2,uVar16);
              uVar12 = 6;
            }
            else if (sVar14 == 0x18) {
              uVar6 = fn_82A64020(5,uVar15,uVar2,uVar16);
              uVar12 = 5;
            }
            else {
              uVar6 = fn_82A64020(3,uVar15,uVar2,uVar16);
              uVar12 = 3;
            }
          }
          else {
            if (sVar3 != 0x18) {
              if (sVar3 == 0x10) {
                uVar6 = fn_82A64020(1,uVar15,uVar2,uVar16);
                *(unsigned int *)(param_1 + 8) = uVar6;
                *(unsigned int *)(param_1 + 0x10) = 1;
              }
              else {
                uVar6 = fn_82A64020(0,uVar15,uVar2,uVar16);
                *(unsigned int *)(param_1 + 8) = uVar6;
                *(unsigned int *)(param_1 + 0x10) = 0;
              }
              goto LAB_82a5edfc;
            }
            if (sVar14 == 0x18) {
              uVar6 = fn_82A64020(4,uVar15,uVar2,uVar16);
              uVar12 = 4;
            }
            else {
              uVar6 = fn_82A64020(2,uVar15,uVar2,uVar16);
              uVar12 = 2;
            }
          }
        }
        else {
          uVar6 = fn_82A64020(7,uVar15,uVar2,uVar16);
          uVar12 = 7;
        }
        *(unsigned int *)(param_1 + 8) = uVar6;
        *(unsigned int *)(param_1 + 0x10) = uVar12;
        goto LAB_82a5edfc;
      }
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      fn_8265C990(*(int *)(param_1 + 0xc),0x20970000);
      *(unsigned int *)(param_1 + 0xc) = 0;
    }
    *(unsigned int *)(param_1 + 8) = 0;
    *(unsigned int *)(param_1 + 0x14) = 0;
    *(unsigned int *)(param_1 + 0x10) = 7;
    if ((int)lVar13 < 0) {
      return lVar13;
    }
  }
LAB_82a5edfc:
  *(unsigned int *)(param_1 + 0x18) = 1;
  return lVar13;
}

