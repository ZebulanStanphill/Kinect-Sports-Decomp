extern int fn_82954BD0();
extern unsigned int lbl_8204FBA0;
extern unsigned int lbl_8315BB98;
extern unsigned int lbl_8315BCB8;


unsigned int * fn_82992B68(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  fn_82954BD0(param_1,param_3);
  param_1[0x57] = param_2;
  *param_1 = &lbl_8204FBA0;
  param_1[0x3e] = &lbl_8315BB98;
  param_1[0x3f] = &lbl_8315BCB8;
  param_1[0x8b] = 0;
  return param_1;
}

