extern int fn_82760448();


int fn_82766990(int param_1,unsigned int param_2)

{
  int iVar1;
  
  if (param_2 < *(unsigned int *)(param_1 + 0x24)) {
    iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x20));
    if (iVar1 != 0) {
      fn_82760448(iVar1);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

