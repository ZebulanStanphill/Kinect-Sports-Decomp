extern int fn_8265CA20();
extern int fn_82F51510();
extern unsigned int lbl_82165B5C;


void fn_82F51660(unsigned int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = param_1[1];
  *param_1 = &lbl_82165B5C;
  if (iVar1 != 0) {
    fn_82F51510(iVar1);
    fn_8265CA20(iVar1);
    param_1[1] = 0;
  }
  return;
}

