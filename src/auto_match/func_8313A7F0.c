extern int lbl_83282CB0[];
extern void *fn_825154B8(void);
extern void fn_825155F8(void *, void *);
extern void fn_82230300(void *, int, int);

void fn_8313A7F0(void)
{
  void *p = fn_825154B8();
  fn_825155F8(p, lbl_83282CB0);
  fn_82230300(lbl_83282CB0 + 1, 1, 0);
}
