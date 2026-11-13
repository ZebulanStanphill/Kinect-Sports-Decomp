extern int fn_82645110();


void fn_8262FD28(int param_1,unsigned int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar3 = *(unsigned int *)(param_1 + 0x30);
  if (*(unsigned int *)(param_1 + 0x38) < uVar3) {
    uVar3 = fn_82645110(param_1);
  }
  *(unsigned int *)(uVar3 + 4) = 0xa31;
  *(unsigned int *)(uVar3 + 8) = 0x3000200;
  uVar2 = ((param_2 >> 0x14) + 0x200 & 0x1000) + (param_2 & 0x1fffffff);
  uVar1 = uVar2 & 0xfffff000;
  *(unsigned int *)(uVar3 + 0xc) = 0x10a2f;
  *(unsigned int *)(uVar3 + 0x10) = (uVar2 + param_3 + 0xfff & 0xfffff000) - uVar1;
  *(unsigned int *)(uVar3 + 0x14) = uVar1;
  *(unsigned int *)(uVar3 + 0x18) = 0xc0043c00;
  *(unsigned int *)(uVar3 + 0x1c) = 3;
  *(unsigned int *)(uVar3 + 0x20) = 0xa31;
  *(unsigned int *)(uVar3 + 0x24) = 0;
  *(unsigned int *)(uVar3 + 0x28) = 0x80000000;
  *(unsigned int *)(uVar3 + 0x2c) = 8;
  *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar3 + 0x2c);
  return;
}

