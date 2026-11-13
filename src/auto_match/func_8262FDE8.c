extern int fn_82645110();


void fn_8262FDE8(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 0x30);
  if (*(unsigned int *)(param_1 + 0x38) < uVar1) {
    uVar1 = fn_82645110(param_1);
  }
  *(unsigned int *)(uVar1 + 4) = 0xe00;
  *(unsigned int *)(uVar1 + 8) = 1;
  *(unsigned int *)(uVar1 + 0xc) = 0xe40;
  *(unsigned int *)(uVar1 + 0x10) = 1;
  *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar1 + 0x10);
  return;
}

