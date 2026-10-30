extern void fn_82F58F20(void *a, int b);
extern char *lbl_8326183C;

void fn_82F4DCF8(int a)
{
  void *p = *(void **)(lbl_8326183C + 0x2d8c);
  if (p != 0) {
    fn_82F58F20(p, a);
  }
}
