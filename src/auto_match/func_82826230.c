extern int fn_8265CA20();
extern int fn_828252D8();
extern int fn_82872E60();


void fn_82826230(int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0xc);
  if (iVar1 != 0) {
    fn_82872E60(iVar1);
    fn_8265CA20(iVar1);
  }
  fn_828252D8(*param_1);
  *param_1 = 0;
  return;
}

