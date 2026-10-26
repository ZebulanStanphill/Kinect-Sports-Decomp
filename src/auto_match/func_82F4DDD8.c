extern void fn_82A1E650(void *a, int b);
extern char *lbl_8326183C;

void fn_82F4DDD8(int a)
{
  void *p = *(void **)(lbl_8326183C + 0x2dc4);
  if (p != 0) {
    fn_82A1E650(p, a);
  }
}
