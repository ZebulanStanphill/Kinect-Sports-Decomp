typedef struct { int a, b; } T;
extern T lbl_83292B90[];
extern void fn_82F51660(T *p);
void fn_8313E4A0(void)
{
  T *p = lbl_83292B90 + 6;
  int i = 5;
  do {
    --p;
    fn_82F51660(p);
  } while (--i >= 0);
}
