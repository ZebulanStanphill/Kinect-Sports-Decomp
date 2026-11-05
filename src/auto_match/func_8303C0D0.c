extern void *fn_82FA5060(void *, int);
extern void fn_8302B7D0(void *, int, int);
extern void fn_8302BB20(void *);
extern char lbl_8217D474[];
extern void *lbl_831BC768;

int *fn_8303C0D0(int a, int b)
{
  int *p;

  p = (int *)fn_82FA5060(lbl_831BC768, 0x24);
  if (p != 0) {
    fn_8302B7D0(p, a, b);
    p[7] = 0;
    p[0] = (int)lbl_8217D474;
    p[8] = 0;
    fn_8302BB20(p);
    return p;
  }
  return 0;
}
