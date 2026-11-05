extern int fn_827B6190(unsigned *);

static char *Slot(unsigned *p)
{
  int i = fn_827B6190(p);
  char *r;
  if (i >= 0)
    r = (char *)(*p + i * 0x18 + 0x10);
  else
    r = 0;
  return r;
}

void *fn_827B76D8(unsigned *p)
{
  char *b = Slot(p);
  return b ? b + 0xc : 0;
}
