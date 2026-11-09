extern unsigned short fn_827F7210(void);
extern void fn_827FC4A0(int, int, int, float);
extern void fn_827FB1E0(int, int, int, float, float, int);
extern void fn_827FB050(int, int, int);
extern float lbl_82002AE0;
void fn_827FD778(int a, int b, int c, float x, int d)
{
  if (fn_827F7210() != 0) fn_827FC4A0(a, b, c, x);
  fn_827FB1E0(a, b, c, lbl_82002AE0 - x, x, d);
  fn_827FB050(a, b, c);
}
