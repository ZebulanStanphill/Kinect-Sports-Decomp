extern int fn_8238DFD0();


void fn_8238DF00(int param_1)

{
  unsigned int uVar1;
  
  *(float *)(param_1 + 0xc) = 0.0f;
  uVar1 = fn_8238DFD0();
  *(unsigned int *)(param_1 + 0x2c) = uVar1;
  if (*(int *)(param_1 + 0x24) != 0) {
    *(unsigned int *)(param_1 + 0x24) = 0;
  }
  return;
}

