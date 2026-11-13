extern int fn_82A1E658();
extern unsigned int fn_82A1F470();
extern int fn_82F682B0(unsigned int);
extern int fn_82F85CD8(int);
extern int fn_82F85D70(int);
extern int lbl_8329F620[];

int fn_82F7C4A8(int h)
{
  unsigned int err;
  int a;
  int b;

  if (fn_82F85D70(h) != -1) {
    if ((h == 1 && (*(unsigned char *)(lbl_8329F620[0] + 0x94) & 1) != 0) ||
        (h == 2 && (*(unsigned char *)(lbl_8329F620[0] + 0x4c) & 1) != 0)) {
      a = fn_82F85D70(2);
      b = fn_82F85D70(1);
      if (b == a) goto none;
    }
    fn_82F85D70(h);
    if (fn_82A1E658() == 0) {
      err = fn_82A1F470();
      goto done;
    }
  }
none:
  err = 0;
done:
  fn_82F85CD8(h);
  *(unsigned char *)(lbl_8329F620[h >> 5] + (h & 0x1f) * 0x48 + 4) = 0;
  if (err != 0) {
    fn_82F682B0(err);
    return -1;
  }
  return 0;
}
