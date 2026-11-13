extern int fn_8279A940();
extern int fn_8279FB38();


void fn_8279A9F8(int param_1)

{
  if ((*(unsigned char *)(param_1 + 0x13f) & 3) != 0) {
    fn_8279FB38();
    *(unsigned char *)(param_1 + 0x13f) = *(unsigned char *)(param_1 + 0x13f) & 0xfc;
  }
  fn_8279A940(param_1);
  return;
}

