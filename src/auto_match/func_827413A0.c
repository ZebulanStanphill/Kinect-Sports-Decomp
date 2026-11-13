extern void fn_82740D20(void);
extern int fn_826C35B8();
extern unsigned int lbl_82012488;
extern unsigned int lbl_82013278;


unsigned int * fn_827413A0(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_826C35B8(param_1,param_2,fn_82740D20);
  *param_1 = &lbl_82012488;
  param_1[4] = &lbl_82013278;
  return param_1;
}

