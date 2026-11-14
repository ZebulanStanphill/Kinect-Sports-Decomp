extern int sin();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_821AAD20;


double fn_829E9C08(double param_1,unsigned __int64 param_2,int param_3)

{
  double dVar1;
  
  dVar1 = (double)lbl_821AAD20;
  if (param_1 == dVar1) {
    dVar1 = (double)lbl_82002AE0;
  }
  else if (((int)ABS(param_1) < 6) && ((double)*(float *)((int)ABS(param_1) * 4 + param_3) != dVar1)
          ) {
                    /* WARNING: Subroutine does not return */
    sin((double)(float)(param_1 * (double)lbl_8201DD74));
  }
  return dVar1;
}

