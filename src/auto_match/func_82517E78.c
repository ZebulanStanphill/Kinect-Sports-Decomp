extern int fn_8224BFA0();
extern int fn_8265CA20();
extern int fn_82893C48();
extern int fn_828E91A8();
extern unsigned int lbl_821C2838;
extern unsigned int lbl_821C2878;


void fn_82517E78(unsigned int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = param_1[0x1e];
  *param_1 = &lbl_821C2838;
  param_1[0x1a] = &lbl_821C2878;
  if (iVar1 != 0) {
    fn_828E91A8(iVar1);
    fn_8265CA20(iVar1);
  }
  fn_8224BFA0(param_1 + 0x1a);
  fn_82893C48(param_1);
  return;
}

