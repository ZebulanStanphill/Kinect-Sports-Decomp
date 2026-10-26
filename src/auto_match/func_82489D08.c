extern void fn_822315A0(void *);
extern int fn_827D50B8(int);
extern void fn_82A1E810(int);
void fn_82489D08(int *param_1, int param_2)
{
  *(int *)(param_2 + 0x28) = fn_827D50B8(*param_1);
  fn_82A1E810(*(int *)(param_2 + 0x18));
  if ((void *)param_1[1] != 0) {
    fn_822315A0((void *)param_1[1]);
  }
}
