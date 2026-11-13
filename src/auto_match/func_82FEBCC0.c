void fn_82FEBCC0(int param_1)

{
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82febcdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(**(int **)(param_1 + 4) + 0x10))(*(int **)(param_1 + 4));
  return;
}

