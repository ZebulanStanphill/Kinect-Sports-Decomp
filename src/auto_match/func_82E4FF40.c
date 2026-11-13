extern unsigned int lbl_82153CC0;


char fn_82E4FF40(unsigned __int64 param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 0x20)) {
    return (&lbl_82153CC0)[param_2];
  }
  if ((0x3f < param_2) && (param_2 < 0x4a)) {
    return "Force Encoding Height"[param_2 + 0x10];
  }
  if (param_2 == 0xfff) {
    return '\b';
  }
  return ' ';
}

