extern int fn_82A52118();
extern int fn_82BA02A8();
extern int fn_82C2B590();


void fn_82A52310(unsigned int param_1)

{
  if ((param_1 & 0xffffffff) != 0) {
    fn_82BA02A8(2,0,0);
    fn_82A52118(param_1);
    fn_82C2B590(param_1);
  }
  return;
}

