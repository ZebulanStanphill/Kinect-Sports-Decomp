extern int fn_82645110();


void fn_82647588(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x30);
  if (*(unsigned int *)(param_1 + 0x38) < uVar1) {
    uVar1 = fn_82645110(param_1);
  }
  *(unsigned int *)(uVar1 + 4) = 0xc0004600;
  puVar2 = (unsigned int *)(uVar1 + 8);
  *puVar2 = 0xf;
  if (param_2 == 1) {
    *(unsigned int *)(uVar1 + 0xc) = 0x5c8;
    puVar2 = (unsigned int *)(uVar1 + 0x10);
    *puVar2 = 0x20000;
    *(unsigned char *)(param_1 + 0x2abf) = *(unsigned char *)(param_1 + 0x2abf) & 0xfc;
  }
  *(unsigned int **)(param_1 + 0x30) = puVar2;
  *(unsigned char *)(param_1 + 0x2abd) = *(unsigned char *)(param_1 + 0x2abd) & 0xfb;
  return;
}

