extern unsigned int lbl_821AAD20;


void fn_82DF3E40(double param_1,int *param_2)

{
  if ((double)lbl_821AAD20 < (double)(float)param_2[10]) {
    param_2[10] = (int)(float)((double)(float)param_2[10] - param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x82df3e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*param_2 + 0x28))();
  return;
}

