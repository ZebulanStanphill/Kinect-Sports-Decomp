extern char lbl_82013984[];
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_827511A8();
extern unsigned int lbl_82013A10;
extern unsigned int lbl_82013A18;
extern unsigned int lbl_82013A6C;


unsigned int * fn_82751238(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_827511A8();
  *param_1 = &lbl_82013A6C;
  param_1[4] = &lbl_82013A18;
  param_1[0xf] = &lbl_82013A10;
  auStack_20[0] = 0;
  fn_826BF638(param_1 + 0xf,param_1,param_2,lbl_82013984,auStack_20);
  return param_1;
}

