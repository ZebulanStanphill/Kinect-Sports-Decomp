extern int fn_8251E5A0();


void fn_82572A20(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  if ((*(unsigned int *)(param_1 + 0xa0) != 0) && (*(int *)(*(int *)(param_1 + 0xa0) + 0xc) == param_2)) {
    *(unsigned int *)(param_1 + 0xa0) = 0;
    *(unsigned char *)(param_1 + 0xc0) = 0;
  }
  if ((*(unsigned int *)(param_1 + 0x110) != 0) && (*(int *)(*(int *)(param_1 + 0x110) + 0xc) == param_2)) {
    *(unsigned int *)(param_1 + 0x110) = 0;
    *(unsigned char *)(param_1 + 0x130) = 0;
  }
  uVar1 = *(unsigned int *)(param_1 + 8);
  for (uVar2 = *(unsigned int *)(param_1 + 4); uVar2 < uVar1; uVar2 = uVar2 + 0x60) {
    if (*(int *)(*(int *)(uVar2 + 0x40) + 0xc) == param_2) {
      fn_8251E5A0(param_1 + 4,uVar2);
      uVar2 = uVar2 - 0x60;
      uVar1 = uVar1 - 0x60;
    }
  }
  uVar1 = *(unsigned int *)(param_1 + 0x1c);
  for (uVar2 = *(unsigned int *)(param_1 + 0x18); uVar2 < uVar1; uVar2 = uVar2 + 0x60) {
    if (*(int *)(*(int *)(uVar2 + 0x40) + 0xc) == param_2) {
      fn_8251E5A0(param_1 + 0x18,uVar2);
      uVar2 = uVar2 - 0x60;
      uVar1 = uVar1 - 0x60;
    }
  }
  uVar1 = *(unsigned int *)(param_1 + 0x30);
  for (uVar2 = *(unsigned int *)(param_1 + 0x2c); uVar2 < uVar1; uVar2 = uVar2 + 0x50) {
    if (*(int *)(*(int *)(uVar2 + 0x40) + 0xc) == param_2) {
      fn_8251E5A0(param_1 + 0x2c,uVar2);
      uVar2 = uVar2 - 0x50;
      uVar1 = uVar1 - 0x50;
    }
  }
  uVar1 = *(unsigned int *)(param_1 + 0x44);
  for (uVar2 = *(unsigned int *)(param_1 + 0x40); uVar2 < uVar1; uVar2 = uVar2 + 0x50) {
    if (*(int *)(*(int *)(uVar2 + 0x40) + 0xc) == param_2) {
      fn_8251E5A0((unsigned int *)(param_1 + 0x40),uVar2);
      uVar2 = uVar2 - 0x50;
      uVar1 = uVar1 - 0x50;
    }
  }
  return;
}

