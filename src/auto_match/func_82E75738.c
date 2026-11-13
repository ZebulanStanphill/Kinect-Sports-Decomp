extern int fn_82BA02A8();
extern int fn_82E4FE40();
extern unsigned int lbl_8215EF88;


void fn_82E75738(unsigned int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = param_1[0x17];
  *param_1 = &lbl_8215EF88;
  if (iVar1 != 0) {
    fn_82BA02A8(iVar1);
    fn_82E4FE40(iVar1);
  }
  param_1[0x17] = 0;
  return;
}

