extern int fn_82F68B74();
extern unsigned int lbl_821AAD20;


void fn_82FEF710(int param_1)

{
  double dVar1;
  
  dVar1 = (double)lbl_821AAD20;
  *(unsigned char *)(param_1 + 0xd8) = *(unsigned char *)(param_1 + 0xd8) & 0xe1 | 2;
  fn_82F68B74(dVar1,param_1,1,0);
  return;
}

