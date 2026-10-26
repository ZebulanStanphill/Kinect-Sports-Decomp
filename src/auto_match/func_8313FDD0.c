typedef struct { int a, b, c, d; } T;
extern T lbl_83156620[];
extern void fn_82696330(T *p);

void fn_8313FDD0(void)
{
  T *p = lbl_83156620 + 2;
  int i = 1;
  do {
    --p;
    fn_82696330(p);
  } while (--i >= 0);
}
