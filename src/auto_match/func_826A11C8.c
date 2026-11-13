void fn_826A11C8(int param_1)

{
  if (*(int (***)())(param_1 + 0x94) == (int (**)())0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x826a11dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(param_1 + 0x94))(*(unsigned int *)(param_1 + 0x98));
  return;
}

