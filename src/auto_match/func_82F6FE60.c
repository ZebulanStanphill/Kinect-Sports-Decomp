int fn_82F6FE60(unsigned short *s, unsigned short *set)
{
  unsigned short *p = s;
  unsigned short *q;
  unsigned short c;
  for (; *p != 0; p++) {
    for (q = set; *q != 0; q++) {
      if (*q == *p) return p - s;
    }
  }
  return p - s;
}
