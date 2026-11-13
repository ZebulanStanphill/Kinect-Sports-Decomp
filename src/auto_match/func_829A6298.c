extern int fn_82954BD0();
extern unsigned int lbl_82051CA8;
extern unsigned int lbl_8315BEA8;
extern unsigned int lbl_8315C0E8;


unsigned int * fn_829A6298(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  fn_82954BD0(param_1,param_3);
  param_1[0x57] = param_2;
  *param_1 = &lbl_82051CA8;
  param_1[0x3d] = &lbl_8315BEA8;
  param_1[0x3e] = &lbl_8315C0E8;
  return param_1;
}

