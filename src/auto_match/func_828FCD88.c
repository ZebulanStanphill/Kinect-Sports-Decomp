extern int fn_8265C990();
extern int fn_828FCDD8();


void fn_828FCD88(unsigned int *param_1)

{
  unsigned int iVar1;
  
  fn_8265C990(*param_1,0x24810000);
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    fn_828FCD88(iVar1);
    fn_828FCDD8(iVar1);
  }
  return;
}

