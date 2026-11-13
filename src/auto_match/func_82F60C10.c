extern int fn_82F61DC0();


void fn_82F60C10(int param_1)

{
  int iVar1;
  
  iVar1 = fn_82F61DC0(param_1 + 4);
  if (iVar1 == 0) {
    *(unsigned int *)(param_1 + 0x58) = 0;
    *(unsigned int *)(param_1 + 0x5c) = 0;
    *(unsigned int *)(param_1 + 0x60) = 0;
    *(unsigned int *)(param_1 + 100) = 0;
    *(unsigned int *)(param_1 + 0x68) = 0;
  }
  return;
}

