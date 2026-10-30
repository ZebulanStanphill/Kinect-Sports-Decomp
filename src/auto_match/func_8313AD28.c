extern int fn_82518120(void);
extern void fn_82518470(int, int, void *);
extern void fn_82359C18(void *);
extern void fn_82230300(void *, int, int);
extern int lbl_832832F0[];

void fn_8313AD28(void)
{
  int a = lbl_832832F0[20];
  int r = fn_82518120();
  fn_82518470(r, a, lbl_832832F0);
  fn_82359C18(lbl_832832F0 + 14);
  fn_82230300(lbl_832832F0, 1, 0);
}
