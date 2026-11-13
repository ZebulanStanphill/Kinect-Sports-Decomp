extern unsigned int lbl_82002AE0;


void fn_82D9B4B8(double param_1,int *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x82d9b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*param_2 + 0x10))((double)(float)((double)lbl_82002AE0 / param_1));
  return;
}

