extern int fn_82C2B590();
extern int fn_82E323D0();


void fn_82E33098(unsigned int param_1)

{
  if ((param_1 & 0xffffffff) != 0) {
    fn_82E323D0();
    fn_82C2B590(param_1);
  }
  return;
}

