extern int fn_8265CA20();
extern int fn_82893C48();
extern int fn_828B2848();
extern int fn_828B2BF8();
extern unsigned int lbl_82197D98;


unsigned int * fn_8224C418(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  *param_1 = &lbl_82197D98;
  uVar1 = fn_828B2BF8();
  fn_828B2848(uVar1,param_1);
  fn_82893C48(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

