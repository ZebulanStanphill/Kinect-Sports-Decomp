extern char lbl_8200F45C[];
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_827150C8();
extern unsigned int lbl_8200F484;
extern unsigned int lbl_8200F488;
extern unsigned int lbl_8200F588;


unsigned int * fn_827151A8(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_827150C8();
  *param_1 = &lbl_8200F488;
  param_1[4] = &lbl_8200F588;
  param_1[0xd] = &lbl_8200F484;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0xd,param_1,param_2,lbl_8200F45C,auStack_20);
  return param_1;
}

