extern int lbl_832837E0[];
extern void *fn_825154B8(void);
extern void fn_825155F8(void *, void *);
extern void fn_82230300(void *, int, int);

void fn_8313B0D8(void)
{
  void *p = fn_825154B8();
  fn_825155F8(p, lbl_832837E0);
  fn_82230300(lbl_832837E0 + 1, 1, 0);
}
