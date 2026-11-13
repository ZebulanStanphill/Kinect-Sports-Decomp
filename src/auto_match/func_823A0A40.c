extern int fn_823A6F60();
extern int fn_8265CA20();


void fn_823A0A40(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    fn_823A6F60(iVar1);
    fn_8265CA20(iVar1);
  }
  return;
}

