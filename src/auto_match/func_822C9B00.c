extern unsigned int lbl_82195718;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_822C9B00(int param_1)

{
  float fVar1;
  
  *(unsigned int *)(*(int *)(param_1 + 0x48) + 0x44) = lbl_82195718;
  fVar1 = lbl_821CA460;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  *(float *)(*(int *)(param_1 + 0x48) + 0x40) =
       (*(float *)(param_1 + 0xac) - *(float *)(param_1 + 0xa8)) *
       ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + *(float *)(param_1 + 0xa8);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  *(float *)(*(int *)(param_1 + 0x48) + 0x4c) =
       (*(float *)(param_1 + 0xbc) - *(float *)(param_1 + 0xb8)) *
       ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar1) + *(float *)(param_1 + 0xb8);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  *(float *)(*(int *)(param_1 + 0x48) + 0x48) =
       (*(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0xb0)) *
       ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar1) + *(float *)(param_1 + 0xb0);
  return;
}

