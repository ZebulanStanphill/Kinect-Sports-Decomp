extern unsigned int lbl_82005710;
extern unsigned int lbl_821682A8;
extern unsigned int lbl_821682B8;
extern unsigned int lbl_821682C8;
extern unsigned int lbl_821682D8;
extern unsigned int lbl_821682E8;
extern unsigned int lbl_821682F8;
extern unsigned int lbl_82168300;
extern unsigned int lbl_82168308;
extern unsigned int lbl_82168310;
extern unsigned int lbl_82168318;
extern unsigned int lbl_831BB4D0;
extern unsigned int lbl_831BB4D8;
extern unsigned int lbl_831BB920;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double tan(double param_1)

{
  double dVar1;
  double dVar2;
  
  if (param_1 == lbl_82005710) {
    return param_1;
  }
  dVar1 = (double)(__int64)(param_1 * lbl_821682A8);
  dVar2 = -(lbl_831BB4D8 * dVar1 - -(lbl_831BB4D0 * dVar1 - param_1));
  dVar1 = dVar2 * dVar2;
  dVar2 = ((-(dVar1 * lbl_82168318 - lbl_821682C8) * dVar1 - lbl_82168308) * dVar1 + lbl_821682D8)
          * dVar2;
  dVar1 = (((dVar1 * lbl_821682F8 - lbl_82168310) * dVar1 + lbl_821682E8) * dVar1 - lbl_82168300) *
          dVar1 + lbl_821682D8;
  if (((__int64)(param_1 * lbl_821682A8) & 1U) == 0) {
    dVar1 = dVar2 / dVar1;
  }
  else {
    dVar1 = dVar1 / -dVar2;
  }
  dVar2 = lbl_831BB920;
  if (ABS(param_1) - lbl_821682B8 < 0.0) {
    dVar2 = dVar1;
  }
  return dVar2;
}

