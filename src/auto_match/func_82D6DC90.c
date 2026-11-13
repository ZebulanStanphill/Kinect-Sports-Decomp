void fn_82D6DC90(int param_1)

{
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82d6dcac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(**(int **)(param_1 + 0x10) + 0x2c))(*(int **)(param_1 + 0x10));
  return;
}

