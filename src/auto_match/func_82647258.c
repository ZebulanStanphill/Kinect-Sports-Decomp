extern int fn_82645110();


void fn_82647258(int param_1)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  uVar2 = *(unsigned int *)(param_1 + 0x30);
  if (*(unsigned int *)(param_1 + 0x38) < uVar2) {
    uVar2 = fn_82645110(param_1);
  }
  bVar1 = *(unsigned char *)(param_1 + 0x2ac0);
  *(unsigned int *)(uVar2 + 4) = 0x5c8;
  puVar3 = (unsigned int *)(uVar2 + 8);
  *puVar3 = 0x20000;
  if ((bVar1 & 0x40) != 0) {
    *(unsigned int *)(uVar2 + 0xc) = 0xe00;
    *(unsigned int *)(uVar2 + 0x10) = 1;
    *(unsigned int *)(uVar2 + 0x14) = 0xe40;
    puVar3 = (unsigned int *)(uVar2 + 0x18);
    *puVar3 = 1;
  }
  *(unsigned int **)(param_1 + 0x30) = puVar3;
  *(unsigned char *)(param_1 + 0x2ac0) = *(unsigned char *)(param_1 + 0x2ac0) & 0x3f;
  *(unsigned char *)(param_1 + 0x2abf) = *(unsigned char *)(param_1 + 0x2abf) & 0xfc;
  *(unsigned __int64 *)(param_1 + 0x20) = *(unsigned __int64 *)(param_1 + 0x20) & 0x3fffffffffffffff;
  return;
}

