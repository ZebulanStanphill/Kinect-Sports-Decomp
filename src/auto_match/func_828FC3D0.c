extern int toupper(int);

unsigned int fn_828FC3D0(const char *s)
{
  unsigned int h = 0;
  if (s != 0 && *s != 0) {
    do {
      h = toupper(*s) + h * 0x13;
      s++;
    } while (*s != 0);
    return h % 7;
  }
  return 0;
}
