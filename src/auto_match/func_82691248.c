extern int fn_826931A8();
extern int fn_8270AAE8();
extern unsigned int lbl_831F129C;


void fn_82691248(unsigned int *param_1,int *param_2)

{
  fn_8270AAE8(param_1 + 4);
  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  fn_826931A8(lbl_831F129C,param_2,param_2[2]);
  param_1[0x6a] = param_1[0x6a] - param_2[2];
  (*(int (**)())(*(int *)*param_1 + 8))((int *)*param_1,param_2,param_2[2],0x1000);
  return;
}

