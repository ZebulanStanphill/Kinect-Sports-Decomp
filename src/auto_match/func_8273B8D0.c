extern int fn_826C0B08();
extern int fn_827395E0();
extern unsigned int lbl_82012018;
extern unsigned int lbl_82012A64;


unsigned int * fn_8273B8D0(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_826C0B08();
  *param_1 = &lbl_82012A64;
  param_1[4] = &lbl_82012018;
  fn_827395E0(param_1,param_2);
  return param_1;
}

