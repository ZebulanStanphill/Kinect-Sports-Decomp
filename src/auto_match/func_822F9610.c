extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831CCC98;
extern unsigned int lbl_831CCC9C;
extern unsigned int lbl_83265A28;


double fn_822F9610(int param_1)

{
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  if ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460 <
      (lbl_831CCC9C - lbl_831CCC98) * *(float *)(*(int *)(param_1 + 0x10) + 0x14) + lbl_831CCC98) {
    return (double)lbl_82192734;
  }
  return (double)ltcg_pool_0_0f;
}

