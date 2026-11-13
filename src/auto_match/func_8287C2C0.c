extern unsigned int lbl_82002C5C;


int fn_8287C2C0(double param_1)

{
  double dVar1;
  
  dVar1 = param_1 + (double)lbl_82002C5C;
  if (param_1 < 0.0) {
    dVar1 = param_1 - (double)lbl_82002C5C;
  }
  return (int)dVar1;
}

