char *fn_82F72D18(int *self, char *p, char *end)
{
  if (self[1] == 1) {
    int d = end - p;
    unsigned int n = 4;
    unsigned int i;
    if (d < 4) n = d;
    for (i = 0; i < n; i++) p[i] = " ?? "[i];
    return p + n;
  }
  return p;
}
