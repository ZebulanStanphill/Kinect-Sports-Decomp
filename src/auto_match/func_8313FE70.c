typedef struct { int a, b, c, d; } T;
extern T lbl_83156640[];
extern void fn_82696330(T *p);

void fn_8313FE70(void)
{
  T *p = lbl_83156640 + 4;
  int i = 3;
  do {
    --p;
    fn_82696330(p);
  } while (--i >= 0);
}
