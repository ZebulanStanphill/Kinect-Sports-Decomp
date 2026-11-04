extern int lbl_83282970[];
extern void *fn_825154B8(void);
extern void fn_825155F8(void *, void *);
extern void fn_82230300(void *, int, int);

void fn_8313A4F0(void)
{
  void *p = fn_825154B8();
  fn_825155F8(p, lbl_83282970);
  fn_82230300(lbl_83282970 + 1, 1, 0);
}
