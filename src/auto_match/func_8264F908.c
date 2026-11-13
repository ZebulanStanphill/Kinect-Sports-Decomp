extern int fn_82645110();


void fn_8264F908(int param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = *(unsigned int *)(param_1 + 0x30);
  if (*(unsigned int *)(param_1 + 0x38) < uVar2) {
    uVar2 = fn_82645110(param_1);
  }
  *(unsigned int *)(uVar2 + 4) = *(unsigned int *)(param_1 + 0x325c) | 0xc0062d00;
  *(unsigned int *)(uVar2 + 8) = param_2 * 6 & 0x7ffU | 0x10000;
  *(unsigned int *)(uVar2 + 0xc) = *param_3;
  uVar1 = param_3[1];
  *(unsigned int *)(uVar2 + 0x10) =
       ((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1ffff000) | uVar1 & 0xfff;
  *(unsigned int *)(uVar2 + 0x14) = param_3[2];
  *(unsigned int *)(uVar2 + 0x18) = param_3[3];
  *(unsigned int *)(uVar2 + 0x1c) = param_3[4];
  uVar1 = param_3[5];
  *(unsigned int *)(uVar2 + 0x20) =
       ((uVar1 >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1ffff000) | uVar1 & 0xfff;
  *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar2 + 0x20);
  return;
}

