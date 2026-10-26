extern void fn_82FEC850(unsigned int a, void *b);
extern void fn_8304DF08(void *p);
extern unsigned int lbl_8217DB48;

void fn_8304C528(void **param_1)
{
  *param_1 = &lbl_8217DB48;
  if (param_1[0x18] != 0) {
    fn_82FEC850((*(unsigned int *)(*(int *)((int)param_1[2] + 0x6c) + 0x24) & 0xf8) << 7, param_1[0x18]);
    param_1[0x18] = 0;
  }
  fn_8304DF08(param_1);
}
