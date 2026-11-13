extern int fn_826C0B08();
extern int fn_82719E58();
extern unsigned int lbl_8200FAD0;
extern unsigned int lbl_8200FB24;


unsigned int * fn_8271B300(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_826C0B08();
  *param_1 = &lbl_8200FB24;
  param_1[4] = &lbl_8200FAD0;
  param_1[0xc] = 0;
  fn_82719E58(param_1,param_2);
  return param_1;
}

