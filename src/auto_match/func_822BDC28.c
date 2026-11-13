extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_822B4EB0();
extern int fn_822B5CE8();
extern int fn_822C16B8();
extern int fn_82320F50();
extern int fn_82359C18();
extern int fn_82536008();
extern int fn_82536288();
extern int fn_8265CA20();
extern unsigned int lbl_821ACD38;
extern unsigned int lbl_821CB794;


void fn_822BDC28(unsigned int *param_1)

{
  unsigned char auStack_30 [16];
  
  *param_1 = &lbl_821ACD38;
  if (param_1[0x1fa] != 0) {
    fn_822315A0();
  }
  if (param_1[0x1f8] != 0) {
    fn_822315A0();
  }
  if (param_1[0x1f6] != 0) {
    fn_822315A0();
  }
  if (param_1[0x1e1] != 0) {
    fn_822315A0();
  }
  if (param_1[0x1df] != 0) {
    fn_822315A0();
  }
  if (param_1[0x1dd] != 0) {
    fn_822315A0();
  }
  fn_822C16B8(param_1 + 0x1d2);
  if (param_1[0x1b8] != 0) {
    fn_82536008();
    fn_82536288(param_1 + 0x1b8);
    param_1[0x1b8] = 0;
  }
  fn_82359C18(param_1 + 0x1c2);
  if (param_1[0x1b7] != 0) {
    fn_822315A0();
  }
  if (param_1[0x1b5] != 0) {
    fn_822315A0();
  }
  if (param_1[0x16d] != 0) {
    fn_822315A0();
  }
  if (param_1[0x16b] != 0) {
    fn_822315A0();
  }
  fn_82320F50(param_1 + 0x142);
  fn_822B4EB0(auStack_30,param_1 + 0xa8,*(unsigned int *)param_1[0xa9]);
  fn_8265CA20(param_1[0xa9]);
  if (param_1[0xa5] != 0) {
    fn_822315A0();
  }
  if (param_1[0xa3] != 0) {
    fn_822315A0();
  }
  if (param_1[0xa1] != 0) {
    fn_822315A0();
  }
  param_1[0x9d] = &lbl_821CB794;
  fn_822B5CE8(param_1);
  return;
}

