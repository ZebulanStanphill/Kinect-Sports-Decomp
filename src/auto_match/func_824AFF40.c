extern int fn_824B0CF8();
extern int fn_8265CA20();
extern int fn_82F53A10();
extern unsigned int lbl_821C0090;


void fn_824AFF40(unsigned int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = param_1[0xf];
  *param_1 = &lbl_821C0090;
  if (iVar1 != 0) {
    fn_824B0CF8(iVar1);
    fn_8265CA20(iVar1);
  }
  fn_82F53A10(param_1);
  return;
}

