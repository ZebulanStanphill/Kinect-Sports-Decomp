extern int fn_822C71C8();
extern int fn_822D9678();
extern int fn_822DB7F0();
extern int fn_8251FA58();
extern unsigned int lbl_821AEE3C;


void fn_823031B8(unsigned int *param_1)

{
  *param_1 = &lbl_821AEE3C;
  if (param_1[0x2a] != 0) {
    fn_822DB7F0(param_1[0x2a],1);
  }
  if (param_1[0x2b] != 0) {
    fn_822DB7F0(param_1[0x2b],1);
  }
  fn_8251FA58(param_1[0x17]);
  fn_822D9678(param_1 + 0x1b);
  fn_822C71C8(param_1);
  return;
}

