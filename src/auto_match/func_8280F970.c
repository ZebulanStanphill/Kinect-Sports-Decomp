extern int fn_8280A668();
extern unsigned int lbl_82002C5C;


void fn_8280F970(double param_1,float *param_2,unsigned __int64 param_3,float *param_4)

{
  float afStack_20 [2];
  
  fn_8280A668((double)(float)(param_1 * (double)lbl_82002C5C),param_2,afStack_20,param_4 + 3);
  *param_4 = *param_2 * afStack_20[0];
  param_4[1] = param_2[1] * afStack_20[0];
  param_4[2] = param_2[2] * afStack_20[0];
  return;
}

