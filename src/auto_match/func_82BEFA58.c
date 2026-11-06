extern void *memcpy(void *, const void *, unsigned int);
extern void *fn_82BE50B0(void *, int);
extern float lbl_82002AE0;
extern float lbl_820069B4;
extern float lbl_8201DCBC;
typedef struct { char pad[0x20]; float f20; char pad2[0x3c]; int f60; } T;
typedef struct { char pad[0x8]; T *t; } B;
typedef struct { char pad[0x60]; float f60; } Q;
typedef struct { char pad[0x1c]; int f1c; float f20; } R;
typedef struct { char pad[0x2c]; Q *q; char pad2[0x2c]; float f5c; } A;
int fn_82BEFA58(A *a, B *b, R *c)
{
  T *t;
  R *r;
  float lim;
  if (c->f20 < lbl_820069B4) c->f20 = lbl_82002AE0;
  t = b->t;
  r = fn_82BE50B0(t, 1);
  if (a->q != 0) lim = a->q->f60; else lim = a->f5c;
  t->f60 = 3;
  if (r->f1c != 0 && r->f20 <= c->f20 && r->f20 > lbl_8201DCBC) {
    t->f60 = 1;
    memcpy(c, r, 0x24);
    if (r->f20 <= lim) {
      t->f60 = 2;
      return 1;
    }
  }
  return 0;
}
