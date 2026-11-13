typedef struct { unsigned __int64 lo, hi; } V16;
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_40;
extern int fn_82552720();
extern int fn_825529B0();
extern int fn_82552B50();
extern unsigned int lbl_8218E8FC;
extern float lbl_82191564;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_82191FC4;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_82192D74;
extern unsigned int lbl_821954D8;
extern float lbl_82195B44;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();


unsigned char fn_8261A518(double param_1,int param_2)

{
  float fVar1;
  unsigned int uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  int in_r0;
  int iVar6;
  float *pfVar7;
  unsigned char uVar8;
  __int64 lVar9;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  unsigned char auStack_40 [64];
  
  fVar11 = ltcg_pool_0_0f;
  fVar10 = lbl_821CA460;
  if (*(int *)(param_2 + 0x20) != 0) {
    if ((*(int *)(param_2 + 0x14) == 0) || (ltcg_pool_0_0f < *(float *)(param_2 + 0x6c))) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      *(float *)(param_2 + 0x24) = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460;
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      fVar12 = ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar10) * lbl_82195B44 +
               lbl_82191FC8;
      *(float *)(param_2 + 0x28) = fVar12;
      if (*(int *)(param_2 + 0x14) != 0) {
        fVar1 = (float)((double)*(float *)(param_2 + 0x74) + param_1);
        *(float *)(param_2 + 0x74) = fVar1;
        fVar4 = fVar1 - *(float *)(param_2 + 0x6c);
        fVar5 = *(float *)(param_2 + 0x6c);
        if (*(float *)(&lbl_821954D8 +
                      ((unsigned int)(unsigned char)((fVar4 < fVar11) << 2) | (unsigned int)(NAN(fVar4) || NAN(fVar11)) << 2)
                      ) < 0.0) {
          fVar5 = fVar1;
        }
        fVar1 = fVar5 * lbl_82191FC4 - fVar10;
        fVar4 = fVar10;
        if (*(float *)(&lbl_821954D8 +
                      ((unsigned int)(unsigned char)((fVar1 < fVar11) << 2) | (unsigned int)(NAN(fVar1) || NAN(fVar11)) << 2)
                      ) < 0.0) {
          fVar4 = fVar5 * lbl_82191FC4;
        }
        *(float *)(param_2 + 0x28) = fVar4 * fVar12;
      }
      fVar11 = lbl_821916FC;
      pfVar7 = (float *)(param_2 + 0x48);
      lVar9 = 8;
      do {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        pfVar7[-7] = ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar10) * fVar11 - fVar10;
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        pfVar7 = pfVar7 + 1;
        *pfVar7 = ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar10) * fVar11 - fVar10;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      fVar11 = (float)(param_1 * (double)lbl_821917B0 + (double)*(float *)(param_2 + 0x78));
      *(float *)(param_2 + 0x78) = fVar11;
      if (fVar10 <= fVar11) {
        *(float *)(param_2 + 0x78) = fVar11 - fVar10;
      }
      uVar8 = 1;
      *(unsigned int *)(*(int *)(param_2 + 4) + 400) = 1;
      *(float *)(param_2 + 0x6c) = (float)((double)*(float *)(param_2 + 0x6c) - param_1);
    }
    else {
      if (param_1 < (double)*(float *)(param_2 + 0x70)) {
        *(float *)(param_2 + 0x70) = (float)((double)*(float *)(param_2 + 0x70) - param_1);
        iVar6 = fn_825529B0(param_2 + 0x7c);
        if (iVar6 != 0) {
          fn_82552B50(param_2 + 0x7c,1);
        }
      }
      else {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        *(float *)(param_2 + 0x6c) =
             ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82191564 +
             lbl_82192D74;
        fVar12 = lbl_8218E8FC;
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        uVar2 = lbl_83265A28 & 0x7fffff;
        lVar9 = (unsigned __int64)*(unsigned int *)(param_2 + 0x18) + 0x84c;
        *(float *)(param_2 + 0x74) = fVar11;
        *(float *)(param_2 + 0x70) = ((float)(uVar2 | 0x3f800000) - fVar10) * fVar12 + fVar10;
        if (lVar9 != 0) {
          iVar6 = fn_825529B0(param_2 + 0x7c);
          if (iVar6 == 0) {
            pfVar7 = (float *)(*(int *)(param_2 + 4) + 0xa0U & 0xfffffff0);
            fVar10 = pfVar7[1];
            fVar11 = pfVar7[2];
            fVar12 = pfVar7[3];
            loadVectorLeftIndexed128(0xffffffff821917a8,0xffffffffffffd140);
            uVar2 = *(unsigned int *)(*(int *)(param_2 + 0x18) + 0xb8);
            vectorAddFloatingPoint(in_vs32,in_vs44);
            pfVar3 = (float *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
            *pfVar3 = *pfVar7 * in_register_000100d0;
            pfVar3[1] = fVar10 * in_register_000100d4;
            pfVar3[2] = fVar11 * in_register_000100d8;
            pfVar3[3] = fVar12 * in_vr13;
            fn_82552720(lVar9,param_2 + 0x7c,(unsigned __int64)uVar2 + 0x1c,0,0,auStack_40,0);
          }
        }
      }
      uVar8 = 0;
    }
    *(unsigned char *)(param_2 + 0x1c) = uVar8;
  }
  return *(unsigned char *)(param_2 + 0x1c);
}

