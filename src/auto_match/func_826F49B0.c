void fn_826F49B0(int param_1,int param_2)

{
  int iVar1;
  
  *(unsigned int *)(param_2 + 0x14) = *(unsigned int *)(param_1 + 700);
  *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + 1;
  if (*(int *)(param_1 + 0x2d4) == 0) {
    *(int *)(param_1 + 0x2d4) = param_2;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  sync(1);
  if (*(int *)(iVar1 + 0x90) == 0) {
    sync(1);
    *(int *)(iVar1 + 0x90) = param_2;
  }
  else {
    sync(1);
    *(int *)(*(int *)(iVar1 + 0x94) + 0x18) = param_2;
  }
  *(int *)(iVar1 + 0x94) = param_2;
  *(int *)(param_1 + 0x2c4) = *(int *)(param_1 + 0x2c4) + 1;
  return;
}

