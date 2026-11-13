extern int fn_82F6DF48();
extern int fn_82F6DF80();
extern int fn_82F6E018();
extern unsigned int lbl_82005710;


double fn_82B810A8(double param_1,double param_2)

{
  int iVar1;
  double dVar2;
  
  if (param_1 == -0.0) {
    param_1 = lbl_82005710;
  }
  if (param_2 == -0.0) {
    param_2 = lbl_82005710;
  }
  iVar1 = fn_82F6E018(param_1);
  if (iVar1 == 4) {
    param_2 = (double)fn_82F6DF80(param_2);
  }
  else if (iVar1 != 0x200) {
    dVar2 = param_2;
    iVar1 = fn_82F6E018(param_2);
    param_2 = param_1;
    param_1 = dVar2;
    if (iVar1 == 4) {
      param_2 = (double)fn_82F6DF80(param_2);
    }
    else if (iVar1 != 0x200) {
      return param_2 * param_1;
    }
  }
  dVar2 = (double)fn_82F6DF48(param_1,param_2);
  return dVar2;
}

