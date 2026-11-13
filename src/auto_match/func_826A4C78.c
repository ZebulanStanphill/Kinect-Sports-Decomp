extern char lbl_82006DC8[];
extern unsigned int *auStack_20;
extern int fn_826A4620();
extern int fn_826BF638();
extern unsigned int lbl_82006F24;
extern unsigned int lbl_82006F28;
extern unsigned int lbl_82006F7C;


unsigned int * fn_826A4C78(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_826A4620();
  *param_1 = &lbl_82006F7C;
  param_1[4] = &lbl_82006F28;
  param_1[0x12] = &lbl_82006F24;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0x12,param_1,param_2,lbl_82006DC8,auStack_20);
  return param_1;
}

