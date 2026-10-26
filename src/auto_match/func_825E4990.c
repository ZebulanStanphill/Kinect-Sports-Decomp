extern int fn_822315A0();
extern int fn_827D5070();
extern int fn_82837BA0();

void fn_825E4990(unsigned int *param_1)
{
  int iVar1;

  iVar1 = fn_827D5070(*param_1);
  fn_82837BA0(0, *(unsigned int *)(iVar1 + 0x30));
  if (param_1[1] != 0) {
    fn_822315A0(param_1[1]);
  }
}
