extern void fn_828297A0(void);
extern void fn_828298A0();
extern void fn_82822510(int a, void (*f)(void), int b, unsigned int *c);

void fn_828299A8(int param_1, int param_2, unsigned int *param_3)
{
  fn_828298A0();
  if (*param_3 == 0) {
    fn_82822510(param_2 + 0x2fc, fn_828297A0, param_1, param_3);
  }
}
