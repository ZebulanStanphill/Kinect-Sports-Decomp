extern unsigned short *fn_82BE56B0(int);
extern unsigned short *lbl_8322B228;

unsigned short *fn_82BE8E48(void)
{
  unsigned short *p;
  if (lbl_8322B228 == 0) {
    p = fn_82BE56B0(8);
    if (p != 0) {
      *p = 0;
    } else {
      p = 0;
    }
    lbl_8322B228 = p;
    return p;
  }
  return lbl_8322B228;
}
