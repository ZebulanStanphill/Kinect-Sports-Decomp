void fn_8229E4B0(int param_1,unsigned int param_2)

{
  if (*(int *)(param_1 + 0x410) != 0) {
    return;
  }
  if (param_2 >= 1) {
    if (param_2 != 1) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x8229e4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(int (**)())(param_1 + 0x404))(1,*(unsigned int *)(param_1 + 0x408));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8229e4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(param_1 + 0x404))(0,*(unsigned int *)(param_1 + 0x408));
  return;
}

