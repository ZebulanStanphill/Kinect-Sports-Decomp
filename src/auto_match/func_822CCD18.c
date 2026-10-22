typedef struct { unsigned int w[7]; } Obj28;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C1730();

void fn_822CCD18(int param_1, int param_2, int param_3)
{
  Obj28 s[2];

  fn_82230110(&s[0]);
  fn_82230110(&s[1], param_3);
  fn_822C1730(param_1 + 0x20, &s[0]);
  fn_82230300(&s[1], 1, 0);
  fn_82230300(&s[0], 1, 0);
}
