extern char lbl_82011E50[];
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_8273C558();
extern unsigned int lbl_82011FB8;
extern unsigned int lbl_82011FC0;
extern unsigned int lbl_820120A4;


unsigned int * fn_8273C610(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_8273C558();
  *param_1 = &lbl_820120A4;
  param_1[4] = &lbl_82011FC0;
  param_1[0x18] = &lbl_82011FB8;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0x18,param_1,param_2,lbl_82011E50,auStack_20);
  return param_1;
}

