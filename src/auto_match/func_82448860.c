typedef unsigned char bool;
#define false 0
extern int fn_824486C0();
extern unsigned int lbl_82192734;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_82448860(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  bool bVar6;
  bool bVar7;
  double dVar8;
  double extraout_f1;
  
  iVar3 = fn_824486C0();
  fVar2 = lbl_82192734;
  if ((-1 < iVar3) &&
     (dVar8 = (double)(*(float *)(*(int *)(param_1 + 0x48) + 0x18) * (float)(__int64)iVar3 +
                      *(float *)(*(int *)(param_1 + 0x48) + 0x14)), extraout_f1 < dVar8)) {
    fVar2 = (float)(dVar8 - extraout_f1);
  }
  iVar3 = *(int *)(param_1 + 0x48);
  lVar4 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x1c) - 1;
  fVar1 = lbl_82192734;
  if (-1 < lVar4) {
    do {
      dVar8 = (double)(*(float *)(iVar3 + 0x18) * (float)(__int64)(int)lVar4 +
                      *(float *)(iVar3 + 0x14));
      if (dVar8 < extraout_f1) {
        fVar1 = (float)(extraout_f1 - dVar8);
        break;
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  bVar6 = false;
  bVar7 = false;
  if (ltcg_pool_0_0f < fVar2) {
    bVar6 = fVar2 < *(float *)(iVar3 + 0x28);
  }
  if (ltcg_pool_0_0f < fVar1) {
    bVar7 = fVar1 < *(float *)(*(int *)(param_1 + 0x48) + 0x2c) *
                    *(float *)(*(int *)(param_1 + 0x48) + 0x28);
  }
  if ((bVar6) || (uVar5 = 0, bVar7)) {
    uVar5 = 1;
  }
  return uVar5;
}

