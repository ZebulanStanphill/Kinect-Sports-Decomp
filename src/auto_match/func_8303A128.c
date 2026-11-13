extern unsigned int lbl_82002C5C;
extern float lbl_82054148;


void fn_8303A128(int param_1,unsigned int *param_2)

{
  *param_2 = (unsigned int)(__int64)
                   ((float)*param_2 / ((float)*(unsigned int *)(param_1 + 0x24) * lbl_82054148) +
                   lbl_82002C5C);
  return;
}

