typedef unsigned int U32;
extern void fn_822315A0(void *p);
extern void fn_82517608();
extern void fn_82517978();

typedef struct { U32 first; void *second; } Pair;

U32 fn_825174B8(U32 param_1, U32 *param_2, U32 *param_3)
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
