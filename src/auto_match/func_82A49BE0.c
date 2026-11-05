extern char lbl_83219D50[];
extern char *fn_82A3FF60(void *, unsigned, unsigned, int);
extern void *memcpy(void *, const void *, unsigned);
extern void *memset(void *, int, unsigned);

char *fn_82A49BE0(unsigned short *p)
{
  unsigned short type = *p;
  unsigned n, total;
  char *buf;

  if (type == 0x165)
    n = 0x20;
  else if (type == 1)
    n = 0x10;
  else
    n = p[8] + 0x12;
  if (type == 0x165)
    total = 0x20;
  else if (type == 1)
    total = 0x12;
  else
    total = p[8] + 0x12;
  buf = fn_82A3FF60(lbl_83219D50, total, 0x20970006, 0);
  if (buf != 0) {
    memcpy(buf, p, n);
    memset(buf + n, 0, total - n);
  }
  return buf;
}
