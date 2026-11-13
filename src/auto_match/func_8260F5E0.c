void fn_8260F5E0(int param_1,unsigned __int64 param_2,int param_3)

{
  if (*(int (***)())(param_1 + 0x100) == (int (**)())0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8260f5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(param_1 + 0x100))
            (param_1,*(unsigned int *)(param_1 + 0x104),*(unsigned int *)(param_3 + 0x10));
  return;
}

