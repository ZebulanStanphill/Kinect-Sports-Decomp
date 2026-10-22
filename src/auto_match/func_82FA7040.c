typedef int (*code)();
extern int fn_82FA8CB0(int *p, int a, int b);
extern int *lbl_83264234;

int fn_82FA7040(int param_1, unsigned int param_2, unsigned int param_3, int param_4, int param_5)
{
  int *p;
  int result;

  result = 1;
  for (p = lbl_83264234; p != 0; p = (int *)p[0xf]) {
    if (((unsigned int)(*(code *)(*p + 0x20))(p) == param_2) &&
        (param_3 == 0 || *(unsigned int *)(p[0xe] + 0x28) == param_3) &&
        fn_82FA8CB0(p, param_4, param_5) != 1) {
      result = 2;
    }
  }
  return result;
}
