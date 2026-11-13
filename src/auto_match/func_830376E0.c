extern int fn_82A1E650();
extern int fn_82A1E658();
extern int fn_82A1E810();
extern unsigned int lbl_83264EC8;


void fn_830376E0(int param_1)

{
  *(unsigned char *)(param_1 + 0x10) = 1;
  if (lbl_83264EC8 != 0) {
    fn_82A1E810(*(unsigned int *)(param_1 + 0xc));
    fn_82A1E650(lbl_83264EC8,0xffffffff);
    fn_82A1E658(lbl_83264EC8);
    lbl_83264EC8 = 0;
  }
  if (*(unsigned int *)(param_1 + 4) != 0) {
    fn_82A1E658(*(unsigned int *)(param_1 + 4));
  }
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  if (*(unsigned int *)(param_1 + 0xc) != 0) {
    fn_82A1E658(*(int *)(param_1 + 0xc));
  }
  *(unsigned int *)(param_1 + 0xc) = 0;
  return;
}

