extern int lbl_83282FA8[];
extern void *fn_825154B8(void);
extern void fn_825155F8(void *, void *);
extern void fn_82230300(void *, int, int);

void fn_8313AAC8(void)
{
  void *p = fn_825154B8();
  fn_825155F8(p, lbl_83282FA8);
  fn_82230300(lbl_83282FA8 + 1, 1, 0);
}
