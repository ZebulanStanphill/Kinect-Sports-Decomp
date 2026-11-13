extern int fn_82B7BEB0();
extern int fn_82BC08D0();
extern unsigned int lbl_820E3564;


void fn_82BC1230(unsigned int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = param_1[0xb];
  *param_1 = &lbl_820E3564;
  if (iVar1 != 0) {
    fn_82BC08D0(iVar1);
    fn_82B7BEB0(*(unsigned int *)(iVar1 + -4),iVar1 + -4);
  }
  return;
}

