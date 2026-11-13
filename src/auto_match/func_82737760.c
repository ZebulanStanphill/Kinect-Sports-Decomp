extern void fn_82736EC0(void);
extern int fn_826C35B8();
extern unsigned int lbl_820118F8;
extern unsigned int lbl_82013278;


unsigned int * fn_82737760(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_826C35B8(param_1,param_2,fn_82736EC0);
  *param_1 = &lbl_820118F8;
  param_1[4] = &lbl_82013278;
  return param_1;
}

