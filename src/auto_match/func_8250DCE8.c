extern int fn_8250E0B0();
extern int fn_8250E180();
extern int fn_827F5250();


void fn_8250DCE8(int param_1)

{
  fn_827F5250();
  if (*(int *)(param_1 + 0x110) != 0) {
    fn_8250E0B0(param_1);
    *(unsigned int *)(param_1 + 0x110) = 0;
  }
  if (*(int *)(param_1 + 0x114) != 0) {
    fn_8250E180(param_1);
    *(unsigned int *)(param_1 + 0x114) = 0;
  }
  return;
}

