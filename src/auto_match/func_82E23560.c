void fn_82E23560(unsigned int *param_1)

{
  if ((int (*)())param_1[4] == (int (*)())0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82e2357c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ((int (*)())param_1[4])(*param_1,param_1[1],param_1);
  return;
}

