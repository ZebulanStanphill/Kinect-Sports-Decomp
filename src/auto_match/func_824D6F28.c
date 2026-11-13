typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_824D6F28(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  
  iVar2 = *(int *)(param_1 + 0x100);
  iVar3 = *(int *)(param_1 + 0x104);
  bVar5 = false;
  bVar6 = false;
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x44) != 0)) {
    bVar5 = true;
    *(unsigned int *)(iVar2 + 0x44) = 0;
  }
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x44) != 0)) {
    bVar6 = true;
    *(unsigned int *)(iVar3 + 0x44) = 0;
  }
  if ((!bVar5) && (!bVar6)) {
    return 0;
  }
  fVar4 = ltcg_pool_0_0f;
  if (*(int *)(param_1 + 0x100) != 0) {
    fVar4 = *(float *)(*(int *)(param_1 + 0x100) + 0x48);
  }
  fVar1 = ltcg_pool_0_0f;
  if (*(int *)(param_1 + 0x104) != 0) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x104) + 0x48);
  }
  if (bVar5) {
    if (!bVar6) {
      *param_2 = fVar4;
      return 1;
    }
    if (ABS(fVar1) < ABS(fVar4)) {
      fVar1 = fVar4;
    }
  }
  else if (!bVar6) {
    return 1;
  }
  *param_2 = fVar1;
  return 1;
}

