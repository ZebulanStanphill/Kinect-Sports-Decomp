extern int fn_826C0B08();
extern int fn_8271FB18();
extern unsigned int lbl_82010340;
extern unsigned int lbl_82012A64;


unsigned int * fn_8271FC40(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_826C0B08();
  *param_1 = &lbl_82012A64;
  param_1[4] = &lbl_82010340;
  fn_8271FB18(param_1,param_2);
  return param_1;
}

