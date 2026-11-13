extern int fn_82645110();
extern int memcpy();
extern int iRam832823e4;


void fn_82630270(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;

  if (iRam832823e4 == 0) {
    uVar1 = *(unsigned int *)(param_1 + 0x30);
    if (*(unsigned int *)(param_1 + 0x38) < uVar1) {
      uVar1 = fn_82645110(param_1);
    }
    *(unsigned int *)(uVar1 + 4) = 0x22100;
    *(unsigned int *)(uVar1 + 8) = 0xf;
    *(unsigned int *)(uVar1 + 0xc) = 0xe;
    *(unsigned int *)(uVar1 + 0x10) = 0x10;
    *(unsigned int *)(uVar1 + 0x14) = 0xc0003b00;
    *(unsigned int *)(uVar1 + 0x18) = 0x100;
    *(unsigned int *)(uVar1 + 0x1c) = 0xc0102b00;
    *(unsigned int *)(uVar1 + 0x20) = 0;
    *(unsigned int *)(uVar1 + 0x24) = 0xf;
    memcpy(uVar1 + 0x28,0xffffffff8218da88,0x3c);
    *(unsigned int *)(uVar1 + 100) = 0x12180;
    *(unsigned int *)(uVar1 + 0x68) = 0x7000000;
    *(unsigned int *)(uVar1 + 0x6c) = 0;
    *(unsigned int *)(uVar1 + 0x70) = 0x2208;
    *(unsigned int *)(uVar1 + 0x74) = 4;
    *(unsigned int *)(uVar1 + 0x78) = 0xc0003600;
    *(unsigned int *)(uVar1 + 0x7c) = 0x10081;
    uVar2 = *(unsigned __int64 *)(param_1 + 0x10);
    *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x80000;
    *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x20000080000;
    *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x30000080000;
    *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x38000080000;
    *(unsigned __int64 *)(param_1 + 0x10) = uVar2 | 0x38000080008;
    *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar1 + 0x7c);
  }
  return;
}
