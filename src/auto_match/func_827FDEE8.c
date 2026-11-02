extern unsigned short fn_827F7210(void);
extern void fn_827FCF18(int, int, int, float, int);
extern void fn_827FB300(int, int, int, float, int);
extern void fn_827FB050(int, int, int);
void fn_827FDEE8(int a, int b, int c, float x, int d)
{
  if (fn_827F7210() != 0) fn_827FCF18(a, b, c, x, d);
  fn_827FB300(a, b, c, x, 0);
  fn_827FB050(a, b, c);
}
