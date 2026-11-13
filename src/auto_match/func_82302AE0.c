extern int fn_82230300();
extern int fn_8265CA20();


void fn_82302AE0(unsigned *p)
{
  unsigned *q;
  q = p;
  if (*q != 0) {
    unsigned b = *q;
    unsigned e = q[1];
    for (; b != e; b += 0x40) fn_82230300(b, 1, 0);
    fn_8265CA20(*q);
  }
  q[0] = 0; q[1] = 0; q[2] = 0;
}
