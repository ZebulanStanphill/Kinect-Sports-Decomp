extern int fn_8265CA20();
extern int fn_82BA02A8();


void fn_82F56688(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    fn_82BA02A8(iVar1);
    fn_8265CA20(iVar1);
  }
  return;
}

