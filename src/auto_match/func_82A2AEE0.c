extern int fn_82A364F0(int flags, const char *a, int alen, const char *b, int blen);
extern int stricmp(const char *a, const char *b);

int fn_82A2AEE0(const char *a, const char *b)
{
  int r = fn_82A364F0(1, a, -1, b, -1);
  if (r == 0) {
    if (a != 0) {
      if (b != 0)
        return stricmp(a, b);
      return 1;
    }
    return b != 0 ? -1 : 0;
  }
  return r - 2;
}
