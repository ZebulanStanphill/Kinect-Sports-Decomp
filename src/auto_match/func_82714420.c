typedef unsigned int uint;

extern void fn_8267BE38(uint *p);
extern void fn_826C1AD8(int obj);

void fn_82714420(int param_1)
{
  uint *p;

  p = *(uint **)(param_1 + 0x30);
  if (p != 0) {
    if (--*p == 0) {
      fn_8267BE38(p);
    }
  }
  fn_826C1AD8(param_1);
}
