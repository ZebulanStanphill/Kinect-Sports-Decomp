void fn_82A6E4F0(int param_1,int param_2)

{
  int iVar1;
  
  if (2 < *(int *)(param_1 + 0x3c)) {
    *(unsigned int *)(param_1 + 0x34) = 0x1f;
    *(unsigned int *)(param_1 + 0x38) = 0x7fffffff;
    return;
  }
  if ((param_2 < 5) || (param_2 < 0xf)) {
    iVar1 = 0xd;
  }
  else if (param_2 < 0x20) {
    iVar1 = 0xc;
  }
  else if (param_2 < 0x28) {
    iVar1 = 0xb;
  }
  else if (param_2 < 0x2d) {
    iVar1 = 10;
  }
  else {
    iVar1 = 9;
  }
  *(int *)(param_1 + 0x34) = iVar1;
  *(int *)(param_1 + 0x38) = (1 << iVar1) + -1;
  return;
}

