extern int fn_830676A8();


void fn_830679A8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) + 1;
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 == *(int *)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar1 + 1;
    *(int *)(param_1 + 0x18) = ((iVar1 + 2) * *(int *)(param_1 + 0x14)) / *(int *)(param_1 + 0x10);
    fn_830676A8(param_1,0xffffffff8217e8c0);
  }
  return;
}

