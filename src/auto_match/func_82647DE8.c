extern int fn_82645110();


void fn_82647DE8(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 0x30);
  if (*(unsigned int *)(param_1 + 0x38) < uVar1) {
    uVar1 = fn_82645110(param_1);
  }
  *(unsigned int *)(uVar1 + 4) = 0xc0022100;
  *(unsigned int *)(uVar1 + 8) = 0x1841;
  *(unsigned int *)(uVar1 + 0xc) = 0xfffff8ff;
  *(unsigned int *)(uVar1 + 0x10) = (unsigned int)(LZCOUNT(0x28280136 - (int)param_2) << 3) & 0x100;
  *(unsigned int *)(uVar1 + 0x14) = 0x1930;
  *(unsigned int *)(uVar1 + 0x18) = -(unsigned int)(param_2 == 0x28280136) & 3;
  *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar1 + 0x18);
  return;
}

