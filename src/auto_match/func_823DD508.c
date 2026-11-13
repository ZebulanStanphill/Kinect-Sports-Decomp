extern int fn_82359BB0();
extern int fn_823DDB00();
extern int fn_8249ABC0();
extern unsigned int lbl_821AC5E0;
extern unsigned int lbl_821B6808;


void fn_823DD508(unsigned int *param_1)

{
  int iVar1;
  
  *param_1 = &lbl_821B6808;
  fn_823DDB00();
  iVar1 = fn_8249ABC0();
  *(unsigned int *)(iVar1 + 0x114) = 0xffffffff;
  fn_82359BB0(param_1 + 0xa3);
  fn_82359BB0(param_1 + 0x9f);
  *param_1 = &lbl_821AC5E0;
  return;
}

