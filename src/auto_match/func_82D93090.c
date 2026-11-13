extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82D93090(double param_1,int *param_2)

{
  double dVar1;
  
  dVar1 = (double)lbl_821AAD20;
  if (param_1 != dVar1) {
    dVar1 = (double)(float)((double)lbl_82002AE0 / param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x82d930c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*param_2 + 0x10))(dVar1);
  return;
}

