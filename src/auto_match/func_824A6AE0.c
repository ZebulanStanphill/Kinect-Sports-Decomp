extern int fn_824A7658();
extern int fn_82536288();
extern int fn_8265CA20();
extern int fn_82F53A10();
extern unsigned int lbl_821BF828;


void fn_824A6AE0(unsigned int *param_1)

{
  unsigned int iVar1;
  
  *param_1 = &lbl_821BF828;
  if (*(unsigned int *)(param_1[0xf] + 0x34) != 0) {
    fn_82536288(param_1[0xf] + 0x34);
  }
  if (*(unsigned int *)(param_1[0xf] + 0x38) != 0) {
    fn_82536288(param_1[0xf] + 0x38);
  }
  iVar1 = param_1[0xf];
  if (iVar1 != 0) {
    fn_824A7658(iVar1);
    fn_8265CA20(iVar1);
  }
  fn_82F53A10(param_1);
  return;
}

