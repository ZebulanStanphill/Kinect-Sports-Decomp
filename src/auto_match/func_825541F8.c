extern unsigned int strlen(const char *);

void fn_825541F8(short *dst, char *src, unsigned int max)
{
  unsigned int len;
  unsigned int i;
  short *d;

  len = strlen(src);
  i = 0;
  if (len != 0) {
    d = dst - 1;
    do {
      if (i >= max) break;
      d++;
      *d = src[i];
      i++;
    } while (i < len);
  }
  if (len >= max) return;
  dst[len] = 0;
}
