extern int fn_826BD6B0();
extern unsigned int lbl_82005798;


unsigned int * fn_82682190(unsigned int *param_1,int param_2)

{
  param_1[2] = param_2;
  param_1[1] = 1;
  *param_1 = &lbl_82005798;
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  fn_826BD6B0(param_1 + 3,*(unsigned int *)param_1[2]);
  return param_1;
}

