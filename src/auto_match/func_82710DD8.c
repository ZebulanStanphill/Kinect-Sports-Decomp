extern int fn_826B1688();
extern int fn_826C35B8();
extern unsigned int lbl_8200E938;
extern unsigned int lbl_82013278;


extern void fn_827105A0(void);
extern char lbl_8200E880[];
unsigned int * fn_82710DD8(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_826C35B8(param_1,param_2,(int)fn_827105A0);
  *param_1 = &lbl_8200E938;
  param_1[4] = &lbl_82013278;
  fn_826B1688(param_1 + 4,param_2,lbl_8200E880,7);
  return param_1;
}

