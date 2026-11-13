extern unsigned int *auStack_30;
extern int fn_82696330();
extern int fn_826A79D8();
extern int fn_826B1688();
extern int fn_826C35B8();
extern unsigned int lbl_820133A8;
extern unsigned int lbl_82013400;


extern char lbl_82013380[];
extern void fn_8274C158(void);
unsigned int * fn_8274C300(unsigned int *param_1,unsigned int param_2)

{
  unsigned char auStack_30;
  
  fn_826C35B8(param_1,param_2,fn_8274C158);
  *param_1 = &lbl_82013400;
  param_1[4] = &lbl_820133A8;
  auStack_30 = 10;
  fn_826A79D8(param_1 + 4,param_2,"available",&auStack_30);
  fn_82696330(&auStack_30);
  fn_826B1688(param_1 + 4,param_2,lbl_82013380,7);
  return param_1;
}

