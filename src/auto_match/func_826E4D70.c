extern int fn_8267C498();
extern int fn_826EF278();
extern unsigned int lbl_8200D3A4;


unsigned int * fn_826E4D70(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  param_1[2] = 0;
  *param_1 = &lbl_8200D3A4;
  param_1[1] = 1;
  param_1[3] = 0;
  fn_826EF278(param_1 + 4);
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  if (param_1[3] != 0) {
    fn_8267C498(param_1[3]);
  }
  param_1[3] = param_2;
  param_1[6] = param_3;
  return param_1;
}

