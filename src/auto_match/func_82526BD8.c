void fn_82526BD8(char *d, int n, char *s)
{
  char *end = d + n;
  while (d < end && (*d++ = *s++) != 0)
    ;
  if (d == end)
    d[-1] = 0;
}
