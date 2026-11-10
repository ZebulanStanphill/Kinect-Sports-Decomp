extern char *strncpy(char *dst, const char *src, unsigned int n);

void fn_82CFBE30(char *dst, const char *src, int n)
{
  if (n == 0) {
    return;
  }
  strncpy(dst, src, n);
}
