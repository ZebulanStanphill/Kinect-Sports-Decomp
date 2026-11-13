extern char lbl_82013CF4[];
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_82752B58();
extern unsigned int lbl_82013D54;
extern unsigned int lbl_82013F64;
extern unsigned int lbl_82013F68;


unsigned int * fn_82752C10(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_82752B58();
  *param_1 = &lbl_82013D54;
  param_1[4] = &lbl_82013F68;
  param_1[0xc] = &lbl_82013F64;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0xc,param_1,param_2,lbl_82013CF4,auStack_20);
  return param_1;
}

