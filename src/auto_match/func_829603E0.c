extern int fn_82954BD0();
extern unsigned int lbl_82038440;
extern unsigned int lbl_8315B628;
extern unsigned int lbl_8315B868;
extern unsigned int lbl_8315BB18;


unsigned int * fn_829603E0(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  fn_82954BD0(param_1,param_3);
  param_1[0x57] = param_2;
  *param_1 = &lbl_82038440;
  param_1[0x3d] = &lbl_8315B628;
  param_1[0x3e] = &lbl_8315B868;
  param_1[0x3f] = &lbl_8315BB18;
  return param_1;
}

