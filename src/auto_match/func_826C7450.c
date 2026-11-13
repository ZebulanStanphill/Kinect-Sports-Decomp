extern int fn_826994A8();


unsigned int fn_826C7450(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = fn_826994A8((int *)(param_1 + 0xa8));
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(unsigned int *)(iVar1 * 4 + *(int *)(param_1 + 0xa8));
  }
  return uVar2;
}

