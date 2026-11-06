extern int fn_82F66FE0(unsigned short);

int fn_82F40E08(int param_1, unsigned short *param_2)
{
  unsigned short c;
  unsigned short *q;
  int r;

  r = 0;
  c = *param_2;
  if (c == 0 || c == 0xfeff || c == 0xfffe) {
    r = 1;
  } else {
    q = param_2;
    do {
      if (fn_82F66FE0(*q) == 0) {
        break;
      }
      q = q + 1;
    } while (*q != 0);
    if (*q != 0) {
      r = 1;
    }
  }
  return r;
}
