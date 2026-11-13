extern int fn_82A1E650();
extern int fn_82A1E658();
extern int fn_82A1E810();
extern unsigned int lbl_832645A0;


void fn_82FF9208(int param_1)

{
  *(unsigned char *)(param_1 + 0x30) = 1;
  if (lbl_832645A0 != 0) {
    fn_82A1E810(*(unsigned int *)(param_1 + 0x2c));
    fn_82A1E650(lbl_832645A0,0xffffffffffffffff);
    fn_82A1E658(lbl_832645A0);
    lbl_832645A0 = 0;
  }
  if (*(unsigned int *)(param_1 + 0x2c) != 0) {
    fn_82A1E658(*(unsigned int *)(param_1 + 0x2c));
  }
  *(unsigned int *)(param_1 + 0x2c) = 0;
  return;
}

