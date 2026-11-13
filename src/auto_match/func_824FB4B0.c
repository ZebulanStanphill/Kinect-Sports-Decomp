extern int fn_822746B8();
extern int fn_8265CA20();


void fn_824FB4B0(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 != 0) {
    fn_822746B8(*(unsigned int *)(iVar1 + 0xa0),1);
    *(unsigned int *)(iVar1 + 0xa0) = 0;
    fn_8265CA20(iVar1);
  }
  *(unsigned int *)(param_1 + 0x70) = 0;
  return;
}

