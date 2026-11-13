extern char lbl_8200FE84[];
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_8274C9B8();
extern unsigned int lbl_8200FFD8;
extern unsigned int lbl_82013398;
extern unsigned int lbl_820134DC;


unsigned int * fn_8271DC30(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_8274C9B8();
  *param_1 = &lbl_820134DC;
  param_1[4] = &lbl_8200FFD8;
  param_1[0xc] = &lbl_82013398;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0xc,param_1,param_2,lbl_8200FE84,auStack_20);
  return param_1;
}

