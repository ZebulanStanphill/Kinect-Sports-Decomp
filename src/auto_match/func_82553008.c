extern int fn_82809868();
extern float lbl_82193E2C;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82553008(unsigned __int64 *param_1,float *param_2)

{
  if ((((*param_2 == lbl_821CA460) && (param_2[1] == lbl_821CA460)) && (param_2[2] == lbl_821CA460))
     && (param_2[3] == lbl_821CA460)) {
    *(unsigned int *)(param_1 + 8) = 0;
  }
  else {
    *(unsigned int *)(param_1 + 8) = 1;
    if ((*(float *)(param_1 + 9) != ltcg_pool_0_0f) && (*(int *)(param_1 + 10) != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82809868((double)(*(float *)((int)param_1 + 0x4c) * lbl_82193E2C));
    }
    *param_1 = *(unsigned __int64 *)param_2;
    param_1[1] = *(unsigned __int64 *)(param_2 + 2);
  }
  return;
}

