extern int fn_82630E38();
extern int fn_82645110();


void fn_82631C78(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  if ((param_3 == 0) && (param_4 == 0)) {
    param_3 = 0x40;
    param_4 = 0x40;
  }
  if ((param_2 & 1) == 0) {
    uVar2 = (param_3 & 0x7f) << 0xc |
            (param_4 & 0x7f) << 4 | *(unsigned int *)(param_1 + 0x2aa8) & 0xfff8080f;
  }
  else {
    uVar2 = 0;
  }
  *(unsigned int *)(param_1 + 0x2aa8) = uVar2;
  uVar2 = *(unsigned int *)(param_1 + 0x325c);
  uVar1 = *(unsigned int *)(param_1 + 0x30);
  if (*(unsigned int *)(param_1 + 0x38) < uVar1) {
    uVar1 = fn_82645110(param_1);
  }
  uVar2 = uVar2 & param_2 | 0xc0013f00;
  *(unsigned int *)(uVar1 + 4) = uVar2;
  *(unsigned int *)(uVar1 + 8) = *(unsigned int *)(param_1 + 14000);
  *(unsigned int *)(uVar1 + 0xc) = *(unsigned int *)(param_1 + 0x36ac) & 0xffffff;
  *(unsigned int *)(uVar1 + 0x10) = uVar2;
  *(unsigned int *)(uVar1 + 0x14) = *(unsigned int *)((param_3 + 0x6d7) * 8 + param_1);
  *(unsigned int *)(uVar1 + 0x18) = *(unsigned int *)(param_3 * 8 + param_1 + 0x36b4) & 0xffffff;
  *(unsigned int *)(uVar1 + 0x1c) = uVar2;
  *(unsigned int *)(uVar1 + 0x20) = *(unsigned int *)(param_1 + 0x3ab8);
  *(unsigned int *)(uVar1 + 0x24) = *(unsigned int *)(param_1 + 0x3ab4) & 0xffffff;
  *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar1 + 0x24);
  fn_82630E38(param_1);
  return;
}

