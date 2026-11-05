extern int fn_8271A5D8(unsigned *);

static char *Slot(unsigned *p)
{
  int i = fn_8271A5D8(p);
  char *r;
  if (i >= 0)
    r = (char *)(*p + i * 0x14 + 0x10);
  else
    r = 0;
  return r;
}

void *fn_8271A720(unsigned *p)
{
  char *b = Slot(p);
  return b ? b + 4 : 0;
}
