extern int fn_82F5B3C0();
extern int fn_8265CA20();


void fn_82F56608(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    fn_82F5B3C0(iVar1);
    fn_8265CA20(iVar1);
  }
  return;
}

