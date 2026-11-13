extern int fn_82522838();
extern int fn_82A277E0();

extern char *lbl_832767CC;

int fn_8259C4C0(unsigned char *param_1)
{
  int i;
  int r;
  unsigned char c;
  void **p;

  if (lbl_832767CC == 0) {
    fn_82522838();
  }
  for (i = 0, p = (void **)(lbl_832767CC + 0x3c); i < 4; i++, p += 14) {
    if (*p != 0) {
      r = fn_82A277E0(*p, 0, param_1);
      if (r == -1) {
        c = 0xff;
      } else {
        c = param_1[r - 2];
      }
      if (c == ((int *)p)[-1]) {
        return i;
      }
    }
  }
  return -1;
}
