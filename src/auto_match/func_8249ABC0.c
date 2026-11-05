extern void fn_82520158(const char *, void *, int);
extern void *fn_8251F720(void *, int);
extern void fn_8251FA58(void *);
extern void *fn_8265C9E0(int);
extern void *fn_8249A540(void *, void *);
extern void *lbl_83276738;
void *fn_8249ABC0(void)
{
  char buf[8];
  void *m;
  void *h;
  if (lbl_83276738 == 0) {
    fn_82520158("oobe_params", buf, 0);
    h = fn_8251F720(buf, 0);
    m = fn_8265C9E0(0x120);
    lbl_83276738 = m ? fn_8249A540(m, h) : 0;
    if (h != 0) fn_8251FA58(h);
  }
  return lbl_83276738;
}
