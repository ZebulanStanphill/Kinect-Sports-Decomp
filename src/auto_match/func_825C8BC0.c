extern unsigned int ltcg_pool_0_0f;


void fn_825C8BC0(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  
  fVar5 = ltcg_pool_0_0f;
  iVar6 = 0;
  do {
    iVar7 = iVar6 * 0x10 + param_2;
    uVar3 = *(unsigned int *)(iVar7 + 0xc);
    if ((uVar3 & 0x80000000) != 0) {
      fVar2 = *(float *)(iVar7 + 0x14);
      fVar4 = *(float *)(iVar7 + 0x10) - fVar2;
      fVar1 = (float)((double)*(float *)(iVar7 + 0x18) * param_1);
      if (fVar1 <= ABS(fVar4)) {
        if (fVar4 <= fVar5) {
          fVar2 = fVar2 - fVar1;
        }
        else {
          fVar2 = fVar2 + fVar1;
        }
        *(float *)(iVar7 + 0x14) = fVar2;
      }
      else {
        *(float *)(iVar7 + 0x14) = *(float *)(iVar7 + 0x10);
        *(unsigned int *)(iVar7 + 0xc) = uVar3 & 0x7fffffff;
        if ((uVar3 & 0x40000000) == 0) {
          if (iVar6 == 0) {
            *(unsigned int *)(param_2 + 4) = *(unsigned int *)(*(int *)(param_2 + 0x54) + 0x134);
          }
          else {
            *(unsigned int *)((iVar6 + 1) * 4 + param_2) =
                 *(unsigned int *)(*(int *)(param_2 + 0x54) + 0x14c);
          }
        }
        else {
          *(unsigned int *)((iVar6 + 1) * 4 + param_2) = 0;
        }
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  if (*(int *)(param_2 + 0x2c) == 0) {
    return;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 0x44) + param_1);
  *(float *)(param_2 + 0x44) = fVar1;
  if (fVar1 <= *(float *)(param_2 + 0x40)) {
    return;
  }
  *(float *)(param_2 + 0x44) = fVar5;
  *(unsigned int *)(param_2 + 0x2c) = 0;
  return;
}

