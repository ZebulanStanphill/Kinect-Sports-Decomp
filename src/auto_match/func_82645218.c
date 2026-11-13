extern int fn_82645110();


void fn_82645218(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 0x30);
  if (*(unsigned int *)(param_1 + 0x38) < uVar1) {
    uVar1 = fn_82645110(param_1);
  }
  *(unsigned int *)(uVar1 + 4) = 0xc0025801;
  *(unsigned int *)(uVar1 + 8) = 0x80000003;
  *(unsigned int *)(uVar1 + 0xc) = ((param_2 >> 0x14) + 0x200 & 0x1000) + (param_2 & 0x1fffffff) | 2;
  *(unsigned int *)(uVar1 + 0x10) = 0xdeadbeef;
  *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar1 + 0x10);
  return;
}

