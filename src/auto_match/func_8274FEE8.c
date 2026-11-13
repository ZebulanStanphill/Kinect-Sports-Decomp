extern char lbl_8201377C[];
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_8274FE58();
extern unsigned int lbl_82013808;
extern unsigned int lbl_82013810;
extern unsigned int lbl_8201391C;


unsigned int * fn_8274FEE8(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_8274FE58();
  *param_1 = &lbl_8201391C;
  param_1[4] = &lbl_82013810;
  param_1[0xf] = &lbl_82013808;
  auStack_20[0] = 0;
  fn_826BF638(param_1 + 0xf,param_1,param_2,lbl_8201377C,auStack_20);
  return param_1;
}

