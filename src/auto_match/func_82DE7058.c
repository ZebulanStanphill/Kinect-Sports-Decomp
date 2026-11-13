typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_100;
extern unsigned int *auStack_120;
extern unsigned int *auStack_130;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_10c;
extern unsigned int fStack_110;
extern unsigned int fStack_5c;
extern int fn_82DE51D8();
extern int fn_82DE5CE0();
extern int fn_82DE5E38();
extern int fn_82DE6970();
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern V16 vectorAddFloatingPoint();


unsigned __int64 fn_82DE7058(double param_1,unsigned int *param_2,unsigned __int64 param_3,__int64 param_4)

{
  unsigned int *puVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  int in_r0;
  float *pfVar6;
  unsigned int *puVar7;
  float *pfVar8;
  int iVar9;
  __int64 lVar10;
  __int64 lVar11;
  __int64 lVar12;
  double dVar13;
  double dVar14;
  unsigned char in_vs32 [16];
  unsigned char in_vs58 [16];
  unsigned int in_register_000100b0;
  unsigned int in_register_000100b4;
  unsigned int in_register_000100b8;
  unsigned int in_vr11;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned char auStack_130 [16];
  unsigned int auStack_120 [4];
  float fStack_110;
  float fStack_10c;
  unsigned char auStack_100 [16];
  float afStack_f0 [4];
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [100];
  float fStack_5c;
  
  dVar14 = (double)lbl_821AAD20;
  if (dVar14 < param_1) {
    fn_82DE5E38(*param_2,param_2[1],auStack_120,auStack_130);
    fStack_110 = (float)dVar14;
    puVar1 = (unsigned int *)((unsigned int)(auStack_100 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000100c0;
    puVar1[1] = in_register_000100c4;
    puVar1[2] = in_register_000100c8;
    puVar1[3] = in_vr12;
    fStack_10c = (float)dVar14;
    puVar1 = (unsigned int *)((int)afStack_f0 + in_r0 & 0xfffffff0);
    *puVar1 = in_register_000100d0;
    puVar1[1] = in_register_000100d4;
    puVar1[2] = in_register_000100d8;
    puVar1[3] = in_vr13;
    puVar1 = (unsigned int *)((unsigned int)(auStack_e0 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000100d0;
    puVar1[1] = in_register_000100d4;
    puVar1[2] = in_register_000100d8;
    puVar1[3] = in_vr13;
    puVar1 = (unsigned int *)((unsigned int)(auStack_d0 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000100d0;
    puVar1[1] = in_register_000100d4;
    puVar1[2] = in_register_000100d8;
    puVar1[3] = in_vr13;
    fn_82DE51D8(param_1,auStack_130);
    puVar1 = (unsigned int *)((int)auStack_120 + in_r0 & 0xfffffff0);
    uVar15 = puVar1[1];
    uVar16 = puVar1[2];
    uVar17 = puVar1[3];
    puVar7 = (unsigned int *)((unsigned int)(auStack_100 + in_r0) & 0xfffffff0);
    *puVar7 = *puVar1;
    puVar7[1] = uVar15;
    puVar7[2] = uVar16;
    puVar7[3] = uVar17;
    puVar1 = (unsigned int *)((unsigned int)(auStack_130 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000100b0;
    puVar1[1] = in_register_000100b4;
    puVar1[2] = in_register_000100b8;
    puVar1[3] = in_vr11;
    fn_82DE6970(auStack_c0,param_2,auStack_130);
    if (dVar14 < (double)fStack_5c) {
      pfVar6 = (float *)param_4;
      *pfVar6 = fStack_5c;
      param_4 = param_4 + 0x20;
      pfVar6[1] = (float)param_1;
      pfVar8 = pfVar6 + 4;
      fn_82DE5CE0(param_1,(double)(float)(param_1 / (double)fStack_5c),auStack_c0);
      lVar10 = param_4 + 8;
      iVar3 = (int)param_4;
      lVar12 = 3;
      lVar11 = param_4 + 0x10;
      iVar9 = 0;
      puVar7 = auStack_120;
      vectorAddFloatingPoint(in_vs32,in_vs58);
      puVar1 = (unsigned int *)(in_r0 + (int)pfVar8 & 0xfffffff0);
      *puVar1 = in_register_000100d0;
      puVar1[1] = in_register_000100d4;
      puVar1[2] = in_register_000100d8;
      puVar1[3] = in_vr13;
      fVar5 = lbl_82186E6C;
      do {
        pfVar8 = (float *)param_4;
        fVar2 = *(float *)(((int)afStack_f0 - iVar3) + (int)pfVar8) * fVar5;
        if (*pfVar8 < fVar2) {
          uVar15 = *puVar7;
          *pfVar8 = fVar2;
          pfVar8 = (float *)lVar11;
          *(unsigned int *)(((int)pfVar6 - iVar3) + (int)pfVar8) = uVar15;
          pfVar4 = (float *)lVar10;
          if (iVar9 != 0) {
            dVar13 = dVar14;
            if (-(double)pfVar4[-2] < 0.0) {
              dVar13 = (double)pfVar4[-2];
            }
            pfVar8[-4] = (float)dVar13;
            pfVar4[-2] = (float)dVar13;
          }
          if (iVar9 != 1) {
            dVar13 = dVar14;
            if (-(double)pfVar4[-1] < 0.0) {
              dVar13 = (double)pfVar4[-1];
            }
            *pfVar8 = (float)dVar13;
            pfVar4[-1] = (float)dVar13;
          }
          if (iVar9 != 2) {
            dVar13 = dVar14;
            if (-(double)*pfVar4 < 0.0) {
              dVar13 = (double)*pfVar4;
            }
            pfVar8[4] = (float)dVar13;
            *pfVar4 = (float)dVar13;
          }
        }
        iVar9 = iVar9 + 1;
        param_4 = param_4 + 0x14;
        puVar7 = puVar7 + 1;
        lVar11 = lVar11 + 4;
        lVar10 = lVar10 + 0x10;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      return 0;
    }
  }
  return 1;
}

