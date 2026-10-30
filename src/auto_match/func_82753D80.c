extern int fn_826AA628();
extern int fn_826F1A90();
extern int fn_826F2588();
extern int fn_826F29B8();
extern int fn_826F2AD8();
extern int fn_82792690();

typedef struct { int a0; int a4; int a8; int ac; char pad[0x300 - 0x10]; } Buf;

int fn_82753D80(int param_1, int param_2, int param_3, int param_4, int param_5)
{
  Buf b;
  int r;
  fn_826F29B8(&b, param_1);
  fn_826F2AD8(&b, param_2);
  fn_826AA628(&b, param_3);
  fn_826AA628(&b, param_4);
  fn_82792690(&b, param_5);
  fn_826F1A90(&b);
  r = b.ac;
  fn_826F2588(&b);
  return r;
}
