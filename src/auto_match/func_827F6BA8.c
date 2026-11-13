extern int fn_827F9450();
extern int fn_827F94C8();
extern int fn_827F98C8();
extern int fn_8280CB58();
extern int fn_82810208();

typedef struct { float x, y, z; } Vec3;

int fn_827F6BA8(int param_1, int param_2, int param_3)
{
  int a;
  int b;
  Vec3 v;

  fn_827F98C8(param_2, param_3, &b);
  fn_827F9450(param_2, param_3, &a);
  fn_827F94C8(b, a, &v);
  fn_8280CB58(a, param_1);
  fn_82810208(&v, param_1, param_1);
  return param_1;
}
