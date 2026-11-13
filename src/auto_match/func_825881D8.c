extern unsigned int ltcg_pool_0_0f;
extern float lbl_8326B85C;
extern unsigned int lbl_8326B8E8;
extern unsigned int lbl_8326B8F0;


double fn_825881D8(double param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != (double)ltcg_pool_0_0f) {
    iVar1 = *(int *)(&lbl_8326B8E8)[param_2];
    if ((0x72 < iVar1) || (iVar1 = 0x72 - iVar1, ((int *)(&lbl_8326B8E8)[param_2])[1] < 0x72)) {
      iVar1 = 0;
    }
    return (double)(float)((double)*(float *)(*(int *)(&lbl_8326B8F0 + param_2 * 4) + iVar1 * 0x18)
                          * param_1);
  }
  iVar1 = *(int *)(&lbl_8326B8E8)[param_2];
  if ((0x72 < iVar1) || (iVar1 = 0x72 - iVar1, ((int *)(&lbl_8326B8E8)[param_2])[1] < 0x72)) {
    iVar1 = 0;
  }
  return (double)(*(float *)(*(int *)(&lbl_8326B8F0 + param_2 * 4) + iVar1 * 0x18) * lbl_8326B85C);
}

