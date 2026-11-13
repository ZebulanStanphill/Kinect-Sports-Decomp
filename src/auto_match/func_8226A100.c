void fn_8226A100(int param_1)

{
  if (*(int (***)())(param_1 + 0x10) == (int (**)())0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8226a114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(param_1 + 0x10))(*(unsigned int *)(param_1 + 4));
  return;
}

