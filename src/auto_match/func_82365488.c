extern int fn_8288B760();
extern float lbl_82191FB0;
extern unsigned int lbl_82192708;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


double fn_82365488(int param_1)

{
  unsigned int uVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    if (*(int *)(param_1 + 0x168) == 0) {
      uVar1 = *(unsigned int *)(param_1 + 0x16c);
    }
    else {
      uVar1 = fn_8288B760();
      uVar1 = uVar1 & 0xff;
    }
    if (uVar1 != 0) {
      if (*(int *)(param_1 + 0x7a0) != 0) {
        return -(double)(*(float *)(param_1 + 0x794) * lbl_82191FB0 - lbl_821CA460);
      }
      if (*(int *)(param_1 + 0x7a4) != 0) {
        return (double)lbl_82192708;
      }
    }
  }
  return (double)ltcg_pool_0_0f;
}

