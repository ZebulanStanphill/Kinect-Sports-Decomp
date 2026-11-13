extern int fn_82637550();
extern int fn_82645110();


void fn_82637398(unsigned __int64 *param_1,int param_2)

{
  unsigned int uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(unsigned int *)(param_1 + 6);
    if (*(unsigned int *)(param_1 + 7) < uVar1) {
      uVar1 = fn_82645110(param_1);
    }
    *(unsigned int *)(uVar1 + 4) = 0xc0006000;
    *(unsigned int *)(uVar1 + 8) = *(unsigned int *)((int)param_1 + 0x3254);
    *(unsigned int *)(uVar1 + 0xc) = 0xc0006200;
    *(unsigned int *)(uVar1 + 0x10) = 0xffffffff;
    *(unsigned int *)(uVar1 + 0x14) = 0xc0006100;
    *(unsigned int *)(uVar1 + 0x18) = *(unsigned int *)(param_1 + 0x64b);
    *(unsigned int *)(uVar1 + 0x1c) = 0xc0006300;
    *(unsigned int *)(uVar1 + 0x20) = 0;
    *(unsigned int **)(param_1 + 6) = (unsigned int *)(uVar1 + 0x20);
  }
  uVar1 = *(unsigned int *)(param_1 + 0x519);
  fn_82637550(param_1,(*(int *)((int)param_1 + 0x28c4) << 0x11) >> 0x11,
                    (*(int *)((int)param_1 + 0x28c4) << 1) >> 0x11,
                    (int)(uVar1 << 0x11 | uVar1 >> 0xf) >> 0x11,(int)(uVar1 << 1) >> 0x11);
  uVar1 = *(unsigned int *)(param_1 + 6);
  *(unsigned int *)((int)param_1 + 0x2aa4) = *(unsigned int *)((int)param_1 + 0x2aa4);
  if (*(unsigned int *)(param_1 + 7) < uVar1) {
    uVar1 = fn_82645110(param_1);
  }
  *(unsigned int *)(uVar1 + 4) = 0x5c8;
  *(unsigned int *)(uVar1 + 8) = 0x20000;
  *(unsigned int *)(uVar1 + 0xc) = 0xf01;
  *(unsigned int *)(uVar1 + 0x10) = *(unsigned int *)((int)param_1 + 0x2aa4);
  *(unsigned int **)(param_1 + 6) = (unsigned int *)(uVar1 + 0x10);
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  param_1[4] = 0xffffffffffffffff;
  return;
}

