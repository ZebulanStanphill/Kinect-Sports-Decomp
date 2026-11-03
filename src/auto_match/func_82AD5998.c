extern unsigned char fn_82AD2AA8(void *, unsigned int, void *);
extern unsigned int fn_82ADD198(void *, unsigned short);
extern unsigned int fn_82ADD600(void *, unsigned int);

unsigned char fn_82AD5998(void *p1, int p2, void *p3, void *p4, void *p5, void *p6)
{
  unsigned int u;
  u = fn_82ADD198(p1, *(unsigned short *)(p2 + 0x12));
  u = fn_82ADD600(p1, u);
  if (fn_82AD2AA8(p1, u, p3) != 0) return 1;
  if (fn_82AD2AA8(p1, u, p4) != 0) return 1;
  if (fn_82AD2AA8(p1, u, p5) != 0) return 1;
  return fn_82AD2AA8(p1, u, p6) != 0;
}
