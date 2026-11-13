extern int fn_82F65FB0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005728;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_8216CBF0;
extern unsigned int lbl_8217C790;
extern float lbl_8217C798;
extern unsigned int lbl_8217C7A0;
extern unsigned int lbl_8217C7A8;
extern unsigned int lbl_821AAD20;


double fn_8302A7C8(double param_1)

{
  double dVar1;
  
  if (param_1 == lbl_82005710) {
    return (double)lbl_821AAD20;
  }
  if (lbl_8217C7A8 <= param_1) {
    return (double)lbl_8216CBF0;
  }
  if (param_1 <= lbl_8217C7A0) {
    return (double)lbl_8216C698;
  }
  if (param_1 < lbl_82005710) {
    dVar1 = (double)fn_82F65FB0((param_1 + lbl_8217C790) * lbl_8217C798);
    return (double)(float)(dVar1 * lbl_82005728);
  }
  dVar1 = (double)fn_82F65FB0((lbl_8217C790 - param_1) * lbl_8217C798);
  return -(double)(float)(dVar1 * lbl_82005728);
}

