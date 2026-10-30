extern int fn_8267B7A8();
extern int fn_8267B7E0();
extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_82685AC0();
extern int fn_826EA050();
extern unsigned int lbl_82005B28;
extern unsigned int lbl_82005B44;

void fn_82685E08(unsigned int *param_1)
{
  unsigned int n;
  unsigned int next;

  *param_1 = (unsigned int)&lbl_82005B44;
  fn_8267B7E0(param_1[2],0);
  fn_8267B7A8(param_1[2],0);
  fn_82685AC0(param_1);
  fn_826EA050(param_1 + 0x17);
  for (n = param_1[0x10]; n != 0; n = next) {
    next = *(unsigned int *)(n + 0x13d8);
    fn_8267BE38(n);
  }
  for (n = param_1[7]; n != 0; n = next) {
    next = *(unsigned int *)(n + 0xbe8);
    fn_8267BE38(n);
  }
  param_1[4] = (unsigned int)&lbl_82005B28;
  fn_8267C488(param_1);
}
