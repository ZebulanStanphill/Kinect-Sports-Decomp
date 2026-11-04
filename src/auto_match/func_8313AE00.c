extern int lbl_83283420[];
extern void *fn_825154B8(void);
extern void fn_825155F8(void *, void *);
extern void fn_82230300(void *, int, int);

void fn_8313AE00(void)
{
  void *p = fn_825154B8();
  fn_825155F8(p, lbl_83283420);
  fn_82230300(lbl_83283420 + 1, 1, 0);
}
