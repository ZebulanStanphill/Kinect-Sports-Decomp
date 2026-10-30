extern int fn_82E93A08();

void fn_82E946D8(int param_1)
{
  int iVar1;
  int arg = *(int *)(param_1 + 0x1f44);

  if (*(int *)(param_1 + 0x7798) != 0) {
    if (*(int *)(param_1 + 0x2a0) <= 0x14 &&
        (*(int *)(param_1 + 0x2a0) >= 0x12 ||
         *(int *)(param_1 + 0x77d8) >= *(int *)(param_1 + 0x77c0))) {
      iVar1 = *(int *)(param_1 + 0x77ac);
    }
    else {
      iVar1 = (int)(((*(float *)(param_1 + 0x786c) * 0.05f + *(float *)(param_1 + 0x7868)) * 0.05f) * (float)*(int *)(param_1 + 0x560));
    }
    if (0 < iVar1) {
      fn_82E93A08(param_1,iVar1,arg);
    }
  }
}
