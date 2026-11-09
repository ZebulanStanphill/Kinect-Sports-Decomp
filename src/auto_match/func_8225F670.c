extern char *fn_8265C9E0(unsigned int size);
extern char *lbl_832760B4;

char *fn_8225F670(void)
{
  char *p;
  if (lbl_832760B4 == 0) {
    p = fn_8265C9E0(0x27);
    if (p != 0) {
      p[0] = 0;
      p[1] = 0;
      p[2] = 0;
    } else {
      p = 0;
    }
    lbl_832760B4 = p;
    return p;
  }
  return lbl_832760B4;
}
