extern int *fn_8265C9E0(int);
extern int fn_8267A0E0(int, int, int, int, int, int *);
extern int *lbl_831E7B3C;

int fn_8266F6B8(void)
{
  int *m;
  int *p;
  if (lbl_831E7B3C == 0) {
    m = fn_8265C9E0(0xc);
    if (m != 0) {
      p = m;
      p[0] = 0;
      p[1] = 0;
      p[2] = 0;
    } else {
      p = 0;
    }
    lbl_831E7B3C = p;
    fn_8267A0E0(1, 1, 1, 0, 0x18280143, p);
  }
  return *lbl_831E7B3C;
}
