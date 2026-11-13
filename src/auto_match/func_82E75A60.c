extern int fn_82E4FE40();
extern int fn_82E73470();
extern int fn_82E75738();
extern int fn_82EEB200();
extern unsigned int lbl_8215EFE8;


void fn_82E75A60(unsigned int *param_1)

{
  unsigned int iVar1;
  
  *param_1 = &lbl_8215EFE8;
  if (param_1[0x1d] != 0) {
    fn_82E73470(param_1[0x1d]);
    param_1[0x1d] = 0;
  }
  iVar1 = param_1[0x1c];
  if (iVar1 != 0) {
    fn_82EEB200(iVar1);
    fn_82E4FE40(iVar1);
  }
  param_1[0x1c] = 0;
  fn_82E75738(param_1);
  return;
}

