typedef unsigned int undefined4;

extern void *fn_8265C9E0(unsigned int size);
extern int fn_822651E0(void *mem, int a, int b, int c, int d, int e);
extern void fn_822676A0(int self, int obj, int a);

void fn_82267628(int param_1, int param_2)
{
  void *mem;
  int obj;

  mem = fn_8265C9E0(0x640);
  if (mem != 0) {
    obj = fn_822651E0(mem, param_2, *(int *)(param_1 + 0x6c), param_1 + 0x70,
                      *(int *)(param_1 + 0x68), *(int *)(param_1 + 0x74));
  }
  else {
    obj = 0;
  }
  fn_822676A0(param_1, obj, param_2);
}
