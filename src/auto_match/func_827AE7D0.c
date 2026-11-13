extern char lbl_82015D40[];
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_827AE740();
extern unsigned int lbl_82015D88;
extern unsigned int lbl_82015D90;
extern unsigned int lbl_82015DE4;


unsigned int * fn_827AE7D0(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_827AE740();
  *param_1 = &lbl_82015DE4;
  param_1[4] = &lbl_82015D90;
  param_1[0x10] = &lbl_82015D88;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0x10,param_1,param_2,lbl_82015D40,auStack_20);
  return param_1;
}

