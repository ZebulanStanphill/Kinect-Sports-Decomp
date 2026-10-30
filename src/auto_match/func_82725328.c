typedef struct Q_82725328 {
  char pad0[0xc];
  unsigned int fc;
} Q_82725328;

typedef struct X_82725328 X_82725328;
typedef struct {
  char padc[0xc];
  Q_82725328 *(*fc)(X_82725328 *, int);
} VT2_82725328;
struct X_82725328 {
  VT2_82725328 *vt;
};

typedef struct {
  char pad0[8];
  X_82725328 x;
} R_82725328;

typedef struct B1_82725328 B1_82725328;
typedef struct {
  char pad0[0x40];
  R_82725328 *(*f40)(B1_82725328 *);
} VT1_82725328;
struct B1_82725328 {
  VT1_82725328 *vt;
};

typedef struct {
  void *vt;
  int f4;
  unsigned char f8;
} Obj_82725328;

extern char lbl_82010E7C[];
extern void fn_8267C4F0(void *);

Obj_82725328 *fn_82725328(Obj_82725328 *self)
{
  B1_82725328 *base;
  R_82725328 *r;
  X_82725328 *x;
  Q_82725328 *q;

  self->f4 = 1;
  self->vt = lbl_82010E7C;
  self->f8 = 0xe;
  base = (B1_82725328 *)((char *)self - 0xd8);
  r = base->vt->f40(base);
  x = &r->x;
  q = x->vt->fc(x, 3);
  if (q != 0) {
    if (q->fc != 0) {
      self->f8 = self->f8 | 1;
    }
    fn_8267C4F0(q);
  }
  return self;
}
