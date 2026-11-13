extern int fn_82F655D8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_820155C8;
extern unsigned int lbl_820E86E0;
extern float lbl_8217E688;


double fn_8305BE90(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = (double)fn_82F655D8(param_2,lbl_820E86E0);
  dVar1 = -((lbl_82005758 - dVar1) * lbl_8217E688 - param_2);
  if (param_1 < lbl_82005710) {
    dVar1 = -(-(param_2 * param_2 - lbl_82005758) * param_1 * lbl_820155C8 - lbl_82005758) * dVar1;
  }
  return dVar1;
}

