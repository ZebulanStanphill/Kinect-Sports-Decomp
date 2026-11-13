extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


double fn_822F9320(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  fVar1 = *(float *)(*(int *)(param_1 + 0x10) + 0x10);
  fVar3 = (*(float *)(iVar2 + 0x54) - *(float *)(iVar2 + 0x4c)) * fVar1 + *(float *)(iVar2 + 0x4c);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  return (double)((((*(float *)(iVar2 + 0x58) - *(float *)(iVar2 + 0x50)) * fVar1 +
                   *(float *)(iVar2 + 0x50)) - fVar3) *
                  ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fVar3);
}

