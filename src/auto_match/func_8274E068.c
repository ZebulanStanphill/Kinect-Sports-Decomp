extern int fn_826B1688();
extern int fn_826C35B8();
extern unsigned int lbl_82012FA8;
extern unsigned int lbl_82013278;


extern void fn_8274D718(void);
extern char lbl_8201351C[];
unsigned int * fn_8274E068(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_826C35B8(param_1,param_2,(int)fn_8274D718);
  *param_1 = &lbl_82012FA8;
  param_1[4] = &lbl_82013278;
  fn_826B1688(param_1 + 4,param_2,lbl_8201351C,7);
  return param_1;
}

