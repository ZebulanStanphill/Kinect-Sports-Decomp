extern unsigned int lbl_8322B138;
extern unsigned int fn_82BE8F80(void);
unsigned char fn_82BE2958(void)
{
  unsigned char r;
  if (lbl_8322B138 == 0) {
    r = 1;
  } else {
    r = lbl_8322B138 == fn_82BE8F80();
  }
  return r;
}
