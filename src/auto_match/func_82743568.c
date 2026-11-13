extern char lbl_82012550[];
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_82743460();
extern unsigned int lbl_820125C0;
extern unsigned int lbl_820126EC;
extern unsigned int lbl_820126F0;


unsigned int * fn_82743568(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_82743460();
  *param_1 = &lbl_820126F0;
  param_1[4] = &lbl_820125C0;
  param_1[0xc] = &lbl_820126EC;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0xc,param_1,param_2,lbl_82012550,auStack_20);
  return param_1;
}

