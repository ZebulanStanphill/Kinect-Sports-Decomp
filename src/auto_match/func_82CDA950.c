extern unsigned int *auStack_4c0;
extern unsigned int lbl_821090E8;
extern unsigned int lbl_821090EA;
extern unsigned int lbl_821090EC;
extern unsigned int lbl_821090EE;


void fn_82CDA950(unsigned __int64 param_1, __int64 param_2, unsigned __int64 param_3, int param_4, int param_5, unsigned int param_6, unsigned int param_7, unsigned __int64 unused_arg_8, int in_stack_00000054, unsigned int in_stack_0000005c)

{
  int iVar1;
  int iVar2;
  unsigned char *pbVar3;
  int iVar4;
  unsigned short *puVar5;
  int iVar7;
  int iVar8;
  __int64 lVar6;
  int iVar9;
  unsigned __int64 *puVar10;
  short *psVar11;
  short *psVar13;
  unsigned __int64 uVar12;
  int iVar14;
  unsigned char *puVar15;
  unsigned __int64 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  short *psVar20;
  __int64 lVar21;
  __int64 lVar22;


  unsigned char auStack_4c0 [4];
  short asStack_4bc [510];
  
  param_6 = param_6 & 3;
  param_7 = param_7 & 3;
  iVar19 = param_6 * 8;
  iVar9 = param_7 * 8;
  psVar13 = &lbl_821090E8 + param_6 * 4;
  psVar20 = &lbl_821090E8 + param_7 * 4;
  iVar4 = (int)param_3;
  if (param_6 == 0) {
    if (param_7 == 0) {
      uVar12 = (unsigned __int64)in_stack_0000005c;
      if (0 < (int)in_stack_0000005c) {
        param_2 = param_2 - param_3;
        puVar10 = (unsigned __int64 *)(param_4 - param_5);
        do {
          param_2 = param_2 + param_3;
          puVar10 = (unsigned __int64 *)((int)puVar10 + param_5);
          *puVar10 = *(unsigned __int64 *)param_2;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    else {
      iVar19 = 4;
      if (param_7 != 2) {
        iVar19 = 6;
      }
      uVar12 = (unsigned __int64)in_stack_0000005c;
      iVar18 = (1 << (iVar19 - 1U & 0x3f)) + in_stack_00000054 + -1;
      if (0 < (int)in_stack_0000005c) {
        iVar8 = iVar4 * 3;
        param_2 = param_2 - param_3;
        do {
          iVar14 = 0;
          iVar17 = (int)param_2;
          lVar21 = 2;
          do {
            iVar7 = iVar17 + iVar14;
            iVar1 = (int)((param_3 & 0x7fffffff) << 1);
            iVar7 = (int)((unsigned int)*(unsigned char *)(iVar1 + iVar7) * (int)*(short *)(&lbl_821090EC + iVar9) +
                          (unsigned int)*(unsigned char *)(iVar8 + iVar7) * (int)*(short *)(&lbl_821090EE + iVar9) +
                          (unsigned int)*(unsigned char *)(iVar7 + iVar4) * (int)(short)(&lbl_821090EA)[param_7 * 4]
                          + (int)*psVar20 * (unsigned int)*(unsigned char *)(iVar17 + iVar14) + iVar18) >> iVar19;
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            else if (0xff < iVar7) {
              iVar7 = 0xff;
            }
            iVar2 = iVar17 + iVar14 + 1;
            *(char *)(param_4 + iVar14) = (char)iVar7;
            iVar7 = (int)((unsigned int)*(unsigned char *)(iVar1 + iVar2) * (int)*(short *)(&lbl_821090EC + iVar9) +
                          (unsigned int)*(unsigned char *)(iVar8 + iVar2) * (int)*(short *)(&lbl_821090EE + iVar9) +
                          (unsigned int)*(unsigned char *)(iVar2 + iVar4) * (int)(short)(&lbl_821090EA)[param_7 * 4]
                          + (int)*psVar20 * (unsigned int)*(unsigned char *)(iVar17 + iVar14 + 1) + iVar18) >> iVar19
            ;
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            else if (0xff < iVar7) {
              iVar7 = 0xff;
            }
            pbVar3 = (unsigned char *)(iVar17 + iVar14 + 2);
            *(char *)(param_4 + iVar14 + 1) = (char)iVar7;
            iVar7 = (int)((unsigned int)pbVar3[iVar1] * (int)*(short *)(&lbl_821090EC + iVar9) +
                          (unsigned int)pbVar3[iVar8] * (int)*(short *)(&lbl_821090EE + iVar9) +
                          (unsigned int)pbVar3[iVar4] * (int)(short)(&lbl_821090EA)[param_7 * 4] +
                          (int)*psVar20 * (unsigned int)*pbVar3 + iVar18) >> iVar19;
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            else if (0xff < iVar7) {
              iVar7 = 0xff;
            }
            iVar2 = iVar17 + 3 + iVar14;
            *(char *)(param_4 + iVar14 + 2) = (char)iVar7;
            iVar7 = (int)((unsigned int)*(unsigned char *)(iVar1 + iVar2) * (int)*(short *)(&lbl_821090EC + iVar9) +
                          (unsigned int)*(unsigned char *)(iVar8 + iVar2) * (int)*(short *)(&lbl_821090EE + iVar9) +
                          (unsigned int)*(unsigned char *)(iVar2 + iVar4) * (int)(short)(&lbl_821090EA)[param_7 * 4]
                          + (int)*psVar20 * (unsigned int)*(unsigned char *)(iVar17 + 3 + iVar14) + iVar18) >> iVar19
            ;
            if (iVar7 < 0) {
              iVar7 = 0;
            }
            else if (0xff < iVar7) {
              iVar7 = 0xff;
            }
            *(char *)(param_4 + 3 + iVar14) = (char)iVar7;
            iVar14 = iVar14 + 4;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          uVar12 = uVar12 - 1;
          param_2 = param_2 + param_3;
          param_4 = param_4 + param_5;
        } while (uVar12 != 0);
      }
    }
  }
  else if (param_7 == 0) {
    iVar4 = 4;
    if (param_6 != 2) {
      iVar4 = 6;
    }
    uVar12 = (unsigned __int64)in_stack_0000005c;
    in_stack_00000054 = (1 << (iVar4 - 1U & 0x3f)) - in_stack_00000054;
    if (0 < (int)in_stack_0000005c) {
      do {
        iVar18 = 0;
        iVar9 = (int)param_2;
        lVar21 = 2;
        do {
          iVar8 = iVar9 + iVar18;
          iVar8 = (int)((unsigned int)*(unsigned char *)(iVar8 + 1) * (int)*(short *)(&lbl_821090EC + iVar19) +
                        (unsigned int)*(unsigned char *)(iVar9 + iVar18) * (int)(short)(&lbl_821090EA)[param_6 * 4] +
                        (unsigned int)*(unsigned char *)(iVar8 + 2) * (int)*(short *)(&lbl_821090EE + iVar19) +
                        (unsigned int)*(unsigned char *)(iVar8 + -1) * (int)*psVar13 + in_stack_00000054) >> iVar4;
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          else if (0xff < iVar8) {
            iVar8 = 0xff;
          }
          iVar17 = iVar9 + iVar18;
          *(char *)(param_4 + iVar18) = (char)iVar8;
          iVar8 = (int)((unsigned int)*(unsigned char *)(iVar17 + 2) * (int)*(short *)(&lbl_821090EC + iVar19) +
                        (unsigned int)*(unsigned char *)(iVar17 + 1) * (int)(short)(&lbl_821090EA)[param_6 * 4] +
                        (unsigned int)*(unsigned char *)(iVar17 + 3) * (int)*(short *)(&lbl_821090EE + iVar19) +
                        (unsigned int)*(unsigned char *)(iVar9 + iVar18) * (int)*psVar13 + in_stack_00000054) >>
                  iVar4;
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          else if (0xff < iVar8) {
            iVar8 = 0xff;
          }
          iVar17 = iVar9 + iVar18;
          *(char *)(param_4 + iVar18 + 1) = (char)iVar8;
          iVar8 = (int)((unsigned int)*(unsigned char *)(iVar17 + 3) * (int)*(short *)(&lbl_821090EC + iVar19) +
                        (unsigned int)*(unsigned char *)(iVar17 + 2) * (int)(short)(&lbl_821090EA)[param_6 * 4] +
                        (unsigned int)*(unsigned char *)(iVar17 + 4) * (int)*(short *)(&lbl_821090EE + iVar19) +
                        (unsigned int)*(unsigned char *)(iVar17 + 1) * (int)*psVar13 + in_stack_00000054) >> iVar4;
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          else if (0xff < iVar8) {
            iVar8 = 0xff;
          }
          iVar17 = iVar9 + 2 + iVar18;
          *(char *)(param_4 + iVar18 + 2) = (char)iVar8;
          iVar8 = (int)((unsigned int)*(unsigned char *)(iVar17 + 2) * (int)*(short *)(&lbl_821090EC + iVar19) +
                        (unsigned int)*(unsigned char *)(iVar17 + 1) * (int)(short)(&lbl_821090EA)[param_6 * 4] +
                        (unsigned int)*(unsigned char *)(iVar17 + 3) * (int)*(short *)(&lbl_821090EE + iVar19) +
                        (unsigned int)*(unsigned char *)(iVar9 + 2 + iVar18) * (int)*psVar13 + in_stack_00000054) >>
                  iVar4;
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          else if (0xff < iVar8) {
            iVar8 = 0xff;
          }
          *(char *)(param_4 + 3 + iVar18) = (char)iVar8;
          iVar18 = iVar18 + 4;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        uVar12 = uVar12 - 1;
        param_2 = param_2 + param_3;
        param_4 = param_4 + param_5;
      } while (uVar12 != 0);
    }
  }
  else {
    puVar15 = auStack_4c0;
    iVar18 = 4;
    if (param_6 != 2) {
      iVar18 = 6;
    }
    iVar8 = 4;
    if (param_7 != 2) {
      iVar8 = 6;
    }
    uVar12 = (unsigned __int64)in_stack_0000005c;
    iVar17 = 0x40 - in_stack_00000054;
    if (0 < (int)in_stack_0000005c) {
      lVar21 = (param_2 - param_3) + -1;
      uVar16 = uVar12;
      do {
        puVar5 = (unsigned short *)(puVar15 + -2);
        lVar22 = 0xb;
        lVar6 = lVar21;
        do {
          pbVar3 = (unsigned char *)lVar6;
          lVar6 = lVar6 + 1;
          puVar5 = puVar5 + 1;
          *puVar5 = (short)((int)((unsigned int)pbVar3[(int)((param_3 & 0xffffffff) << 1)] *
                                  (int)*(short *)(&lbl_821090EC + iVar9) +
                                  (unsigned int)pbVar3[iVar4 + (int)((param_3 & 0xffffffff) << 1)] *
                                  (int)*(short *)(&lbl_821090EE + iVar9) +
                                  (unsigned int)pbVar3[iVar4] * (int)(short)(&lbl_821090EA)[param_7 * 4] +
                                  (unsigned int)*pbVar3 * (int)*psVar20 +
                                 (1 << ((iVar8 + iVar18) - 8U & 0x3f)) + in_stack_00000054 + -1) >>
                           ((iVar8 + iVar18) - 7U & 0x3f));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        uVar16 = uVar16 - 1;
        lVar21 = lVar21 + param_3;
        puVar15 = puVar15 + 0x40;
      } while (uVar16 != 0);
      if (0 < (int)in_stack_0000005c) {
        psVar20 = asStack_4bc;
        param_4 = param_4 + 2;
        do {
          iVar4 = 0;
          lVar21 = 2;
          psVar11 = psVar20;
          do {
            iVar9 = (int)*(short *)(&lbl_821090EE + iVar19) * (int)psVar11[1] +
                    (int)*psVar13 * (int)psVar11[-2] +
                    (int)(short)(&lbl_821090EA)[param_6 * 4] * (int)psVar11[-1] +
                    (int)*(short *)(&lbl_821090EC + iVar19) * (int)*psVar11 + iVar17 >> 7;
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            else if (0xff < iVar9) {
              iVar9 = 0xff;
            }
            *(char *)(param_4 + iVar4 + -2) = (char)iVar9;
            iVar9 = (int)*(short *)(&lbl_821090EE + iVar19) * (int)psVar11[2] +
                    (int)*psVar13 * (int)psVar11[-1] +
                    (int)(short)(&lbl_821090EA)[param_6 * 4] * (int)*psVar11 +
                    (int)*(short *)(&lbl_821090EC + iVar19) * (int)psVar11[1] + iVar17 >> 7;
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            else if (0xff < iVar9) {
              iVar9 = 0xff;
            }
            *(char *)(param_4 + -1 + iVar4) = (char)iVar9;
            iVar9 = (int)*(short *)(&lbl_821090EE + iVar19) * (int)psVar11[3] +
                    (int)*psVar13 * (int)*psVar11 +
                    (int)(short)(&lbl_821090EA)[param_6 * 4] * (int)psVar11[1] +
                    (int)*(short *)(&lbl_821090EC + iVar19) * (int)psVar11[2] + iVar17 >> 7;
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            else if (0xff < iVar9) {
              iVar9 = 0xff;
            }
            *(char *)(param_4 + iVar4) = (char)iVar9;
            iVar9 = (int)*(short *)(&lbl_821090EE + iVar19) * (int)psVar11[4] +
                    (int)*psVar13 * (int)psVar11[1] +
                    (int)(short)(&lbl_821090EA)[param_6 * 4] * (int)psVar11[2] +
                    (int)*(short *)(&lbl_821090EC + iVar19) * (int)psVar11[3] + iVar17 >> 7;
            if (iVar9 < 0) {
              iVar9 = 0;
            }
            else if (0xff < iVar9) {
              iVar9 = 0xff;
            }
            *(char *)(param_4 + 1 + iVar4) = (char)iVar9;
            psVar11 = psVar11 + 4;
            iVar4 = iVar4 + 4;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          uVar12 = uVar12 - 1;
          psVar20 = psVar20 + 0x20;
          param_4 = param_4 + param_5;
        } while (uVar12 != 0);
      }
    }
  }
  return;
}

