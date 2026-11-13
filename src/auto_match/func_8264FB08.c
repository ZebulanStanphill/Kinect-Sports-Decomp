extern int fn_82645110();


void fn_8264FB08(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x30);
  if (*(unsigned int *)(param_1 + 0x38) < uVar1) {
    uVar1 = fn_82645110(param_1);
  }
  *(unsigned int *)(uVar1 + 4) = 0x22100;
  *(unsigned int *)(uVar1 + 8) = 0xffff;
  *(unsigned int *)(uVar1 + 0xc) = 0;
  *(unsigned int *)(uVar1 + 0x10) = 0;
  *(unsigned int *)(uVar1 + 0x14) = 0x2293;
  *(unsigned int *)(uVar1 + 0x18) = 0;
  *(unsigned int *)(uVar1 + 0x1c) = 0x22204;
  *(unsigned int *)(uVar1 + 0x20) = 0x10000;
  *(unsigned int *)(uVar1 + 0x24) = 0x10000;
  *(unsigned int *)(uVar1 + 0x28) = 0x300;
  *(unsigned int *)(uVar1 + 0x2c) = 0x2312;
  *(unsigned int *)(uVar1 + 0x30) = 0xffff;
  *(unsigned int *)(uVar1 + 0x34) = 0x200d;
  puVar2 = (unsigned int *)(uVar1 + 0x38);
  *puVar2 = 0;
  *(unsigned int **)(param_1 + 0x30) = puVar2;
  if (*(unsigned int **)(param_1 + 0x38) < puVar2) {
    puVar2 = (unsigned int *)fn_82645110(param_1);
  }
  puVar2[1] = 0x2104;
  puVar2[2] = 0xffff;
  puVar2[3] = 0x2202;
  puVar2[4] = 0;
  puVar2[5] = 0x2201;
  puVar2[6] = 0x10001;
  puVar2[7] = 0x2302;
  puVar2[8] = 1;
  puVar2[9] = 0x2200;
  puVar2[10] = 0;
  puVar2[0xb] = 0x2208;
  puVar2[0xc] = 4;
  puVar2[0xd] = 0x2203;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0x2182;
  puVar2[0x10] = 0xffffffff;
  *(unsigned int **)(param_1 + 0x30) = puVar2 + 0x10;
  return;
}

