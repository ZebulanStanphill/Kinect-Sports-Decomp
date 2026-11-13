void __dcbz(int offset, void *base);
int fn_82A45660(char *param_1, int param_2)
{
  unsigned *p;
  int i;
  int n;
  p = (unsigned *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  n = (((p[1] >> 0x1d) & 1) + 1) * 0x100;
  for (i = 0; i < n; i += 0x80) {
    __dcbz(i, (void *)p[0x12]);
  }
  if (p[5] != 0) { p[5] = 0; p[0xd] = 1; }
  if (p[6] != 0) { p[6] = 0; p[0xd] = 1; }
  if ((p[0] & 0xfff) != 0) { p[0xc] = 1; p[0] = p[0] & 0xfffff000; }
  if ((p[1] & 0xfff) != 0) { p[0xc] = 1; p[1] = p[1] & 0xfffff000; }
  if ((p[0] & 0x300000) != 0) { p[0xc] = 1; p[0] = p[0] & 0xffcfffff; }
  if ((p[2] & 0x3ffffff) != 0) { p[0xc] = 1; p[2] = p[2] & 0xfc000000; }
  if ((p[4] & 0x80000000) != 0) { p[0xd] = 1; p[4] = p[4] & 0x7fffffff; }
  p[0x15] = 0;
  p[0x16] = 0;
  p[0x13] = 0;
  if ((p[0] & 0xf8000000) != 0) { p[0xc] = 1; p[0] = p[0] & 0x7ffffff; }
  if ((p[9] & 0x1f) != 0) { p[0xe] = 1; p[9] = p[9] & 0xffffffe0; }
  if ((p[1] & 0x80000000) != 0x80000000) { p[0xc] = 1; p[1] = p[1] | 0x80000000; }
  *(unsigned short *)((char *)p + 0x52) = 0;
  if ((p[2] & 0x7c000000) != 0) { p[0xc] = 1; p[2] = p[2] & 0x83ffffff; }
  if ((p[2] & 0x80000000) != 0) { p[0xc] = 1; p[2] = p[2] & 0x7fffffff; }
  if ((p[3] & 0x7c000000) != 0) { p[0xc] = 1; p[3] = p[3] & 0x83ffffff; }
  if ((p[3] & 0x80000000) != 0) { p[0xc] = 1; p[3] = p[3] & 0x7fffffff; }
  return 0;
}
