extern unsigned int lbl_8200133C;
extern unsigned int lbl_82005718;
extern unsigned int lbl_8207F51C;
extern unsigned int lbl_8208DD8C;
extern unsigned int lbl_8208DD94;
extern unsigned int lbl_8208DD98;
extern unsigned int lbl_8208DD9C;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_82E34C68(unsigned int param_1,short param_2)

{
  if (param_1 < 0xb) {
    return (double)lbl_8208DD9C;
  }
  if (param_1 < 0x1a) {
    return (double)lbl_8208DD98;
  }
  if (param_1 < 0x33) {
    return (double)lbl_8208DD8C;
  }
  if (param_1 < 0x4c) {
    return (double)lbl_82005718;
  }
  if (param_1 < 0x5b) {
    return (double)lbl_8207F51C;
  }
  if (param_1 < 100) {
    return (double)lbl_8208DD94;
  }
  if ((param_1 == 100) && ((param_2 == 0x163 || (param_2 == 0x167)))) {
    return (double)lbl_821AAD20;
  }
  return (double)lbl_8200133C;
}

