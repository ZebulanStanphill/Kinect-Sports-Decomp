extern int fn_82817C98();
extern int fn_82818308();

int fn_82851DE8(int param_1, int param_2, int param_3)
{
  int r;
  int a;
  int b;

  a = 0;
  r = fn_82818308(*(int *)(param_2 + 0x140), param_3, 0, &b);
  if (r == 0) {
    *(int *)(param_1 + 0xfc) = 0;
  } else {
    fn_82817C98(b, &a);
    r = 1;
    *(int *)(param_1 + 0xfc) = a;
  }
  return r;
}
