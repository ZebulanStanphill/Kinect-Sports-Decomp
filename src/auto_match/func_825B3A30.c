void fn_825B3A30(int param_1,unsigned __int64 param_2)

{
  if (*(int (***)())(param_1 + 0x10) == (int (**)())0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x825b3a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(param_1 + 0x10))(param_2);
  return;
}

