extern int fn_8268A2A8(unsigned *);

static char *Slot(unsigned *p)
{
  int i = fn_8268A2A8(p);
  char *r;
  if (i >= 0)
    r = (char *)(*p + i * 0x18 + 0x10);
  else
    r = 0;
  return r;
}

void *fn_8268A388(unsigned *p)
{
  char *b = Slot(p);
  return b ? b + 4 : 0;
}
