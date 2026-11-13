extern int fn_826F45C0();


void fn_826F4C00(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = fn_826F45C0(*(unsigned int *)(param_1 + 0x20));
  if (iVar1 != 0) {
    *(unsigned int *)(iVar1 + 0xc) = *(unsigned int *)(param_1 + 0x2c4);
    *(unsigned int *)(iVar1 + 0x14) = *(unsigned int *)(param_1 + 0x2d4);
    *(unsigned int *)(iVar1 + 8) = *(unsigned int *)(param_1 + 0x2cc);
    *(unsigned int *)(iVar1 + 0x18) = *(unsigned int *)(param_1 + 0x2e0);
    *(unsigned int *)(iVar1 + 0x10) = *(unsigned int *)(param_1 + 0x2c8);
    *(unsigned int *)(iVar1 + 0x1c) = *(unsigned int *)(param_1 + 0x2d8);
    *(unsigned int *)(param_1 + 0x2c4) = 0;
    *(unsigned int *)(param_1 + 0x2c8) = 0;
    *(unsigned int *)(param_1 + 0x2cc) = 0;
    *(unsigned int *)(param_1 + 0x2d4) = 0;
    *(unsigned int *)(param_1 + 0x2d8) = 0;
    *(unsigned int *)(param_1 + 0x2e0) = 0;
  }
  return;
}

