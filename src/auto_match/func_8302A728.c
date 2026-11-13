extern int fn_82F65FB0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005728;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_820525A8;
extern unsigned int lbl_820525B0;
extern float lbl_8217C788;
extern unsigned int lbl_8217C790;
extern unsigned int lbl_821AAD20;


double fn_8302A728(double param_1)

{
  double dVar1;
  
  if (param_1 <= lbl_82005710) {
    return (double)lbl_821AAD20;
  }
  if (lbl_820525B0 <= param_1) {
    return (double)lbl_82005CCC;
  }
  dVar1 = (double)fn_82F65FB0(param_1 * lbl_820525A8);
  return (double)(float)((dVar1 * lbl_82005728 + lbl_8217C790) * lbl_8217C788);
}

