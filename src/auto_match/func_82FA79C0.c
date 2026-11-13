extern unsigned int *fn_82FA5060(unsigned int, int);
extern int fn_82FA6B68(unsigned int *, int);
extern void fn_82FA7778(unsigned int *);
extern unsigned int lbl_8216CB84;
extern unsigned int lbl_831BC768;
extern unsigned int *lbl_83264230;

unsigned int *fn_82FA79C0(int param_1)
{
  unsigned int *p;

  if (lbl_83264230 == 0) {
    p = fn_82FA5060(lbl_831BC768, 4);
    if (p != 0) {
      *p = (unsigned int)&lbl_8216CB84;
      lbl_83264230 = p;
      if (fn_82FA6B68(p, param_1) != 1) {
        fn_82FA7778(lbl_83264230);
        lbl_83264230 = 0;
      }
    } else {
      lbl_83264230 = 0;
    }
  }
  return lbl_83264230;
}
