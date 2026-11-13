extern int fn_826829A0();
extern int fn_826B14D8();
extern int fn_826C2D08();
extern unsigned int lbl_8200B7A8;
extern unsigned int lbl_8200B7F0;


unsigned int * fn_826C35B8(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int uVar1;
  
  fn_826C2D08();
  param_1[0xc] = param_3;
  *param_1 = &lbl_8200B7A8;
  param_1[4] = &lbl_8200B7F0;
  uVar1 = fn_826B14D8(*param_2,7);
  fn_826829A0(param_1 + 4,param_2,uVar1);
  return param_1;
}

