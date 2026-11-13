extern unsigned int lbl_821AAD20;


void fn_82DF3E10(int *param_1)

{
  if (lbl_821AAD20 < (float)param_1[10]) {
    return;
  }
  param_1[10] = param_1[9];
                    /* WARNING: Could not recover jumptable at 0x82df3e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*param_1 + 0x24))();
  return;
}

