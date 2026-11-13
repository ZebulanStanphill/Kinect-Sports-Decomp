extern unsigned int lbl_8216A060;
extern unsigned int lbl_8216A068;


double fn_82F788F0(double param_1)

{
  if ((param_1 != lbl_8216A060) && (ABS(param_1) < lbl_8216A068)) {
    if (param_1 < lbl_8216A060) {
      param_1 = (param_1 - lbl_8216A068) + lbl_8216A068;
    }
    else {
      param_1 = (param_1 + lbl_8216A068) - lbl_8216A068;
    }
  }
  return param_1;
}

