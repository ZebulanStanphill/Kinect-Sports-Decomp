void fn_8267D608(int *param_1,int *param_2)

{
  sync(1);
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  sync(1);
  param_1[7] = 0;
  param_1[8] = param_2[2];
  param_1[9] = param_2[3];
  param_1[10] = param_2[5];
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  if (param_2[4] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x8267d664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*param_1 + 0x14))();
  return;
}

