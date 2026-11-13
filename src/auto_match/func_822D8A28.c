typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_822C6938();
extern int fn_8234E808();
extern int fn_825613E0();
extern V16 loadVectorLeftIndexed128();


void fn_822D8A28(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 in_r0;
  float *pfVar3;
  unsigned __int64 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    uVar1 = *(unsigned int *)(param_1 + 0x24);
    uVar4 = (unsigned __int64)uVar1;
    pfVar3 = (float *)((int)in_r0 + param_2 & 0xfffffff0);
    loadVectorLeftIndexed128(in_r0,uVar4 + 0x40);
    fVar5 = *pfVar3 * in_register_000100d0;
    fVar6 = pfVar3[1] * in_register_000100d4;
    fVar7 = pfVar3[2] * in_register_000100d8;
    fVar8 = pfVar3[3] * in_vr13;
    fn_825613E0(-(double)*(float *)(uVar1 + 0x40),(double)*(float *)(uVar1 + 0x40));
    pfVar3 = (float *)(uVar1 + 0x10 & 0xfffffff0);
    *pfVar3 = fVar5;
    pfVar3[1] = fVar6;
    pfVar3[2] = fVar7;
    pfVar3[3] = fVar8;
    loadVectorLeftIndexed128(uVar4,0x48);
    fn_822C6938(uVar4);
  }
  if (*(int *)(*(int *)(param_1 + 0x54) + 0x24) != 0) {
    iVar2 = *(int *)(param_1 + 0x80);
    for (pfVar3 = (float *)(iVar2 + 0x18); pfVar3 != (float *)(iVar2 + 0x60); pfVar3 = pfVar3 + 3) {
      pfVar3[2] = (pfVar3[1] - *pfVar3) + *pfVar3;
    }
    fn_8234E808();
  }
  return;
}

