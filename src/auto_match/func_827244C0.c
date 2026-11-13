extern int fn_826B1688();
extern int fn_826C35B8();
extern unsigned int lbl_82010C98;
extern unsigned int lbl_82013278;


extern void fn_826EA050(void);
extern char lbl_820108E0[];
unsigned int * fn_827244C0(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_826C35B8(param_1,param_2,(int)fn_826EA050);
  *param_1 = &lbl_82010C98;
  param_1[4] = &lbl_82013278;
  fn_826B1688(param_1 + 4,param_2,lbl_820108E0,7);
  return param_1;
}

