extern void fn_82750B98(void);
extern int fn_826C35B8();
extern unsigned int lbl_82013278;
extern unsigned int lbl_82013B00;


unsigned int * fn_827512C0(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_826C35B8(param_1,param_2,fn_82750B98);
  *param_1 = &lbl_82013B00;
  param_1[4] = &lbl_82013278;
  return param_1;
}

