void fn_822B0280(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x822b0298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*param_1 + 8))(param_1,1);
  return;
}

