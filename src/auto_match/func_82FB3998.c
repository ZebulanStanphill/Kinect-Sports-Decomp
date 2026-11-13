extern int fn_82FABD78();
extern int fn_82FAD0D0();
extern unsigned int lbl_8216CC7C;
extern unsigned int lbl_8216D71C;
extern unsigned int lbl_8216D730;
extern unsigned int lbl_8216D738;
extern unsigned int lbl_8216D750;


unsigned int * fn_82FB3998(unsigned int *param_1,int *param_2,unsigned __int64 param_3)

{
  fn_82FABD78(param_1,param_3);
  fn_82FAD0D0(param_1 + 0x10);
  param_1[0x16] = param_2;
  *param_1 = &lbl_8216D750;
  param_1[1] = &lbl_8216D738;
  param_1[4] = &lbl_8216D730;
  param_1[6] = &lbl_8216CC7C;
  param_1[0x10] = &lbl_8216D71C;
  if (param_2 != (int *)0x0) {
    (*(int (**)())(*param_2 + 4))(param_2);
  }
  return param_1;
}

