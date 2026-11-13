extern int fn_82518070();
extern int fn_82895048();
extern unsigned int lbl_82197CE0;
extern unsigned int lbl_821C2838;
extern unsigned int lbl_821C2878;


unsigned int * fn_82517D50(unsigned int *param_1,unsigned __int64 param_2,unsigned short param_3)

{
  fn_82895048();
  param_1[0x1a] = &lbl_82197CE0;
  param_1[0x1d] = 0;
  param_1[0x1c] = param_1 + 0x1b;
  param_1[0x1b] = param_1 + 0x1b;
  *param_1 = &lbl_821C2838;
  param_1[0x1a] = &lbl_821C2878;
  param_1[0x1e] = 0;
  fn_82518070(param_1,param_2,param_3);
  return param_1;
}

