typedef unsigned char bool;
extern int fn_825F4DE0();
extern int fn_825F4F10();
extern int fn_825F4FE8();
extern unsigned int ltcg_pool_0_0f;


void fn_82610730(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,unsigned int param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  
  fVar3 = ltcg_pool_0_0f;
  iVar1 = **(int **)(param_1 + 0x60);
  if (param_5 == 0) {
    bVar5 = ltcg_pool_0_0f < *(float *)(param_3 + 0x18);
    iVar4 = fn_825F4F10(iVar1,bVar5);
    if (iVar4 == 0) {
      fn_825F4DE0(iVar1,param_3 + 0x10,bVar5);
    }
    *(unsigned int *)(iVar1 + 0x920) = *(unsigned int *)(param_3 + 0x14);
    return;
  }
  if (param_5 != 1) {
    if (param_5 < 3) {
      if (*(float *)(param_3 + 0x18) <= ltcg_pool_0_0f) {
        return;
      }
      fVar2 = ltcg_pool_0_0f;
      if (*(int *)(iVar1 + 0x8dc) != 0) {
        fVar2 = *(float *)(*(int *)(iVar1 + 0x8dc) + 0x10) - *(float *)(iVar1 + 0x8f4);
      }
      if (*(float *)(param_3 + 0x18) < fVar2) {
        return;
      }
      if (*(float *)(iVar1 + 0x924) != ltcg_pool_0_0f) {
        return;
      }
      *(unsigned int *)(iVar1 + 0x924) = *(unsigned int *)(iVar1 + 0x8f4);
      *(float *)(iVar1 + 0x920) = fVar3;
      return;
    }
    if (param_5 != 3) {
      return;
    }
  }
  fn_825F4FE8(iVar1);
  return;
}

