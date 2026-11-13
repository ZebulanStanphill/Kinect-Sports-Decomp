#define NAN(x) ((x) != (x))
extern unsigned int *auStack_a0;
extern int fn_82547CF0();
extern int fn_8263B758();
extern int fn_82837D98();
extern unsigned int lbl_821954D0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195598;
extern unsigned int lbl_82195644;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_74;
extern unsigned int uStack_78;


void fn_825D18A8(float *param_1,float *param_2,int param_3,int param_4,float *param_5,
                  float *param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  unsigned __int64 auStack_a0 [2];
  int aiStack_90 [6];
  unsigned int uStack_78;
  unsigned int uStack_74;
  
  fVar4 = ltcg_pool_0_0f;
  dVar15 = (double)ltcg_pool_0_0f;
  *param_5 = lbl_82195644;
  *param_6 = fVar4;
  fVar4 = lbl_821CA460;
  if (param_3 == 0) {
    *param_6 = lbl_821CA460;
    *param_5 = fVar4;
  }
  else {
    fn_82837D98(*(unsigned int *)(param_3 + 0x14),0,auStack_a0);
    fn_8263B758(((unsigned int)((unsigned __int64)(auStack_a0[0]) >> 32)),0,aiStack_90);
    uVar9 = (unsigned int)(float)(__int64)((double)(*param_2 * (float)uStack_78) + lbl_82195598);
    uVar1 = (unsigned int)(float)(__int64)((double)(*param_1 * (float)uStack_78) - lbl_82195598);
    if ((int)uStack_78 <= (int)uVar9) {
      uVar9 = uStack_78;
    }
    dVar12 = (double)uStack_74;
    dVar14 = (double)(__int64)((double)(float)((double)param_2[1] * dVar12) + lbl_82195598);
    dVar13 = (double)(float)(dVar14 - dVar12);
    uVar2 = (unsigned int)(float)(__int64)((double)(float)((double)param_1[1] * dVar12) - lbl_82195598);
    uVar10 = (unsigned __int64)uVar2;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar13 < dVar15) << 2) | (unsigned int)(NAN(dVar13) || NAN(dVar15)) << 2))
        < 0.0) {
      dVar12 = dVar14;
    }
    iVar3 = (int)dVar12;
    auStack_a0[0] = (unsigned __int64)iVar3;
    if ((int)uVar2 < iVar3) {
      dVar12 = (double)lbl_821954D0;
      uVar11 = (unsigned __int64)uVar1;
      uVar2 = uVar1;
      do {
        while ((int)uVar2 < (int)uVar9) {
          uVar8 = 0;
          if (aiStack_90[0] == 0x4900102) {
            iVar7 = fn_82547CF0(uVar11,uVar10,uStack_78,1);
            uVar8 = (unsigned __int64)*(unsigned char *)(iVar7 + *(int *)(param_4 + 4));
          }
          uVar11 = uVar11 + 1;
          fVar4 = (float)((double)uVar8 * dVar12);
          dVar14 = (double)(*param_5 - fVar4);
          dVar13 = (double)(*param_6 - fVar4);
          fVar5 = fVar4;
          if (*(float *)(&lbl_821954D8 +
                        ((unsigned int)(unsigned char)((dVar14 < dVar15) << 2) |
                        (unsigned int)(NAN(dVar14) || NAN(dVar15)) << 2)) < 0.0) {
            fVar5 = *param_5;
          }
          fVar6 = *param_6;
          if (*(float *)(&lbl_821954D8 +
                        ((unsigned int)(unsigned char)((dVar13 < dVar15) << 2) |
                        (unsigned int)(NAN(dVar13) || NAN(dVar15)) << 2)) < 0.0) {
            fVar6 = fVar4;
          }
          *param_5 = fVar5;
          *param_6 = fVar6;
          auStack_a0[0] = uVar8;
          uVar2 = (unsigned int)uVar11;
        }
        uVar10 = uVar10 + 1;
        uVar11 = (unsigned __int64)uVar1;
        uVar2 = uVar1;
      } while ((int)uVar10 < iVar3);
    }
  }
  return;
}

