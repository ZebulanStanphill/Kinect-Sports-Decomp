extern int fn_82547FB8();
extern int fn_825480E0();
extern int fn_825484B8();
extern int fn_8284C850();
extern int fn_8284C860();
extern int fn_82F6A52C();
extern int fn_82F6A578();
extern float lbl_82186E64;
extern float lbl_821917D4;
extern unsigned int lbl_821954D0;
extern unsigned int lbl_82195598;
extern unsigned int lbl_82195940;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8329788C;


void fn_825CB068(unsigned __int64 param_1,double param_2,double param_3,double param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar11;
  unsigned __int64 uVar9;
  unsigned char bVar13;
  __int64 lVar10;
  unsigned int uVar12;
  int iVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  double dVar18;
  double dVar19;
  double extraout_f1;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  iVar11 = fn_82F6A52C();
  iVar5 = *(int *)(iVar11 + 0x54);
  dVar24 = (double)ltcg_pool_0_0f;
  dVar23 = (double)*(float *)(iVar5 + 0x158);
  if ((dVar23 != dVar24) || ((double)*(float *)(iVar5 + 0x15c) != dVar24)) {
    iVar6 = *(int *)(iVar11 + 0x54);
    iVar14 = *(int *)(iVar6 + 0xd8);
    iVar7 = *(int *)(iVar6 + 0xdc);
    iVar8 = *(int *)(iVar6 + 0xe0);
    iVar1 = (int)((double)(__int64)(iVar14 + -1) * param_3);
    iVar2 = (int)((double)(__int64)(iVar14 + -1) * param_4);
    dVar19 = extraout_f1;
    uVar9 = fn_825484B8(*(unsigned int *)(iVar6 + 0x114),iVar14,iVar1,iVar2);
    bVar13 = fn_82547FB8(*(unsigned int *)(iVar5 + 0x114),iVar14,iVar1,iVar2);
    dVar25 = (double)lbl_821954D0;
    dVar22 = (double)lbl_821CA460;
    dVar20 = (double)(float)((double)(uVar9 & 0xff) * dVar25);
    dVar21 = (double)(float)((double)bVar13 * dVar25);
    dVar18 = dVar24;
    if (dVar24 < dVar23) {
      uVar12 = iVar7 - 1;
      iVar1 = *(int *)(iVar11 + 0x54);
      fVar4 = ((float)((double)((uVar9 & 0xffffffff) >> 8 & 0xff) * dVar25) *
               *(float *)(iVar1 + 0x1b0) + *(float *)(iVar1 + 0x16c) * *(float *)(iVar1 + 0x70) +
              *(float *)(iVar1 + 0x174)) * lbl_82186E64;
      dVar18 = (double)fVar4;
      iVar2 = (int)((int)((float)((double)*(float *)(iVar1 + 0x150) * dVar19) *
                         (float)(__int64)(int)uVar12) & uVar12) >> 3;
      iVar6 = (int)((int)((float)((double)*(float *)(iVar1 + 0x150) * param_2) *
                         (float)(__int64)(int)uVar12) & uVar12) >> 3;
      iVar14 = (int)fVar4 % 0xc;
      dVar19 = (double)(float)(dVar18 - (double)(__int64)(dVar18 - lbl_82195598));
      dVar18 = (double)(float)((double)*(unsigned char *)((*(int *)(iVar1 + 0xa8) * iVar14 + iVar6) *
                                                 *(int *)(iVar1 + 0xa4) + *(int *)(iVar1 + 0xb0) +
                                                iVar2) * dVar25);
      if (dVar24 < dVar19) {
        dVar18 = (double)(float)((double)(float)((double)*(unsigned char *)((((iVar14 + 1) % 0xc) *
                                                                    *(int *)(iVar1 + 0xa8) + iVar6)
                                                                   * *(int *)(iVar1 + 0xa4) +
                                                                   *(int *)(iVar5 + 0xb0) + iVar2) *
                                                dVar25) * dVar19 +
                                (double)(float)((double)(float)(dVar22 - dVar19) * dVar18));
      }
      dVar18 = (double)(float)(dVar23 * dVar18);
    }
    if (dVar24 < dVar20) {
      dVar24 = lbl_82195598;
      lVar10 = fn_8284C850(*(unsigned int *)(*(int *)(iVar5 + 0x8c) + 0x14));
      uVar12 = fn_8284C860(*(unsigned int *)(*(int *)(*(int *)(iVar11 + 0x54) + 0x8c) + 0x14));
      uVar12 = uVar12 & 0xff;
      dVar22 = (double)lbl_821CA460;
      if (uVar12 < 2) {
        iVar5 = *(int *)(iVar11 + 0x54);
        uVar12 = (int)lVar10 - 1;
        fVar4 = (float)((double)*(unsigned char *)(((int)(((float)(dVar21 * (double)lbl_82195940 -
                                                         (double)(*(float *)(*(int *)(iVar11 + 0x4c)
                                                                            + 0x828) *
                                                                  *(float *)(iVar5 + 0x160) *
                                                                 lbl_821917D4)) + lbl_8329788C) *
                                                (float)(__int64)(int)uVar12) & uVar12) +
                                         *(int *)(iVar5 + 0xa0)) * dVar25) *
                *(float *)(iVar5 + 0x15c);
      }
      else {
        iVar5 = *(int *)(iVar11 + 0x54);
        fVar4 = *(float *)(*(int *)(iVar11 + 0x4c) + 0x828) * *(float *)(iVar5 + 0x160);
        dVar23 = (double)fVar4;
        uVar3 = (unsigned int)fVar4;
        uVar17 = (unsigned __int64)uVar3 - (__int64)((int)uVar3 / (int)uVar12) * (__int64)(int)uVar12;
        lVar15 = uVar17 + 1;
        uVar16 = (unsigned __int64)(unsigned int)(int)((double)(__int64)(int)(lVar10 - 1U) * dVar21) & lVar10 - 1U
        ;
        dVar19 = (double)(float)(dVar23 - (double)(__int64)(dVar23 - dVar24));
        uVar9 = fn_825480E0(*(unsigned int *)
                                   ((int)((lVar15 - (__int64)((int)lVar15 / (int)uVar12) *
                                                    (__int64)(int)uVar12 & 0xffffffffU) << 2) +
                                   *(int *)(iVar5 + 0x118)),lVar10,uVar16,0);
        dVar23 = (double)*(float *)(iVar5 + 0x15c);
        dVar24 = (double)(float)((double)((uVar9 & 0xffffffff) >> 8 & 0xff) * dVar25);
        uVar9 = fn_825480E0(*(unsigned int *)
                                   (*(int *)(iVar5 + 0x118) + (int)((uVar17 & 0xffffffff) << 2)),
                                  lVar10,uVar16,0);
        fVar4 = (float)((double)(float)(dVar24 * dVar23) * dVar19 +
                       (double)((float)((double)((uVar9 & 0xffffffff) >> 8 & 0xff) * dVar25) *
                                *(float *)(iVar5 + 0x15c) * (float)(dVar22 - dVar19)));
      }
      dVar18 = (double)(float)((double)(float)(dVar22 - (double)(float)(dVar20 * dVar21)) * dVar18 +
                              (double)(float)((double)(float)(dVar20 * dVar21) * (double)fVar4));
    }
    dVar24 = (double)(__int64)(iVar8 + -1);
    dVar24 = (double)(float)(-(double)(float)((double)*(unsigned char *)((int)(dVar24 * param_4) *
                                                                *(int *)(*(int *)(iVar11 + 0x54) +
                                                                        0xb4) +
                                                                (int)(dVar24 * param_3) +
                                                               *(int *)(*(int *)(iVar11 + 0x54) +
                                                                       0xc0)) * dVar25 - dVar22) *
                            dVar18);
  }
  fn_82F6A578(dVar24);
  return;
}

