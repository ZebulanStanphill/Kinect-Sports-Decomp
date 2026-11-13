extern char lbl_82011700[];
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_827375F0();
extern unsigned int lbl_820117A8;
extern unsigned int lbl_820117B0;
extern unsigned int lbl_820118D0;


unsigned int * fn_82737680(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_827375F0();
  *param_1 = &lbl_820118D0;
  param_1[4] = &lbl_820117B0;
  param_1[0x1d] = &lbl_820117A8;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0x1d,param_1,param_2,lbl_82011700,auStack_20);
  return param_1;
}

