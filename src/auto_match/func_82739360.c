extern char lbl_820119B8[];
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_82739298();
extern unsigned int lbl_82011B48;
extern unsigned int lbl_82011B9C;
extern unsigned int lbl_82011BC0;


unsigned int * fn_82739360(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_82739298();
  *param_1 = &lbl_82011B9C;
  param_1[4] = &lbl_82011B48;
  param_1[0x11] = &lbl_82011BC0;
  auStack_20[0] = 6;
  fn_826BF638(param_1 + 0x11,param_1,param_2,lbl_820119B8,auStack_20);
  return param_1;
}

