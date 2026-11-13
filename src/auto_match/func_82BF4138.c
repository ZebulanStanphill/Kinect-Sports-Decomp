extern int fn_82BE8D50();
extern int fn_82BED180();
extern unsigned int lbl_820EB804;


void fn_82BF4138(unsigned int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = param_1[0x15];
  *param_1 = &lbl_820EB804;
  if (iVar1 != 0) {
    fn_82BE8D50(*(int *)(*(int *)(iVar1 + 4) + 4) + iVar1 + 4);
    param_1[0x15] = 0;
  }
  fn_82BED180(param_1);
  return;
}

