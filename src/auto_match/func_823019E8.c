extern int fn_822C71C8();
extern int fn_82302AE0();
extern int fn_82302CE0();
extern unsigned int lbl_821AEDD8;


void fn_823019E8(unsigned int *param_1)
{
  int i;
  unsigned int *q;
  unsigned int *e;
  *param_1 = &lbl_821AEDD8;
  q = param_1 + 0x28;
  e = param_1 + 0x19;
  for (i = 4; i != 0; i--) {
    fn_82302CE0(e);
    q += 0x11;
    *q = 0;
    e += 4;
  }
  q = param_1 + 0x29;
  i = 3;
  do { q -= 4; fn_82302AE0(q); } while (--i >= 0);
  fn_822C71C8(param_1);
}
