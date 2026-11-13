extern int fn_825269D0();
extern unsigned int lbl_8326C2AC[];
extern unsigned int lbl_83282244;

void fn_82593F40(unsigned int param_1)
{
  if (param_1 != lbl_8326C2AC[0]) {
    if (lbl_8326C2AC[0] == 2) {
      lbl_8326C2AC[1] = 0;
      lbl_83282244 = lbl_83282244 & 0xfffffffb;
      fn_825269D0(0x34,0);
    }
    lbl_8326C2AC[0] = param_1;
    if (param_1 == 2) {
      lbl_8326C2AC[1] = 1;
      lbl_83282244 = lbl_83282244 | 4;
      fn_825269D0(0x33,0);
    }
  }
}
