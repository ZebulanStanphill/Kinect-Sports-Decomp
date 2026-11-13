extern unsigned char fn_828B5650(unsigned *, unsigned *);



unsigned char fn_828E6160(void *p1, unsigned *a, unsigned *b)
{
  int r;
  unsigned x = *a, y = *b;
  if (y <= x && (y < x || fn_828B5650(a + 1, b + 1) == 0)) r = 0; else r = 1;
  return (unsigned char)r;
}
