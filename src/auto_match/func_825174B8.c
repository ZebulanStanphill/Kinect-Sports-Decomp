extern void fn_822315A0(void *p);
extern void fn_82517608();
extern void fn_82517978();

typedef struct { unsigned int first; void *second; } Pair;

unsigned int fn_825174B8(unsigned int param_1, unsigned int *param_2, unsigned int *param_3)
{
  Pair b;
  Pair a;

  b.first = 0;
  b.second = 0;
  fn_82517978(&b, param_3[0], param_3[1], 0);
  a.first = 0;
  a.second = 0;
  fn_82517978(&a, param_2[0], param_2[1], 0);
  fn_82517608(param_1, &a, &b);
  if (a.second != 0) {
    fn_822315A0(a.second);
  }
  if (b.second != 0) {
    fn_822315A0(b.second);
  }
  return param_1;
}
