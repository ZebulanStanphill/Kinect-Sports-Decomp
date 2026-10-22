typedef struct X {
  char pad0[0x518];
  int a518;
  char pad1[0x998 - 0x51c];
  int a998;
} X;

typedef struct T {
  char pad0[0x24];
  X *x;
} T;

typedef struct I {
  char pad0[0x27c];
  T *t;
} I;

typedef struct Obj Obj;
typedef struct {
  void *s0;
  void *s4;
  void *s8;
  void (*fc)(Obj *o, float f);
  void (*f10)(Obj *o, int v);
} Vt;

struct Obj {
  Vt *vt;
  int pad4;
  I *i;
};

extern int fn_824D3368(X *x);
extern int fn_824D33E8(X *x);

static int check(X *x, int v)
{
  if (x == 0 || fn_824D33E8(x) != 0 || fn_824D3368(x) != 0)
    return 0;
  return x->a518 == v || x->a998 == v;
}

void fn_8232CBD8(Obj *o, float f)
{
  T *t = o->i->t;
  if (t != 0) {
    if (check(t->x, 0)) {
      o->vt->f10(o, 1);
    } else if (check(t->x, 1)) {
      o->vt->f10(o, 0);
    }
  }
  o->vt->fc(o, f);
}
