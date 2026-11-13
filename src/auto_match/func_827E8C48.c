extern unsigned int *auStack_70;
extern unsigned int fStack_6c;
extern int fn_82809558();
extern int fn_82810558();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern float lbl_82021540;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831F13A8;


void fn_827E8C48(unsigned __int64 param_1,double param_2,double param_3,double param_4,double param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,unsigned __int64 param_9,
                  unsigned __int64 param_10,unsigned __int64 param_11,unsigned __int64 param_12,float *param_13)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  unsigned __int64 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  unsigned char auStack_70 [4];
  float fStack_6c;
  
  dVar13 = (double)fn_82F6A540();
  fVar2 = (float)(param_2 - dVar13);
  pfVar8 = (float *)param_12;
  fVar3 = pfVar8[1];
  pfVar9 = (float *)param_11;
  fVar4 = pfVar8[2];
  fVar5 = pfVar9[2];
  dVar15 = (double)lbl_82002AE0;
  fVar1 = (float)(dVar15 / param_3);
  fVar6 = *pfVar9;
  fVar10 = pfVar9[1] * fVar2 + (float)(dVar13 * param_3);
  fVar7 = *pfVar8;
  dVar13 = (double)lbl_82005344;
  dVar16 = (double)lbl_821AAD20;
  fVar11 = fVar10 * fVar1;
  dVar17 = -(double)(fVar3 * fVar3 * fVar1 * fVar1 * fVar2 * fVar2 - (fVar7 * fVar7 + fVar4 * fVar4)
                    );
  dVar18 = (double)(float)((double)(fVar6 * fVar7 + fVar5 * fVar4) * dVar13 -
                          (double)(float)((double)(fVar3 * fVar10 * fVar1 * fVar1 * fVar2) * dVar13)
                          );
  dVar14 = (double)(float)(dVar18 * dVar18 -
                          (double)((float)(-(double)(fVar11 * fVar11 -
                                                    (fVar6 * fVar6 + fVar5 * fVar5)) * dVar17) *
                                  lbl_82021540));
  if (dVar16 < dVar14) {
    if (dVar14 <= (double)lbl_831F13A8) {
      dVar13 = -(double)(float)(dVar18 / (double)(float)(dVar17 * dVar13));
    }
    else {
      dVar14 = (double)fn_82809558();
      dVar13 = (double)(float)(dVar14 - dVar18);
      dVar14 = (double)(float)(-dVar18 - dVar14);
      if ((dVar13 <= (double)lbl_831F13A8) || (dVar14 <= (double)lbl_831F13A8)) goto LAB_827e8dbc;
      if (dVar14 <= dVar13) {
        dVar13 = dVar14;
      }
      dVar13 = (double)((float)(dVar13 / dVar17) * 0.5f);
    }
    if ((dVar16 <= dVar13) && (dVar13 <= dVar15)) {
      fn_82810558(dVar13,param_12,param_11,param_8,auStack_70);
      if ((param_4 < (double)fStack_6c) && ((double)fStack_6c < param_5)) {
        *param_13 = (float)dVar13;
        uVar12 = 1;
        goto LAB_827e8dc0;
      }
    }
  }
LAB_827e8dbc:
  uVar12 = 0;
LAB_827e8dc0:
  fn_82F6A58C(uVar12);
  return;
}

