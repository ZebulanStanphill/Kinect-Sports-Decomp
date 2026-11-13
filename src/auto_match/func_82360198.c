extern unsigned int lbl_82193B04;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82360198(int param_1,int param_2,unsigned int param_3)

{
  float fVar1;
  unsigned int uVar2;
  int iVar3;
  
  iVar3 = *(int *)((*(int *)(param_1 + 0x2c8c) + 0xb0a) * 4 + param_1);
  if (iVar3 != 0) {
    *(unsigned int *)(iVar3 + 0x1d0) = 1;
  }
  fVar1 = lbl_821CA460;
  if (param_2 == 0) {
    *(unsigned int *)(param_1 + 0x2c8c) = param_3;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x2c88);
    if (*(unsigned int *)(param_1 + 0x2c8c) < 0xd) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      *(unsigned int *)(param_1 + 0x2c90) = (-lbl_83265A28 & ~lbl_83265A28) >> 0x1f;
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      *(int *)(param_1 + 0x2c8c) =
           (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar1) * (float)(__int64)iVar3 +
                lbl_82193B04);
    }
    else {
      uVar2 = ((-(unsigned int)(*(int *)(param_1 + 0x2c90) != 0) & 2) - 1) + *(unsigned int *)(param_1 + 0x2c8c);
      *(unsigned int *)(param_1 + 0x2c8c) = uVar2;
      if (uVar2 < 0xd) {
        iVar3 = iVar3 + 0xc;
      }
      else {
        if (uVar2 < iVar3 + 0xdU) goto code_r0x823602c4;
        iVar3 = 0xd;
      }
      *(int *)(param_1 + 0x2c8c) = iVar3;
    }
  }
code_r0x823602c4:
  if (*(int *)((*(int *)(param_1 + 0x2c8c) + 0xb0a) * 4 + param_1) == 0) {
    return;
  }
  *(float *)(param_1 + 0x2c98) = fVar1;
  *(unsigned int *)(param_1 + 0x2c94) = ltcg_pool_0_0f;
  return;
}

