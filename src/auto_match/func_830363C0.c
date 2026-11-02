extern void *fn_82FA5060(unsigned int, int);
extern int fn_8302B7D0(void *, int, int);
extern int fn_8302BB20(void *);
extern int lbl_8217D1F0;
extern unsigned int lbl_831BC768;

int *fn_830363C0(int a, int b)
{
  int *p = (int *)fn_82FA5060(lbl_831BC768, 0x1c);
  if (p != 0) {
    fn_8302B7D0(p, a, b);
    *p = (int)&lbl_8217D1F0;
    fn_8302BB20(p);
    return p;
  }
  return 0;
}
