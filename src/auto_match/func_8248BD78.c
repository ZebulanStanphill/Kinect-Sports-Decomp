void fn_8248BD78(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  if (*(int *)(param_1 + 8) != 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x20) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8248bdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  {
    int *p = *(int **)(param_1 + 0xc);
    (*(int (**)())(*p + 0xc))(p);
  }
  return;
}

