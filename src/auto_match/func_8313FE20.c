typedef struct { int a, b, c, d; } T;
extern T lbl_831F12E8[];
extern void fn_82696330(T *p);

void fn_8313FE20(void)
{
  T *p = lbl_831F12E8 + 2;
  int i = 1;
  do {
    --p;
    fn_82696330(p);
  } while (--i >= 0);
}
