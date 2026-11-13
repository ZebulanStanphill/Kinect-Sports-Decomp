extern int fn_8265CA20();
extern int fn_82F54060();


void fn_82F56648(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    fn_82F54060(iVar1);
    fn_8265CA20(iVar1);
  }
  return;
}

