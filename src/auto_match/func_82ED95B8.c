extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82ED4E58();
extern int fn_82F65FB0();
extern unsigned int iStack0000001c;
extern unsigned int iStack0000003c;
extern unsigned int lbl_82005708;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82015618;
extern unsigned int lbl_8215F990;
extern unsigned int uStack0000002c;
extern unsigned int uStack_ec;
extern unsigned int uStack_f8;


double fn_82ED95B8(double param_1,unsigned __int64 param_2,int param_3,unsigned char *param_4,unsigned int param_5,
                    unsigned __int64 param_6,int param_7)

{
  int iVar1;
  unsigned char *pbVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  int *piVar8;
  __int64 lVar9;
  int iVar10;
  int iVar11;
  unsigned char *pbVar13;
  unsigned __int64 uVar12;
  int *piVar14;
  unsigned char *pbVar15;
  unsigned __int64 uVar16;
  unsigned char *pbVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  int iStack0000001c;
  unsigned char *pbStack00000024;
  unsigned int uStack0000002c;
  int iStack0000003c;
  unsigned int uStack_f8;
  unsigned char *pbStack_f4;
  int *piStack_f0;
  unsigned int uStack_ec;
  
  uStack_ec = (unsigned int)param_6;
  uVar16 = (__int64)(int)param_5 * (__int64)(int)uStack_ec;
  lVar9 = (uVar16 & 0x3fffffff) << 2;
  if (0x3fffffff < (uVar16 & 0xffffffff)) {
    lVar9 = -1;
  }
  iStack0000001c = param_3;
  pbStack00000024 = param_4;
  uStack0000002c = param_5;
  iStack0000003c = param_7;
  iVar10 = fn_8265C940(lVar9,0x248c8000);
  uVar12 = uVar16;
  if (0 < (int)uStack_ec) {
    iVar1 = param_7 * 8;
    piStack_f0 = (int *)(iVar10 + -4);
    uStack_f8 = param_5;
    pbVar17 = param_4;
    do {
      if (0 < (int)uStack_f8) {
        pbStack_f4 = param_4;
        do {
          iVar11 = 0;
          pbVar13 = pbStack_f4 + (iStack0000001c - (int)pbVar17);
          lVar9 = 2;
          pbVar15 = pbStack_f4;
          do {
            pbVar2 = pbVar15 + param_7;
            pbVar3 = pbVar13 + param_7;
            pbVar4 = pbVar2 + param_7;
            pbVar5 = pbVar3 + iStack0000003c;
            pbVar6 = pbVar4 + iStack0000003c;
            pbVar7 = pbVar5 + iStack0000003c;
            iVar11 = ((unsigned int)pbVar7[7] - (unsigned int)pbVar6[7]) * ((unsigned int)pbVar7[7] - (unsigned int)pbVar6[7]) +
                     ((unsigned int)pbVar7[6] - (unsigned int)pbVar6[6]) * ((unsigned int)pbVar7[6] - (unsigned int)pbVar6[6]) +
                     ((unsigned int)pbVar7[5] - (unsigned int)pbVar6[5]) * ((unsigned int)pbVar7[5] - (unsigned int)pbVar6[5]) +
                     ((unsigned int)pbVar7[4] - (unsigned int)pbVar6[4]) * ((unsigned int)pbVar7[4] - (unsigned int)pbVar6[4]) +
                     ((unsigned int)pbVar7[3] - (unsigned int)pbVar6[3]) * ((unsigned int)pbVar7[3] - (unsigned int)pbVar6[3]) +
                     ((unsigned int)pbVar7[2] - (unsigned int)pbVar6[2]) * ((unsigned int)pbVar7[2] - (unsigned int)pbVar6[2]) +
                     ((unsigned int)pbVar7[1] - (unsigned int)pbVar6[1]) * ((unsigned int)pbVar7[1] - (unsigned int)pbVar6[1]) +
                     ((unsigned int)*pbVar7 - (unsigned int)*pbVar6) * ((unsigned int)*pbVar7 - (unsigned int)*pbVar6) +
                     ((unsigned int)pbVar5[7] - (unsigned int)pbVar4[7]) * ((unsigned int)pbVar5[7] - (unsigned int)pbVar4[7]) +
                     ((unsigned int)pbVar5[6] - (unsigned int)pbVar4[6]) * ((unsigned int)pbVar5[6] - (unsigned int)pbVar4[6]) +
                     ((unsigned int)pbVar5[5] - (unsigned int)pbVar4[5]) * ((unsigned int)pbVar5[5] - (unsigned int)pbVar4[5]) +
                     ((unsigned int)pbVar5[4] - (unsigned int)pbVar4[4]) * ((unsigned int)pbVar5[4] - (unsigned int)pbVar4[4]) +
                     ((unsigned int)pbVar5[3] - (unsigned int)pbVar4[3]) * ((unsigned int)pbVar5[3] - (unsigned int)pbVar4[3]) +
                     ((unsigned int)pbVar5[2] - (unsigned int)pbVar4[2]) * ((unsigned int)pbVar5[2] - (unsigned int)pbVar4[2]) +
                     ((unsigned int)pbVar5[1] - (unsigned int)pbVar4[1]) * ((unsigned int)pbVar5[1] - (unsigned int)pbVar4[1]) +
                     ((unsigned int)*pbVar5 - (unsigned int)*pbVar4) * ((unsigned int)*pbVar5 - (unsigned int)*pbVar4) +
                     ((unsigned int)pbVar3[7] - (unsigned int)pbVar2[7]) * ((unsigned int)pbVar3[7] - (unsigned int)pbVar2[7]) +
                     ((unsigned int)pbVar3[6] - (unsigned int)pbVar2[6]) * ((unsigned int)pbVar3[6] - (unsigned int)pbVar2[6]) +
                     ((unsigned int)pbVar3[5] - (unsigned int)pbVar2[5]) * ((unsigned int)pbVar3[5] - (unsigned int)pbVar2[5]) +
                     ((unsigned int)pbVar3[4] - (unsigned int)pbVar2[4]) * ((unsigned int)pbVar3[4] - (unsigned int)pbVar2[4]) +
                     ((unsigned int)pbVar3[3] - (unsigned int)pbVar2[3]) * ((unsigned int)pbVar3[3] - (unsigned int)pbVar2[3]) +
                     ((unsigned int)pbVar3[2] - (unsigned int)pbVar2[2]) * ((unsigned int)pbVar3[2] - (unsigned int)pbVar2[2]) +
                     ((unsigned int)pbVar3[1] - (unsigned int)pbVar2[1]) * ((unsigned int)pbVar3[1] - (unsigned int)pbVar2[1]) +
                     ((unsigned int)*pbVar3 - (unsigned int)*pbVar2) * ((unsigned int)*pbVar3 - (unsigned int)*pbVar2) +
                     ((unsigned int)pbVar13[7] - (unsigned int)pbVar15[7]) * ((unsigned int)pbVar13[7] - (unsigned int)pbVar15[7]) +
                     ((unsigned int)pbVar13[6] - (unsigned int)pbVar15[6]) * ((unsigned int)pbVar13[6] - (unsigned int)pbVar15[6]) +
                     ((unsigned int)pbVar13[5] - (unsigned int)pbVar15[5]) * ((unsigned int)pbVar13[5] - (unsigned int)pbVar15[5]) +
                     ((unsigned int)pbVar13[4] - (unsigned int)pbVar15[4]) * ((unsigned int)pbVar13[4] - (unsigned int)pbVar15[4]) +
                     ((unsigned int)pbVar13[3] - (unsigned int)pbVar15[3]) * ((unsigned int)pbVar13[3] - (unsigned int)pbVar15[3]) +
                     ((unsigned int)pbVar13[2] - (unsigned int)pbVar15[2]) * ((unsigned int)pbVar13[2] - (unsigned int)pbVar15[2]) +
                     ((unsigned int)pbVar13[1] - (unsigned int)pbVar15[1]) * ((unsigned int)pbVar13[1] - (unsigned int)pbVar15[1]) +
                     ((unsigned int)*pbVar13 - (unsigned int)*pbVar15) * ((unsigned int)*pbVar13 - (unsigned int)*pbVar15) + iVar11;
            pbVar13 = pbVar7 + iStack0000003c;
            pbVar15 = pbVar6 + iStack0000003c;
            lVar9 = lVar9 + -1;
            param_7 = iStack0000003c;
          } while (lVar9 != 0);
          uVar12 = (unsigned __int64)uStack_f8;
          piStack_f0 = piStack_f0 + 1;
          *piStack_f0 = iVar11 >> 6;
          pbStack_f4 = pbStack_f4 + 8;
          uStack_f8 = (unsigned int)(uVar12 - 1);
        } while (uVar12 - 1 != 0);
        param_6 = (unsigned __int64)uStack_ec;
        uVar12 = uVar16 & 0xffffffff;
        uStack_f8 = uStack0000002c;
        pbVar17 = pbStack00000024;
      }
      param_6 = param_6 - 1;
      param_4 = param_4 + iVar1;
      uStack_ec = (unsigned int)param_6;
    } while (param_6 != 0);
  }
  dVar19 = lbl_82005710;
  dVar18 = lbl_82005710;
  fn_82ED4E58(iVar10,uVar12,4,0xffffffff82ed4d80);
  iVar11 = 0;
  iVar1 = (int)uVar12 / 10;
  dVar20 = dVar18;
  if (1 < iVar1) {
    piVar14 = (int *)(iVar10 + -4);
    do {
      piVar8 = piVar14 + 1;
      iVar11 = iVar11 + 2;
      piVar14 = piVar14 + 2;
      dVar20 = (double)(__int64)*piVar8 + dVar20;
      dVar19 = (double)(__int64)*piVar14 + dVar19;
    } while (iVar11 < iVar1 + -1);
  }
  if (iVar11 < iVar1) {
    dVar18 = (double)(__int64)*(int *)(iVar11 * 4 + iVar10);
  }
  dVar18 = (dVar19 + dVar20 + dVar18) / (double)(__int64)iVar1;
  dVar19 = lbl_82005708;
  if (lbl_8215F990 < dVar18) {
    dVar19 = (double)fn_82F65FB0((param_1 * param_1) / dVar18);
    dVar19 = dVar19 * lbl_82015618;
  }
  fn_8265C990(iVar10,0x248c8000);
  return dVar19;
}

