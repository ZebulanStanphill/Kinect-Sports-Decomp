extern int fn_8265CA20();
extern int fn_828CD160();


void fn_828CD2D8(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    fn_828CD160(iVar1);
    fn_8265CA20(iVar1);
  }
  return;
}

