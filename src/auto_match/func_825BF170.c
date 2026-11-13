void fn_825BF170(int param_1,unsigned int *param_2)

{
  if (param_2 == *(unsigned int **)(param_1 + 0x54)) {
    return;
  }
  if (param_2 == (unsigned int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x825bf19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())*param_2)(param_2,1);
  return;
}

