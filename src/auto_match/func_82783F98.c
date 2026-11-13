extern unsigned int lbl_82002C28;


void fn_82783F98(double param_1,float *param_2)

{
  *param_2 = (float)param_1;
  param_2[1] = (float)(param_1 * (double)lbl_82002C28) * (float)(param_1 * (double)lbl_82002C28);
  return;
}

