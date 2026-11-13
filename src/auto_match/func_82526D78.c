extern int fn_82F66368(char *, int, const char *, int);

void fn_82526D78(const char *src, char *dst, int size, int off, int end)
{
  int len = end - off;
  int r = fn_82F66368(dst, size, src + off, len);
  dst[len] = 0;
  if (r != 0) {
    dst[size - 1] = 0;
  }
}
