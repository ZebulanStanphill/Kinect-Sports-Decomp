extern char lbl_8201350C[];
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_8274D798();
extern unsigned int lbl_820135A8;
extern unsigned int lbl_820135B0;
extern unsigned int lbl_82013660;


unsigned int * fn_8274DFE0(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_8274D798();
  *param_1 = &lbl_82013660;
  param_1[4] = &lbl_820135B0;
  param_1[0xe] = &lbl_820135A8;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0xe,param_1,param_2,lbl_8201350C,auStack_20);
  return param_1;
}

