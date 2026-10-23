extern int fn_82722770();
extern int fn_827273D0();
extern void fn_82722748(void);

void fn_82729418(int param_1, int param_2)
{
  unsigned int uVar1;

  uVar1 = fn_82722770(param_1 + 0xc, 0, *(int *)(param_1 + 0x10), param_2, fn_82722748);
  fn_827273D0(param_1 + 0xc, uVar1, param_2);
}
