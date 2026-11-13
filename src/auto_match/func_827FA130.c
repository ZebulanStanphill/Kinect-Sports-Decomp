extern int fn_82809CB0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_827FA130(double param_1,int *param_2)

{
  double dVar1;
  
  dVar1 = (double)lbl_821AAD20;
  if (param_1 != dVar1) {
    param_2[0x2b] = (int)((float)((double)lbl_82002AE0 / param_1) * *(float *)(*param_2 + 0x1c));
    if (dVar1 <= (double)(float)param_2[0x2c]) {
      dVar1 = (double)fn_82809CB0();
      param_2[0x2c] = (int)(float)dVar1;
    }
    else {
      dVar1 = (double)fn_82809CB0();
      param_2[0x2c] = (int)(float)-dVar1;
    }
  }
  return;
}

