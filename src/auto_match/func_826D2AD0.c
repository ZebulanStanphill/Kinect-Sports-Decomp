typedef int (*code)();
extern int fn_826A1798();
extern int fn_826BD928();
extern unsigned char fn_826C98F8();
extern char *fn_826D2290();

void fn_826D2AD0(int param_1, int param_2)
{
  int *p;
  char *q;

  fn_826A1798();
  p = (int *)(param_2 + 0x68);
  if ((*(code *)(*p + 8))(p) == 2) {
    fn_826BD928(p);
    if (fn_826C98F8() != 0 && (q = fn_826D2290(param_1)) != 0) {
      q[0x35] = 1;
    }
  }
  *(unsigned int *)(*(int *)(param_1 + 0xa0) + 0xb00) |= 0x400;
}
