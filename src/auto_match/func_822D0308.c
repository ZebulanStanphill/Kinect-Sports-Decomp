void fn_822D0308(int *param_1)

{
  param_1[8] = 1;
                    /* WARNING: Could not recover jumptable at 0x822d031c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())(*param_1 + 0x20))();
  return;
}

