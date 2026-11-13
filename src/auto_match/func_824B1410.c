typedef unsigned char bool;
extern unsigned int ltcg_pool_0_0f;


unsigned char fn_824B1410(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (3 < *(unsigned int *)(iVar1 + 0x14)) {
    if (*(int *)(iVar1 + 0x14) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar1 + 0x14) + -1;
      if (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc) >> 5 <= iVar6) {
        iVar6 = iVar6 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 5);
      }
      iVar6 = iVar6 * 0x20 + *(int *)(iVar1 + 0xc);
    }
    uVar4 = 0;
    fVar3 = *(float *)(iVar1 + 0x28);
    fVar2 = ltcg_pool_0_0f;
    while ((ltcg_pool_0_0f < fVar3 && (uVar4 < *(int *)(iVar1 + 0x14) - 1U))) {
      uVar4 = uVar4 + 1;
      if (uVar4 < *(unsigned int *)(iVar1 + 0x14)) {
        iVar5 = (*(unsigned int *)(iVar1 + 0x14) - uVar4) + -1;
        if (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc) >> 5 <= iVar5) {
          iVar5 = iVar5 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 5);
        }
        iVar5 = iVar5 * 0x20 + *(int *)(iVar1 + 0xc);
      }
      else {
        iVar5 = 0;
      }
      fVar3 = fVar3 - *(float *)(iVar5 + 0x10);
      if (uVar4 < *(unsigned int *)(iVar1 + 0x14)) {
        iVar5 = (*(unsigned int *)(iVar1 + 0x14) - uVar4) + -1;
        if (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc) >> 5 <= iVar5) {
          iVar5 = iVar5 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 5);
        }
        iVar5 = iVar5 * 0x20 + *(int *)(iVar1 + 0xc);
      }
      else {
        iVar5 = 0;
      }
      fVar2 = *(float *)(iVar5 + 0x10) + fVar2;
    }
    if (uVar4 < *(unsigned int *)(iVar1 + 0x14)) {
      iVar5 = (*(unsigned int *)(iVar1 + 0x14) - uVar4) + -1;
      if (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc) >> 5 <= iVar5) {
        iVar5 = iVar5 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 5);
      }
      iVar5 = iVar5 * 0x20 + *(int *)(iVar1 + 0xc);
    }
    else {
      iVar5 = 0;
    }
    *(bool *)(iVar1 + 0x1c) =
         *(float *)(iVar1 + 0x24) <
         (*(float *)(iVar6 + 4) - *(float *)(iVar5 + 4)) * (*(float *)(iVar1 + 0x28) / fVar2);
  }
  return *(unsigned char *)(*(int *)(param_1 + 0x3c) + 0x1c);
}

