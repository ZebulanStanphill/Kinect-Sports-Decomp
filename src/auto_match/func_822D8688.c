typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_822C6938();
extern int fn_8234E808();
extern int fn_825613E0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831CD820;
extern unsigned int lbl_831CD828;
extern V16 loadVectorLeftIndexed128();


void fn_822D8688(double param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 in_r0;
  float *pfVar4;
  unsigned __int64 uVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  
  if ((*(int *)(param_2 + 0x78) != 0) && (*(int *)(param_2 + 0x80) == 0)) {
    uVar1 = *(unsigned int *)(param_2 + 0x24);
    uVar5 = (unsigned __int64)uVar1;
    pfVar4 = (float *)((int)in_r0 + param_3 & 0xfffffff0);
    loadVectorLeftIndexed128(in_r0,uVar5 + 0x40);
    fVar7 = *pfVar4 * in_register_000100d0;
    fVar8 = pfVar4[1] * in_register_000100d4;
    fVar9 = pfVar4[2] * in_register_000100d8;
    fVar10 = pfVar4[3] * in_vr13;
    fn_825613E0(-(double)*(float *)(uVar1 + 0x40),(double)*(float *)(uVar1 + 0x40));
    pfVar4 = (float *)(uVar1 + 0x10 & 0xfffffff0);
    *pfVar4 = fVar7;
    pfVar4[1] = fVar8;
    pfVar4[2] = fVar9;
    pfVar4[3] = fVar10;
    loadVectorLeftIndexed128(uVar5,0x48);
    fn_822C6938(uVar5);
  }
  dVar6 = (double)ltcg_pool_0_0f;
  if (*(int *)(*(int *)(param_2 + 0x54) + 0x24) != 0) {
    iVar2 = *(int *)(param_2 + 0x88);
    pfVar4 = (float *)(iVar2 + 0x18);
    if (*(int *)(param_2 + 0x84) == 0) {
      for (; pfVar4 != (float *)(iVar2 + 0x60); pfVar4 = pfVar4 + 3) {
        pfVar4[2] = (float)((double)(float)((double)pfVar4[1] - (double)*pfVar4) * dVar6 +
                           (double)*pfVar4);
      }
    }
    else {
      for (; pfVar4 != (float *)(iVar2 + 0x60); pfVar4 = pfVar4 + 3) {
        pfVar4[2] = (pfVar4[1] - *pfVar4) + *pfVar4;
      }
    }
    fn_8234E808();
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    fVar7 = lbl_831CD820;
    if (*(int *)(param_2 + 0xe0) != 0) {
      fVar7 = lbl_831CD828;
    }
    iVar2 = *(int *)(param_2 + 0x54);
    if ((double)*(float *)(param_2 + 0xd8) <= dVar6) {
      iVar3 = *(int *)(*(int *)(iVar2 + 0x118) + 0xc);
      if (fVar7 <= *(float *)(iVar2 + 0x278)) {
        if (iVar3 != 0) {
          *(unsigned int *)(iVar3 + 0x118) = 0;
        }
      }
      else if (iVar3 != 0) {
        *(unsigned int *)(iVar3 + 0x118) = 1;
      }
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x118) + 0xc);
      if (iVar2 != 0) {
        *(unsigned int *)(iVar2 + 0x118) = 1;
      }
      *(float *)(param_2 + 0xd8) = (float)((double)*(float *)(param_2 + 0xd8) - param_1);
    }
    if (*(float *)(*(int *)(param_2 + 0x54) + 0x278) < fVar7) {
      *(unsigned int *)(param_2 + 0x80) = 1;
    }
  }
  return;
}

