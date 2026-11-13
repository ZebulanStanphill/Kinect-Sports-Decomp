void fn_82DF4070(double param_1,int *param_2)

{
  if ((*(unsigned char *)(param_2 + 3) & 1) != 0) {
    return;
  }
  param_2[5] = (int)(float)((double)(float)param_2[5] + param_1);
                    /* WARNING: Could not recover jumptable at 0x82df4098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*param_2 + 0x14))();
  return;
}

