extern int fn_82A369B0();
extern int fn_82A39AA8();

typedef struct { int a; int b; int c; } S;

int fn_82A36CE0(int param_1, int param_2)
{
  int result;
  S s;

  result = 0;
  fn_82A369B0(&s, param_1);
  fn_82A39AA8(0, &result, s.b, 0x14, param_2);
  return result;
}
