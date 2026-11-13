extern int fn_825604A0();
extern unsigned int lbl_821B2D1C;


void fn_82366A98(int *param_1)

{
  *param_1 = &lbl_821B2D1C;
  if (param_1[0x8b] != 0) {
    fn_825604A0(param_1 + 8);
    param_1[0x8b] = 0;
  }
  return;
}

