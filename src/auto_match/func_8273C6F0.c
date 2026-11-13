extern int fn_826B1688();
extern int fn_826C35B8();
extern unsigned int lbl_820120C8;
extern unsigned int lbl_82013278;


extern void fn_8273C190(void);
extern char lbl_82011F90[];
unsigned int * fn_8273C6F0(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_826C35B8(param_1,param_2,(int)fn_8273C190);
  *param_1 = &lbl_820120C8;
  param_1[4] = &lbl_82013278;
  fn_826B1688(param_1 + 4,param_2,lbl_82011F90,7);
  return param_1;
}

