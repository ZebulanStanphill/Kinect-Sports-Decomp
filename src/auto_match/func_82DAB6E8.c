void fn_82DAB6E8(unsigned int *param_1)

{
  if (param_1 == (unsigned int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82dab700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())*param_1)(param_1,1);
  return;
}

