void fn_8259B508(unsigned __int64 param_1,unsigned int *param_2)

{
  if (param_2 == (unsigned int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8259b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())*param_2)(param_2,1);
  return;
}

