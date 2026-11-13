extern int fn_8265CA20();
extern int fn_8289DF30(unsigned int);


void fn_828A33C8(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    if (*(unsigned int *)(iVar1 + 4) != 0) {
      fn_8289DF30(*(unsigned int *)(iVar1 + 4));
    }
    fn_8265CA20(iVar1);
  }
  return;
}

