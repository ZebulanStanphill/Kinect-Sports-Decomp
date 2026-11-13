extern int fn_82809558();
extern int fn_82809D40();
extern unsigned int lbl_821AAD20;


void fn_8281D260(float *param_1,float *param_2)

{
  double dVar1;
  
  dVar1 = (double)lbl_821AAD20;
  if (((double)*param_1 == dVar1) && ((double)param_1[2] == dVar1)) {
    *param_2 = lbl_821AAD20;
  }
  else {
    dVar1 = (double)fn_82809D40((double)*param_1,(double)param_1[2]);
    *param_2 = (float)dVar1;
    dVar1 = (double)fn_82809558((double)(param_1[2] * param_1[2] + *param_1 * *param_1));
  }
  fn_82809D40((double)param_1[1],dVar1);
  return;
}

