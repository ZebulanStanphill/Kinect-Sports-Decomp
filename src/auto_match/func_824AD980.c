extern int fn_824ADD00();
extern int fn_8265CA20();
extern int fn_82F53A10();
extern unsigned int lbl_821BFFA4;


void fn_824AD980(unsigned int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = param_1[0xf];
  *param_1 = &lbl_821BFFA4;
  if (iVar1 != 0) {
    fn_824ADD00(iVar1);
    fn_8265CA20(iVar1);
  }
  fn_82F53A10(param_1);
  return;
}

