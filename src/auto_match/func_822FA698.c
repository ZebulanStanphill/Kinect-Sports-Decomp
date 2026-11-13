extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831CCA08;
extern unsigned int lbl_831CCA0C;
extern unsigned int lbl_83265A28;


double fn_822FA698(int param_1)

{
  double dVar1;
  
  dVar1 = (double)lbl_821CA460;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  if ((lbl_831CCA0C - lbl_831CCA08) * *(float *)(*(int *)(param_1 + 0x10) + 0x14) + lbl_831CCA08 <=
      (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar1)) {
    dVar1 = (double)ltcg_pool_0_0f;
  }
  return dVar1;
}

