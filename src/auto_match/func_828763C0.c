extern int fn_8304EF98();
extern int fn_8304EFA8();
extern int fn_8304F7D8();


void fn_828763C0(unsigned int param_1)

{
  int iVar1;
  
  iVar1 = fn_8304EF98();
  if (iVar1 == param_1) {
    fn_8304EFA8(0);
  }
  fn_8304F7D8(*(unsigned int *)(param_1 + 0x41c));
  return;
}

