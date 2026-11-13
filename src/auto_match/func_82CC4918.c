extern unsigned int lbl_821090E8;
extern unsigned int lbl_821090EA;
extern unsigned int lbl_821090EC;
extern unsigned int lbl_821090EE;
extern unsigned int uStack_e2;


void fn_82CC4918(__int64 param_1,unsigned __int64 param_2,int param_3,int param_4,int param_5,
                  int param_6,unsigned int param_7,unsigned int param_8)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char *pbVar7;
  int iVar8;
  unsigned short *puVar9;
  int iVar10;
  __int64 lVar11;
  short *psVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  __int64 lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  unsigned int uVar19;
  unsigned __int64 uVar20;
  __int64 lVar21;
  unsigned __int64 uVar22;
  unsigned int in_stack_00000054;
  unsigned short uStack_e2;
  short asStack_e0 [112];
  
  uVar5 = 1 << (param_8 + 3 & 0x3f);
  uVar13 = (unsigned __int64)uVar5;
  param_7 = param_7 & 0xff;
  uVar6 = 1 << ((unsigned int)LZCOUNT(in_stack_00000054) >> 5 & param_8) + 3;
  uVar20 = (unsigned __int64)uVar6;
  if (((param_8 != 0) && (param_8 != 1)) && (param_8 != 2)) {
    return;
  }
  if (param_5 == 0) {
    uVar19 = 4;
    if (param_6 != 2) {
      uVar19 = 6;
    }
    iVar17 = 0;
    iVar16 = 0;
    lVar14 = uVar13 + 1;
    asStack_e0[uVar5 + 2] = 0;
    asStack_e0[uVar5 + 1] = 0;
  }
  else {
    if (param_6 == 0) {
      uVar19 = 0;
      iVar17 = 4;
      if (param_5 != 2) {
        iVar17 = 6;
      }
      iVar18 = 0;
      iVar16 = (1 << (iVar17 - 1U & 0x3f)) - param_7;
      lVar14 = uVar13 + 3;
      goto LAB_82cc4a30;
    }
    iVar16 = 4;
    if (param_5 != 2) {
      iVar16 = 6;
    }
    iVar18 = 4;
    if (param_6 != 2) {
      iVar18 = 6;
    }
    iVar17 = 7;
    uVar19 = (iVar18 + iVar16) - 7;
    iVar16 = 0x40 - param_7;
    lVar14 = uVar13 + 3;
  }
  iVar18 = (1 << (uVar19 - 1 & 0x3f)) + param_7 + -1;
LAB_82cc4a30:
  if (0 < (int)uVar6) {
    lVar15 = (param_1 - param_2) + -1;
    do {
      if (0 < (int)lVar14) {
        sVar1 = *(short *)(&lbl_821090EE + param_6 * 8);
        sVar2 = *(short *)(&lbl_821090EC + param_6 * 8);
        puVar9 = &uStack_e2;
        sVar3 = (&lbl_821090E8)[param_6 * 4];
        sVar4 = (&lbl_821090EA)[param_6 * 4];
        lVar11 = lVar15;
        lVar21 = lVar14;
        do {
          pbVar7 = (unsigned char *)lVar11;
          lVar11 = lVar11 + 1;
          puVar9 = puVar9 + 1;
          *puVar9 = (short)((int)((unsigned int)pbVar7[(int)((param_2 & 0xffffffff) << 1)] * (int)sVar2 +
                                  (unsigned int)pbVar7[(int)param_2 + (int)((param_2 & 0xffffffff) << 1)] *
                                  (int)sVar1 + (unsigned int)pbVar7[(int)param_2] * (int)sVar4 +
                                  (unsigned int)*pbVar7 * (int)sVar3 + iVar18) >> (uVar19 & 0x3f));
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
      }
      iVar8 = 0;
      if (0 < (int)uVar5) {
        psVar12 = asStack_e0 + 2;
        uVar22 = uVar13;
        do {
          iVar10 = (int)psVar12[1] * (int)*(short *)(&lbl_821090EE + param_5 * 8) +
                   (int)psVar12[-2] * (int)(short)(&lbl_821090E8)[param_5 * 4] +
                   (int)*psVar12 * (int)*(short *)(&lbl_821090EC + param_5 * 8) +
                   (int)psVar12[-1] * (int)(short)(&lbl_821090EA)[param_5 * 4] + iVar16 >> iVar17;
          if (iVar10 < 0) {
            iVar10 = 0;
          }
          else if (0xff < iVar10) {
            iVar10 = 0xff;
          }
          *(char *)(iVar8 + param_3) = (char)iVar10;
          psVar12 = psVar12 + 1;
          iVar8 = iVar8 + 1;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      uVar20 = uVar20 - 1;
      lVar15 = lVar15 + param_2;
      param_3 = param_3 + param_4;
    } while (uVar20 != 0);
  }
  return;
}

