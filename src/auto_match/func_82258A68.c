extern void fn_82232D38(void *p);
extern void fn_822332E8(void *p);
extern void fn_82897D88(void *p);
extern char lbl_82198278[];
extern char lbl_821983D0[];
extern char lbl_821983E0[];

static void sub_dtor(void **p, void *vt)
{
  *p = vt;
  fn_82897D88(p);
}

void fn_82258A68(void **param_1)
{
  *param_1 = lbl_821983E0;
  sub_dtor(param_1 + 0x20b, lbl_82198278);
  sub_dtor(param_1 + 0x1f5, lbl_821983D0);
  fn_822332E8(param_1 + 0x1ab);
  fn_822332E8(param_1 + 0x161);
  fn_822332E8(param_1 + 0x117);
  fn_822332E8(param_1 + 0xcd);
  fn_822332E8(param_1 + 0x83);
  fn_822332E8(param_1 + 0x39);
  fn_82232D38(param_1);
}
