extern int fn_82A33778(int flags, const char *a, int alen, const char *b, int blen);
extern int __ascii_stricmp(const char *a, const char *b);

int fn_82A1E110(const char *a, const char *b)
{
  int r = fn_82A33778(0, a, -1, b, -1);
  if (r == 0) {
    if (a != 0) {
      if (b != 0)
        return __ascii_stricmp(a, b);
      return 1;
    }
    return b != 0 ? -1 : 0;
  }
  return r - 2;
}
