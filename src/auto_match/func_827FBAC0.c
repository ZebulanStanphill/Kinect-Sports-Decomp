typedef struct Mat_827FBAC0 { float f[12]; } Mat_827FBAC0;
typedef struct Obj_827FBAC0 { char pad[0x32]; unsigned short cnt; } Obj_827FBAC0;
typedef struct It_827FBAC0 { Mat_827FBAC0 *pc; Mat_827FBAC0 *pa; Mat_827FBAC0 *pb; unsigned char *flags; } It_827FBAC0;
extern unsigned short fn_827F7210(Obj_827FBAC0 *);
extern void fn_827F6960(Obj_827FBAC0 *, unsigned char **);
extern void fn_827F6950(Obj_827FBAC0 *, Mat_827FBAC0 **);
extern int fn_828116B8(unsigned char *, unsigned);
extern void fn_8280D8E0(Mat_827FBAC0 *, Mat_827FBAC0 *, void *);
extern void fn_8280E180(Mat_827FBAC0 *, void *, Mat_827FBAC0 *, float);
extern float lbl_82002AE0;

void fn_827FBAC0(Obj_827FBAC0 *a, Obj_827FBAC0 *b, Obj_827FBAC0 *c, float t)
{
  It_827FBAC0 I;
  char tmp[0x10];
  unsigned short n;
  unsigned short i;
  unsigned short j;
  Mat_827FBAC0 *qa, *qb, *qc;
  float one;

  n = fn_827F7210(a);
  fn_827F6960(b, &I.flags);
  fn_827F6950(a, &I.pa);
  fn_827F6950(b, &I.pb);
  fn_827F6950(c, &I.pc);
  if (n != 0) {
    one = lbl_82002AE0;
    i = 0;
    do {
      if (fn_828116B8(I.flags, i) != 0) {
        qa = I.pa;
        qb = I.pb;
        qc = I.pc;
        fn_8280D8E0(qa, qb, tmp);
        fn_8280E180(qa, tmp, qc, t);
        qc->f[4] = qb->f[4] * t + qa->f[4];
        qc->f[5] = qb->f[5] * t + qa->f[5];
        qc->f[6] = qb->f[6] * t + qa->f[6];
        qc->f[8] = ((qb->f[8] - one) * t + one) * qa->f[8];
        qc->f[9] = ((qb->f[9] - one) * t + one) * qa->f[9];
        qc->f[10] = ((qb->f[10] - one) * t + one) * qa->f[10];
        qc->f[11] = ((qb->f[11] - one) * t + one) * qa->f[11];
        I.pc++;
        I.pa++;
        I.pb++;
      } else {
        for (j = 0; j < 12; j++) {
          I.pc->f[j] = I.pa->f[j];
        }
        I.pc++;
        I.pa++;
        I.pb++;
      }
      i = i + 1;
    } while (i < n);
  }
}
