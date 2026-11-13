extern int fn_824B2768();
extern int fn_8265CA20();
extern int fn_82F53A10();
extern unsigned int lbl_821C016C;


void fn_824B2470(unsigned int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = param_1[0xf];
  *param_1 = &lbl_821C016C;
  if (iVar1 != 0) {
    fn_824B2768(iVar1);
    fn_8265CA20(iVar1);
  }
  fn_82F53A10(param_1);
  return;
}

