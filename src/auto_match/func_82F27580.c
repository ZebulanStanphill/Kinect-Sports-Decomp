extern int fn_82F68CC0();
extern unsigned int iStack_114;


void fn_82F27580(__int64 param_1,unsigned __int64 param_2,int param_3,int param_4,__int64 param_5,
                  __int64 param_6,int param_7,int param_8)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  unsigned char *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar12;
  int iVar13;
  __int64 lVar11;
  int *piVar14;
  int iVar15;
  __int64 lVar16;
  __int64 lVar17;
  int in_stack_00000054;
  int iStack_114;
  int aiStack_110 [68];
  
  iVar6 = param_7 * 8;
  iVar7 = param_8 * 8;
  iVar8 = (int)param_6;
  iVar15 = (int)param_5;
  iVar9 = (int)param_2;
  if (param_7 == 0) {
    if (param_8 == 0) {
      if (0 < iVar8) {
        do {
          fn_82F68CC0(param_3,param_1,param_5);
          param_6 = param_6 + -1;
          param_3 = param_3 + param_4;
          param_1 = param_1 + param_2;
        } while (param_6 != 0);
      }
    }
    else {
      iVar6 = 4;
      if (param_8 != 2) {
        iVar6 = 6;
      }
      if (0 < iVar8) {
        param_1 = param_1 - param_2;
        do {
          iVar8 = 0;
          if (0 < iVar15) {
            lVar16 = param_5;
            do {
              iVar12 = (int)param_1 + iVar8;
              iVar12 = (int)((unsigned int)*(unsigned char *)((int)((param_2 & 0xffffffff) << 1) + iVar12) *
                             (int)*(short *)(iVar7 + -0x7ce46614) +
                             (unsigned int)*(unsigned char *)(iVar9 + (int)((param_2 & 0xffffffff) << 1) + iVar12) *
                             (int)*(short *)(iVar7 + -0x7ce46612) +
                             (unsigned int)*(unsigned char *)(iVar12 + iVar9) * (int)*(short *)(iVar7 + -0x7ce46616)
                             + (int)*(short *)(iVar7 + -0x7ce46618) *
                               (unsigned int)*(unsigned char *)((int)param_1 + iVar8) +
                            (1 << (iVar6 - 1U & 0x3f)) + in_stack_00000054 + -1) >> iVar6;
              if (iVar12 < 0) {
                iVar12 = 0;
              }
              else if (0xff < iVar12) {
                iVar12 = 0xff;
              }
              *(char *)(param_3 + iVar8) = (char)iVar12;
              iVar8 = iVar8 + 1;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
          param_6 = param_6 + -1;
          param_1 = param_1 + param_2;
          param_3 = param_3 + param_4;
        } while (param_6 != 0);
      }
    }
  }
  else if (param_8 == 0) {
    iVar7 = 4;
    if (param_7 != 2) {
      iVar7 = 6;
    }
    if (0 < iVar8) {
      param_1 = param_1 + -1;
      do {
        iVar9 = 0;
        lVar16 = param_5;
        if (0 < iVar15) {
          do {
            iVar8 = (int)param_1 + iVar9;
            iVar8 = (int)((unsigned int)*(unsigned char *)(iVar8 + 3) * (int)*(short *)(iVar6 + -0x7ce46612) +
                          (unsigned int)*(unsigned char *)(iVar8 + 2) * (int)*(short *)(iVar6 + -0x7ce46614) +
                          (unsigned int)*(unsigned char *)(iVar8 + 1) * (int)*(short *)(iVar6 + -0x7ce46616) +
                          (unsigned int)*(unsigned char *)((int)param_1 + iVar9) *
                          (int)*(short *)(iVar6 + -0x7ce46618) +
                         ((1 << (iVar7 - 1U & 0x3f)) - in_stack_00000054)) >> iVar7;
            if (iVar8 < 0) {
              iVar8 = 0;
            }
            else if (0xff < iVar8) {
              iVar8 = 0xff;
            }
            *(char *)(param_3 + iVar9) = (char)iVar8;
            iVar9 = iVar9 + 1;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        param_6 = param_6 + -1;
        param_1 = param_1 + param_2;
        param_3 = param_3 + param_4;
      } while (param_6 != 0);
    }
  }
  else {
    iVar12 = 4;
    if (param_7 != 2) {
      iVar12 = 6;
    }
    iVar13 = 4;
    if (param_8 != 2) {
      iVar13 = 6;
    }
    if (0 < iVar8) {
      lVar16 = (param_1 - param_2) + -1;
      do {
        if (0 < (int)(param_5 + 3)) {
          sVar1 = *(short *)(iVar7 + -0x7ce46612);
          sVar2 = *(short *)(iVar7 + -0x7ce46614);
          sVar3 = *(short *)(iVar7 + -0x7ce46616);
          sVar4 = *(short *)(iVar7 + -0x7ce46618);
          piVar14 = &iStack_114;
          lVar11 = lVar16;
          lVar17 = param_5 + 3;
          do {
            pbVar5 = (unsigned char *)lVar11;
            lVar11 = lVar11 + 1;
            piVar14 = piVar14 + 1;
            *piVar14 = (int)((unsigned int)pbVar5[iVar9] * (int)sVar3 +
                             (unsigned int)pbVar5[(int)((param_2 & 0xffffffff) << 1)] * (int)sVar2 +
                             (unsigned int)pbVar5[iVar9 + (int)((param_2 & 0xffffffff) << 1)] * (int)sVar1 +
                             (unsigned int)*pbVar5 * (int)sVar4 +
                            (1 << ((iVar13 + iVar12) - 8U & 0x3f)) + in_stack_00000054 + -1) >>
                       ((iVar13 + iVar12) - 7U & 0x3f);
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        iVar8 = 0;
        if (0 < iVar15) {
          piVar14 = aiStack_110 + 2;
          lVar11 = param_5;
          do {
            iVar10 = (int)*(short *)(iVar6 + -0x7ce46612) * piVar14[1] +
                     (int)*(short *)(iVar6 + -0x7ce46616) * piVar14[-1] +
                     (int)*(short *)(iVar6 + -0x7ce46618) * piVar14[-2] +
                     (int)*(short *)(iVar6 + -0x7ce46614) * *piVar14 + (0x40 - in_stack_00000054) >>
                     7;
            if (iVar10 < 0) {
              iVar10 = 0;
            }
            else if (0xff < iVar10) {
              iVar10 = 0xff;
            }
            *(char *)(iVar8 + param_3) = (char)iVar10;
            piVar14 = piVar14 + 1;
            iVar8 = iVar8 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        param_6 = param_6 + -1;
        lVar16 = lVar16 + param_2;
        param_3 = param_3 + param_4;
      } while (param_6 != 0);
    }
  }
  return;
}

