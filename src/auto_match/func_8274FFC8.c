extern void fn_8274F668(void);
extern int fn_826C35B8();
extern unsigned int lbl_82013278;
extern unsigned int lbl_82013940;


unsigned int * fn_8274FFC8(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_826C35B8(param_1,param_2,fn_8274F668);
  *param_1 = &lbl_82013940;
  param_1[4] = &lbl_82013278;
  return param_1;
}

