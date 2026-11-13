typedef struct Tbl {
  char p0[4];
  void (*f4)(int);
  char p1[0x20 - 8];
  int (*f20)(int, void *, int, int, int);
  char p2[4];
  int (*f28)(int *, int, int, void *, int, int);
} Tbl;
extern Tbl *lbl_83219598;

int fn_82A38678(int param_1, int param_2)
{
  Tbl *t;
  int r;
  struct { int h; int pad; char buf[8]; } l;
  t = lbl_83219598;
  r = t->f28(&l.h, 0x80120089, param_1, l.buf, 7, 0);
  if (r >= 0) {
    r = t->f20(l.h, l.buf, param_2, 0x38, 0x22);
    t->f4(l.h);
  }
  return r;
}
