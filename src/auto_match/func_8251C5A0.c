void fn_8251C5A0(unsigned int *param_1)

{
  if (param_1 == (unsigned int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8251c5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())*param_1)(param_1,1);
  return;
}

