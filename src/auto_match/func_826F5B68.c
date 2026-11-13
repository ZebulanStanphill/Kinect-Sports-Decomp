extern int fn_8267B7E0();


void fn_826F5B68(int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  if (uVar1 <= *(unsigned int *)(param_1 + 8)) {
    return;
  }
  if (uVar1 <= param_3) {
    return;
  }
  *(int *)(param_1 + 0x10) = (int)(uVar1 - param_3);
  fn_8267B7E0(param_2,uVar1 - param_3);
  return;
}

