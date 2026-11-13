extern int fn_82B172B0();


int fn_82B17340(int param_1)

{
  unsigned int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    uVar2 = fn_82B172B0(param_1,iVar1);
    *(unsigned int *)(param_1 + 4) = uVar2;
  }
  return iVar1;
}

