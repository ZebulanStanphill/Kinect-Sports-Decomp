void fn_8226A0C0(int param_1)

{
  if (*(int (***)())(param_1 + 8) == (int (**)())0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8226a0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(param_1 + 8))(*(unsigned int *)(param_1 + 4));
  return;
}

