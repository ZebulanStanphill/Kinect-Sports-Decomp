extern int fn_82588058();
extern int fn_82588130();
extern int fn_825881D8();
extern int fn_82588890();
extern int fn_82838650();
extern int fn_82F64CE0();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_82192734;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8326B850;
extern unsigned int lbl_8326B85C;
extern unsigned int lbl_8326B860;
extern unsigned int lbl_8326B86C;
extern unsigned int lbl_8326B87C;
extern unsigned int lbl_8326B8E8;


void fn_82588528(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  float fVar1;
  short sVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  short *psVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  short *psVar10;
  int iVar11;
  short *psVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  psVar6 = (short *)fn_82F6A53C();
  iVar4 = lbl_8326B850;
  dVar19 = (double)ltcg_pool_0_0f;
  dVar13 = (double)lbl_8326B85C;
  if (dVar13 == dVar19) {
    if ((double)lbl_8326B860 == dVar19) goto LAB_82588880;
    iVar11 = (&lbl_8326B8E8)[lbl_8326B850];
    dVar14 = (double)*(float *)(iVar11 + 0x10) * (double)lbl_8326B860;
  }
  else {
    iVar11 = (&lbl_8326B8E8)[lbl_8326B850];
    dVar14 = (double)*(float *)(iVar11 + 0x10) * dVar13;
  }
  dVar16 = (double)(float)dVar14;
  dVar14 = (double)lbl_8326B87C;
  pfVar8 = (float *)param_2;
  dVar17 = (double)*pfVar8;
  if (dVar14 == dVar19) {
    dVar14 = (double)lbl_82192734;
  }
  dVar20 = dVar19;
  dVar15 = (double)fn_825881D8(dVar19,lbl_8326B850);
  fn_82838650(*(unsigned int *)(iVar11 + 0x30),0);
  pfVar9 = (float *)param_3;
  psVar12 = psVar6;
  if (dVar19 < dVar14) {
    while (*psVar6 != 0) {
      if (*psVar6 == 10) {
        fn_82588890(dVar15,dVar16,psVar12,psVar6,param_2,param_3);
        psVar12 = psVar6 + 1;
LAB_82588798:
        iVar11 = (&lbl_8326B8E8)[iVar4];
LAB_825887a0:
        fVar5 = lbl_8326B860;
        fVar3 = *(float *)(iVar11 + 0x10) + lbl_8326B86C;
        fVar1 = *pfVar9;
        *pfVar8 = (float)dVar17;
        *pfVar9 = fVar3 * fVar5 + fVar1;
        dVar20 = dVar19;
      }
      else if (*psVar6 == 0x20) {
        if (dVar20 == dVar19) {
          psVar12 = psVar12 + 1;
        }
        else {
          iVar11 = 0;
          for (psVar10 = psVar6; (iVar7 = fn_82F64CE0(psVar10), iVar7 != 0 && (*psVar10 == 0x20));
              psVar10 = psVar10 + 1) {
            iVar11 = iVar11 + 1;
          }
          dVar18 = (double)(float)((double)(__int64)iVar11 * dVar15);
          dVar13 = (double)fn_82588130(psVar6 + 1,iVar4);
          if (dVar14 < (double)(float)((double)(float)(dVar13 + dVar18) + dVar20)) {
            fn_82588890(dVar15,dVar16,psVar12,psVar6,param_2,param_3);
            psVar12 = psVar6 + iVar11;
            iVar11 = (&lbl_8326B8E8)[iVar4];
            goto LAB_825887a0;
          }
          dVar20 = (double)(float)(dVar18 + dVar20);
          psVar6 = psVar6 + iVar11 + -1;
        }
      }
      else {
        dVar13 = (double)fn_82588130(psVar6,iVar4);
        dVar20 = (double)(float)(dVar13 + dVar20);
        if (dVar14 < dVar20) {
          fn_82588890(dVar15,dVar16,psVar12,psVar6,param_2,param_3);
          psVar12 = psVar6;
          goto LAB_82588798;
        }
        sVar2 = *psVar6;
        while ((sVar2 != 0 && (sVar2 != 0x20))) {
          psVar6 = psVar6 + 1;
          sVar2 = *psVar6;
        }
        if (sVar2 != 0) {
          psVar6 = psVar6 + -1;
        }
      }
      if (*psVar6 != 0) {
        psVar6 = psVar6 + 1;
      }
    }
  }
  else {
    fn_82588058(dVar13,psVar6,iVar4);
    while (*psVar6 != 0) {
      if (*psVar6 == 10) {
        fn_82588890(dVar15,dVar16,psVar12,psVar6,param_2,param_3);
        fVar5 = lbl_8326B86C;
        fVar3 = lbl_8326B860;
        psVar12 = psVar6 + 1;
        fVar1 = *pfVar9;
        *pfVar8 = (float)dVar17;
        *pfVar9 = (*(float *)((&lbl_8326B8E8)[iVar4] + 0x10) + fVar5) * fVar3 + fVar1;
      }
      else {
        psVar6 = psVar6 + 1;
      }
    }
  }
  fn_82588890(dVar15,dVar16,psVar12,psVar6,param_2,param_3);
LAB_82588880:
  fn_82F6A588();
  return;
}

