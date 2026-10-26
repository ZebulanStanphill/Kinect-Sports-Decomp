extern int fn_822315A0();
extern int fn_82672660();
extern char lbl_821ABBA4[];

void fn_822A05B0(void **param_1)
{
  *param_1 = lbl_821ABBA4;
  fn_82672660(param_1[1], param_1);
  if (param_1[2] != 0) {
    fn_822315A0(param_1[2]);
  }
}
