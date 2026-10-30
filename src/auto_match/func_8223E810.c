char *fn_8223E810(void *unused, char *param_2, char param_3, int param_4)
{
  char *p = param_2;
  char *q;
  int c;

  *p++ = '%';
  if ((param_4 & 0x20) != 0) {
    *p++ = '+';
  }
  if ((param_4 & 0x10) != 0) {
    *p++ = '#';
  }
  *p++ = '.';
  *p++ = '*';
  if (param_3 != 0) {
    *p++ = param_3;
  }
  param_4 = param_4 & 0x3000;
  if (param_4 == 0x2000) {
    c = 'f';
  } else if (param_4 == 0x3000) {
    c = 'a';
  } else {
    c = (param_4 == 0x1000) ? 'e' : 'g';
  }
  *p = c;
  p[1] = 0;
  return param_2;
}
