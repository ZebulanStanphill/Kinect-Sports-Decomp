extern int fn_82518120(void);
extern void fn_82518470(int, int, void *);
extern void fn_82359C18(void *);
extern void fn_82230300(void *, int, int);
extern int lbl_832827E8[];

void fn_8313A3B8(void)
{
  int a = lbl_832827E8[20];
  int r = fn_82518120();
  fn_82518470(r, a, lbl_832827E8);
  fn_82359C18(lbl_832827E8 + 14);
  fn_82230300(lbl_832827E8, 1, 0);
}
