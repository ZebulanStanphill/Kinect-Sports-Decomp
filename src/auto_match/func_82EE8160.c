extern void fn_82E50C30(void *);
extern char lbl_8215FF48[];
void **fn_82EE8160(void **p, void *a)
{
  p[8] = a;
  p[5] = 0;
  p[0] = lbl_8215FF48;
  p[4] = (void *)-1;
  p[6] = 0;
  p[7] = 0;
  fn_82E50C30(p + 9);
  p[0x18] = 0;
  p[0x19] = (void *)-1;
  p[0x1a] = (void *)2;
  return p;
}
