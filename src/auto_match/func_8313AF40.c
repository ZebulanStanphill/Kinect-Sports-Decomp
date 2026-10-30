extern int fn_82518120(void);
extern void fn_82518470(int, int, void *);
extern void fn_82359C18(void *);
extern void fn_82230300(void *, int, int);
extern int lbl_83283600[];

void fn_8313AF40(void)
{
  int a = lbl_83283600[20];
  int r = fn_82518120();
  fn_82518470(r, a, lbl_83283600);
  fn_82359C18(lbl_83283600 + 14);
  fn_82230300(lbl_83283600, 1, 0);
}
