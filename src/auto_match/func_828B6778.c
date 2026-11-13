extern void fn_822315A0(unsigned);
extern int fn_8236D498(unsigned);
extern void fn_828BB690(void *, int, int);
extern int fn_828EDC90(int, int, int);

typedef struct { unsigned first; unsigned second; } Pair_828B6778;

unsigned fn_828B6778(int param_1, int param_2, unsigned *param_3)
{
  unsigned r;
  int v;
  unsigned char ok;
  Pair_828B6778 pr;

  ok = *(char *)(param_1 + 0x4c) == 0 && *(int *)(param_1 + 0x20) == 0;
  r = ok;
  if (r) {
    fn_828BB690(&pr, *(int *)(param_1 + 0x14), param_2);
    v = *(int *)(pr.first + 8);
    r = fn_8236D498(*param_3);
    r = fn_828EDC90(*(int *)(param_1 + 0x50), v, r);
    if (pr.second != 0) {
      fn_822315A0(pr.second);
    }
  }
  if (param_3[1] != 0) {
    fn_822315A0(param_3[1]);
  }
  return r;
}
