extern char lbl_82012128[];
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_8273E080();
extern unsigned int lbl_82012168;
extern unsigned int lbl_820121BC;
extern unsigned int lbl_82012280;


unsigned int * fn_8273E748(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_8273E080();
  *param_1 = &lbl_820121BC;
  param_1[4] = &lbl_82012168;
  param_1[0xe] = &lbl_82012280;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0xe,param_1,param_2,lbl_82012128,auStack_20);
  return param_1;
}

