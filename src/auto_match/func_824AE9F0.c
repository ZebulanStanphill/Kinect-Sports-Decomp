extern int fn_824AF888();
extern int fn_8265CA20();
extern int fn_82F53A10();
extern unsigned int lbl_821C0044;


void fn_824AE9F0(unsigned int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = param_1[0xf];
  *param_1 = &lbl_821C0044;
  if (iVar1 != 0) {
    fn_824AF888(iVar1);
    fn_8265CA20(iVar1);
  }
  fn_82F53A10(param_1);
  return;
}

