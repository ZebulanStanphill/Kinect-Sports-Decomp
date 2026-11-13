extern int fn_829F5D58();
extern unsigned int lbl_83215000;
extern unsigned int lbl_83215A40;
extern unsigned int lbl_832177AC;
extern unsigned int lbl_832177B0;
extern unsigned int lbl_83218C30;


unsigned __int64 fn_829CB870(unsigned __int64 param_1)

{
  if ((lbl_83215A40 == 0) && ((lbl_83215000 & 0x80000000) != 0)) {
    return param_1;
  }
  if ((lbl_832177B0 & 0x80000000) == 0) {
    lbl_832177AC = lbl_832177AC + lbl_832177B0;
    if ((lbl_832177AC & 0x80000000) != 0) {
      lbl_832177AC = 0;
    }
  }
  else {
    lbl_832177AC = 0;
  }
  lbl_832177B0 = 0;
  if (lbl_83218C30 == 0) {
    return 0x57;
  }
  fn_829F5D58();
  return 0;
}

