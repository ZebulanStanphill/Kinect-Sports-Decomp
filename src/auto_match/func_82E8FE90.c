extern int fn_82E8EF60();
extern double lbl_82015408;
extern double lbl_8215F710;


void fn_82E8FE90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1d94);
  if (iVar1 < 2) {
    iVar1 = 2;
  }
  *(int *)(param_1 + 0x1d94) = iVar1;
  iVar1 = *(int *)(param_1 + 0x1efc);
  if (iVar1 < 2) {
    iVar1 = 2;
  }
  *(int *)(param_1 + 0x1efc) = iVar1;
  iVar1 = *(int *)(param_1 + 0x78cc);
  if (iVar1 < 2) {
    iVar1 = 2;
  }
  *(int *)(param_1 + 0x78cc) = iVar1;
  iVar1 = *(int *)(param_1 + 0x78d0);
  if (iVar1 < 2) {
    iVar1 = 2;
  }
  *(int *)(param_1 + 0x78d0) = iVar1;
  fn_82E8EF60(param_1,1);
  *(int *)(param_1 + 0x1fec) = 1;
  if (*(int *)(param_1 + 0x1a6c) != 0) {
    *(int *)(param_1 + 0x1a6c) = 0;
    if (*(int *)(param_1 + 4) == 8 && *(int *)(param_1 + 0xaf0) == 0 && *(int *)(param_1 + 0x1a58) < (int)(*(unsigned int *)(param_1 + 0x2d4) >> 1)) {
      *(int *)(param_1 + 0x1a54) = 1;
    } else {
      *(int *)(param_1 + 0x1a54) = 0;
    }
  } else {
    *(int *)(param_1 + 0x1a54) = 0;
  }
  if (*(int *)(param_1 + 0x1a54) == 0) {
    int cur;
    int n = *(int *)(param_1 + 0x1a4c);
    cur = *(int *)(param_1 + 0x1a60);
    if (cur < (int)((double)(float)n * lbl_8215F710)) iVar1 = 1;
    else iVar1 = (cur < (int)((double)(float)n * lbl_82015408)) ? 2 : 3;
    if (*(int *)(param_1 + 0x1fa8) <= 1) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = *(int *)(param_1 + 0x2a4) + iVar1;
    if (0x1e < iVar1) {
      iVar1 = 0x1e;
    }
    *(int *)(param_1 + 0x2a4) = iVar1;
    *(int *)(param_1 + 0x2a0) = iVar1;
    *(unsigned int *)(param_1 + 0x1a64) = 1;
  }
  *(unsigned int *)(param_1 + 0x1a58) = 0;
  *(unsigned int *)(param_1 + 0x1a60) = 0;
  *(unsigned int *)(param_1 + 0x1a68) = 1;
  return;
}

