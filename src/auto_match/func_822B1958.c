extern int fn_8255B620();
extern int fn_8255B740();


void fn_822B1958(int param_1)

{
  int uVar1;
  
  uVar1 = 5;
  do {
    if (((unsigned int)*(unsigned char *)((int)((uVar1 & 0xffffffff) >> 3) + *(int *)(*(int *)(param_1 + 0xf4) + 8))
        & 1 << (uVar1 & 7)) != 0) {
      fn_8255B620(param_1,uVar1 - 4);
    }
    uVar1 = uVar1 + 1;
  } while ((uVar1 & 0xffffffff) <= 0x36);
  uVar1 = 0x37;
  do {
    if (((unsigned int)*(unsigned char *)((int)((uVar1 & 0xffffffff) >> 3) + *(int *)(*(int *)(param_1 + 0xf4) + 8))
        & 1 << (uVar1 & 7)) != 0) {
      fn_8255B740(param_1,uVar1 - 0x36);
    }
    uVar1 = uVar1 + 1;
  } while ((uVar1 & 0xffffffff) <= 0x3b);
  return;
}

