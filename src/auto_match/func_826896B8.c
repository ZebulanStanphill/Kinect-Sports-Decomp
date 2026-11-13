extern int fn_82689370();
extern unsigned int lbl_82005C14;
extern unsigned int lbl_82005C20;


unsigned int *
fn_826896B8(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4)

{
  fn_82689370();
  *param_1 = &lbl_82005C20;
  param_1[2] = &lbl_82005C14;
  param_1[5] = 0;
  param_1[6] = param_3;
  param_1[7] = param_4;
  *(unsigned char *)(param_1 + 8) = 0;
  return param_1;
}

