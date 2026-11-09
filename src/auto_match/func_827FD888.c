extern unsigned short fn_827F7210(void);
extern void fn_827FC7D8(int, int, int, float);
extern void fn_827FB1E0(int, int, int, float, float, int);
extern void fn_827FB050(int, int, int);
void fn_827FD888(int a, int b, int c, float x, int d)
{
  if (fn_827F7210() != 0) fn_827FC7D8(a, b, c, x);
  fn_827FB1E0(a, b, c, 1.0f, x, d);
  fn_827FB050(a, b, c);
}
