extern void fn_8301AD50(void *);
extern void fn_83016D40(int *);
extern void fn_82FF8410(void *);

static void release(int *h)
{
  if (*h != -1) {
    fn_83016D40(h);
    *h = -1;
  }
}

void fn_8301B188(char *p)
{
  fn_8301AD50(p);
  release((int *)(p + 0x24));
  fn_82FF8410(p + 4);
}
