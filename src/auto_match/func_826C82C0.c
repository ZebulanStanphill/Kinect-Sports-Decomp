typedef unsigned int undefined4;

extern int fn_82698D20(int p);
extern int fn_8269A1F0(int a, int b);
extern unsigned int fn_826C59F8(void);

void fn_826C82C0(int param_1)
{
  unsigned int obj;
  int n;

  obj = fn_826C59F8();
  if (obj != 0) {
    n = fn_82698D20(obj + 0xa8) - 0x3fff;
    if (n < 0) {
      n = 0;
    }
    fn_8269A1F0(*(int *)(param_1 + 4), n);
  }
}
