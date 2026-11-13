extern int fn_8265C990();
extern int fn_82A1C0F0();
extern unsigned int lbl_820D1738;
extern unsigned int lbl_820D1758;
extern unsigned int lbl_821B9BC8;


void fn_82A8B728(unsigned int *param_1)

{
  *param_1 = &lbl_820D1758;
  param_1[2] = &lbl_820D1738;
  if (param_1[4] == 0x3e5) {
    fn_82A1C0F0(param_1 + 4);
  }
  if (param_1[0x166f] != 0) {
    fn_8265C990(param_1[0x166f],0x20980000);
    param_1[0x166f] = 0;
  }
  *param_1 = &lbl_821B9BC8;
  return;
}

