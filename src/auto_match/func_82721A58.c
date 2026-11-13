extern char lbl_82010414[];
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_8271F558();
extern unsigned int lbl_8200F0B0;
extern unsigned int lbl_82010284;
extern unsigned int lbl_82013318;


unsigned int * fn_82721A58(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_8271F558();
  *param_1 = &lbl_82010284;
  param_1[4] = &lbl_82013318;
  param_1[0xc] = &lbl_8200F0B0;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0xc,param_1,param_2,lbl_82010414,auStack_20);
  return param_1;
}

