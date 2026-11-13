typedef unsigned char bool;
#define true 1
#define false 0
#define NAN(x) ((x) != (x))
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_82463578();
extern int fn_82F4EBC0();
extern int fn_82F4EEC0();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195530;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


double fn_82463328(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  bool bVar7;
  int in_r0;
  unsigned __int64 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  uVar8 = fn_82F4EBC0(0);
  fn_82F4EEC0(&fStack_30,uVar8);
  fVar1 = *(float *)(param_1 + 0x2c8);
  fVar2 = *(float *)(param_1 + 0x2cc);
  fVar3 = *(float *)(param_1 + 0x2d4);
  fVar4 = *(float *)(param_1 + 0x2d0);
  puVar5 = (unsigned int *)((int)&fStack_30 + in_r0 & 0xfffffff0);
  uVar14 = puVar5[1];
  uVar15 = puVar5[2];
  uVar16 = puVar5[3];
  puVar6 = (unsigned int *)((int)&fStack_30 + in_r0 & 0xfffffff0);
  *puVar6 = *puVar5;
  puVar6[1] = uVar14;
  puVar6[2] = uVar15;
  puVar6[3] = uVar16;
  bVar7 = true;
  dVar10 = (double)fStack_28;
  dVar11 = (double)fStack_30;
  dVar13 = (double)ltcg_pool_0_0f;
  dVar12 = (double)lbl_82195530;
  fStack_2c = ltcg_pool_0_0f;
  dVar9 = dVar12;
  if ((double)((float)(dVar10 - (double)fVar2) * (float)((double)fVar4 - (double)fVar1) -
              (float)(dVar11 - (double)fVar1) * (float)((double)fVar3 - (double)fVar2)) <= dVar13) {
    bVar7 = false;
    dVar9 = (double)fn_82463578(*(unsigned __int64 *)(param_1 + 0x2b0),*(unsigned __int64 *)(param_1 + 0x2b8),
                                  *(unsigned __int64 *)(param_1 + 0x2c8),*(unsigned __int64 *)(param_1 + 0x2d0))
    ;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)(((double)(float)(dVar12 - dVar9) < dVar13) << 2) |
                  (unsigned int)(NAN((double)(float)(dVar12 - dVar9)) || NAN(dVar13)) << 2)) < 0.0) {
      dVar9 = dVar12;
    }
  }
  dVar12 = dVar9;
  if ((double)((float)(dVar10 - (double)*(float *)(param_1 + 0x2d4)) *
               (float)((double)*(float *)(param_1 + 0x2d8) - (double)*(float *)(param_1 + 0x2d0)) -
              (float)((double)*(float *)(param_1 + 0x2dc) - (double)*(float *)(param_1 + 0x2d4)) *
              (float)(dVar11 - (double)*(float *)(param_1 + 0x2d0))) <= dVar13) {
    bVar7 = false;
    dVar12 = (double)fn_82463578(*(unsigned __int64 *)(param_1 + 0x2b8),*(unsigned __int64 *)(param_1 + 0x2c0)
                                   ,*(unsigned __int64 *)(param_1 + 0x2d0),
                                   *(unsigned __int64 *)(param_1 + 0x2d8));
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)(((double)(float)(dVar9 - dVar12) < dVar13) << 2) |
                  (unsigned int)(NAN((double)(float)(dVar9 - dVar12)) || NAN(dVar13)) << 2)) < 0.0) {
      dVar12 = dVar9;
    }
  }
  dVar9 = dVar12;
  if ((double)((float)(dVar10 - (double)*(float *)(param_1 + 0x2dc)) *
               (float)((double)*(float *)(param_1 + 0x2c8) - (double)*(float *)(param_1 + 0x2d8)) -
              (float)((double)*(float *)(param_1 + 0x2cc) - (double)*(float *)(param_1 + 0x2dc)) *
              (float)(dVar11 - (double)*(float *)(param_1 + 0x2d8))) <= dVar13) {
    bVar7 = false;
    dVar9 = (double)fn_82463578(*(unsigned __int64 *)(param_1 + 0x2c0),*(unsigned __int64 *)(param_1 + 0x2b0),
                                  *(unsigned __int64 *)(param_1 + 0x2d8),*(unsigned __int64 *)(param_1 + 0x2c8))
    ;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)(((double)(float)(dVar12 - dVar9) < dVar13) << 2) |
                  (unsigned int)(NAN((double)(float)(dVar12 - dVar9)) || NAN(dVar13)) << 2)) < 0.0) {
      dVar9 = dVar12;
    }
  }
  if (bVar7) {
    dVar10 = (double)lbl_821CA460;
  }
  else {
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar9 < dVar13) << 2) | (unsigned int)(NAN(dVar9) || NAN(dVar13)) << 2)) <
        0.0) {
      dVar9 = dVar13;
    }
    dVar11 = (double)(float)(dVar9 - (double)lbl_821CA460);
    dVar10 = (double)lbl_821CA460;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar11 < dVar13) << 2) | (unsigned int)(NAN(dVar11) || NAN(dVar13)) << 2))
        < 0.0) {
      dVar10 = dVar9;
    }
  }
  return dVar10;
}

