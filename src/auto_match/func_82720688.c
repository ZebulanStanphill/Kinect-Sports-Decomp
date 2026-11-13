extern int fn_826B1688();
extern int fn_826C35B8();
extern unsigned int lbl_820103C0;
extern unsigned int lbl_82013278;


extern void fn_82720318(void);
extern char lbl_820102D4[];
unsigned int * fn_82720688(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_826C35B8(param_1,param_2,(int)fn_82720318);
  *param_1 = &lbl_820103C0;
  param_1[4] = &lbl_82013278;
  fn_826B1688(param_1 + 4,param_2,lbl_820102D4,7);
  return param_1;
}

