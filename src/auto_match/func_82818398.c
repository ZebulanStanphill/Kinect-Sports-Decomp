extern unsigned int lbl_82002C5C;
extern unsigned int uStack_a;


unsigned short fn_82818398(double param_1)

{
  double dVar1;
  unsigned short uStack_a;
  
  dVar1 = param_1 + (double)lbl_82002C5C;
  if (param_1 < 0.0) {
    dVar1 = param_1 - (double)lbl_82002C5C;
  }
  uStack_a = (unsigned short)(int)dVar1;
  return uStack_a;
}

