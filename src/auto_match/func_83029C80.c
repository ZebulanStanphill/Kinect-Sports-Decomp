extern int lbl_8217D040[];
typedef struct { int a, b, c; } Sub;
typedef struct {
  int *vt;        /* 0 */
  int f4, f8, fc, f10; /* 4..10 */
  short f14, f16;  /* 14,16 */
  int f18;
  int f1c;
  unsigned char f20, f21; short f22;
  Sub s24;        /* 24..2c */
  unsigned char f30, f31; short f32;
  int f34, f38, f3c, f40, f44, f48;
  int pad[6];
  int f64, f68;
} T;
static void Sub_init(Sub *s) { s->a = 0; s->b = 0; s->c = 0; }
void fn_83029C80(T *p)
{
  p->vt = lbl_8217D040;
  Sub_init(&p->s24);
  p->f4 = 0; p->f8 = 0; p->fc = 0; p->f10 = 0;
  p->f16 = 0;
  p->f1c = 0;
  p->f20 = 0; p->f21 = 0;
  p->f30 = 0; p->f31 = 0;
  p->f34 = 0; p->f38 = 0; p->f3c = 0;
  p->f48 = 0;
  p->f64 = 0; p->f68 = 0;
}
