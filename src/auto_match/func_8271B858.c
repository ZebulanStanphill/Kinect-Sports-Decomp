extern char lbl_8200FA40[];
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_8271B3C0();
extern unsigned int lbl_8200FB5C;
extern unsigned int lbl_8200FB60;
extern unsigned int lbl_8200FBB4;


unsigned int * fn_8271B858(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_8271B3C0();
  *param_1 = &lbl_8200FBB4;
  param_1[4] = &lbl_8200FB60;
  param_1[0xd] = &lbl_8200FB5C;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0xd,param_1,param_2,lbl_8200FA40,auStack_20);
  return param_1;
}

