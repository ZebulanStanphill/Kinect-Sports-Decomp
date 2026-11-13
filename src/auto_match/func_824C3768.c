extern int fn_82268238();
extern int fn_8265CA20();
extern unsigned int lbl_821C097C;


unsigned int * fn_824C3768(unsigned int *param_1,unsigned int param_2)

{
  unsigned int iVar1;
  
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    fn_82268238(iVar1);
    fn_8265CA20(iVar1);
  }
  *param_1 = &lbl_821C097C;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

