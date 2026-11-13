extern unsigned int *auStack_20;
extern int fn_8269D3D0();
extern unsigned int lbl_820069EC;
extern unsigned int lbl_820069F8;


unsigned int *
fn_8269D7D8(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int auStack_20 [2];
  
  auStack_20[0] = *param_4;
  fn_8269D3D0(param_1,param_3,auStack_20);
  param_1[0x1a] = param_2;
  *param_1 = &lbl_820069F8;
  param_1[3] = &lbl_820069EC;
  return param_1;
}

