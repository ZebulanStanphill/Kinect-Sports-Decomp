extern void fn_82743250(void);
extern int fn_826C35B8();
extern unsigned int lbl_820126A8;
extern unsigned int lbl_82013278;


unsigned int * fn_82743518(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_826C35B8(param_1,param_2,fn_82743250);
  *param_1 = &lbl_820126A8;
  param_1[4] = &lbl_82013278;
  return param_1;
}

