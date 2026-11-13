extern int fn_825529B0();
extern int fn_82552B50();
extern unsigned int lbl_821CAD2C;


void fn_8261A4C8(unsigned int *param_1)

{
  int iVar1;
  
  *param_1 = &lbl_821CAD2C;
  iVar1 = fn_825529B0(param_1 + 0x1f);
  if (iVar1 != 0) {
    fn_82552B50(param_1 + 0x1f,1);
  }
  return;
}

