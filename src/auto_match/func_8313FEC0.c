typedef struct { int a, b, c, d; } T;
extern T lbl_831F1308[];
extern void fn_82696330(T *p);

void fn_8313FEC0(void)
{
  T *p = lbl_831F1308 + 4;
  int i = 3;
  do {
    --p;
    fn_82696330(p);
  } while (--i >= 0);
}
