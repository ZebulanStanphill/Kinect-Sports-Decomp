extern void fn_8267BE38(unsigned int *p);
extern void fn_826C1AD8(int obj);

void fn_82714420(int param_1)
{
  unsigned int *p;

  p = *(unsigned int **)(param_1 + 0x30);
  if (p != 0) {
    if (--*p == 0) {
      fn_8267BE38(p);
    }
  }
  fn_826C1AD8(param_1);
}
