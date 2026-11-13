extern char lbl_820102B4[];
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_827203F0();
extern unsigned int lbl_820102E4;
extern unsigned int lbl_820102E8;
extern unsigned int lbl_8201039C;


unsigned int * fn_827205A8(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_827203F0();
  *param_1 = &lbl_8201039C;
  param_1[4] = &lbl_820102E8;
  param_1[0xc] = &lbl_820102E4;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0xc,param_1,param_2,lbl_820102B4,auStack_20);
  return param_1;
}

