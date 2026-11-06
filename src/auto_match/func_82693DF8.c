extern int strncmp(const char *, const char *, unsigned int);

unsigned char fn_82693DF8(int *a, int *b)
{
  unsigned int n = b[2];
  if (a[4] != n) {
    return 0;
  }
  return strncmp((const char *)a[0], (const char *)b[0], n) == 0;
}
