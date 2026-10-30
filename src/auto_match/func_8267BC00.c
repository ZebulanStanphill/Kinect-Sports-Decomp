typedef struct Hdr_8267BC00 { int f8, fc, f10, f14; } Hdr_8267BC00;
typedef struct Obj_8267BC00 {
  char pad0[8];
  Hdr_8267BC00 h;
  int f18, f1c, f20, f24, f28, f2c, f30, f34;
  char pad38[8];
  void *f40, *f44;
  char sub48[0x20];
  int f68, f6c;
} Obj_8267BC00;
extern void fn_8267ADA8(void *, int);
extern void *memset(void *, int, unsigned);

typedef struct Ln_8267BC00 { struct Ln_8267BC00 *n, *p; } Ln_8267BC00;
Obj_8267BC00 *fn_8267BC00(Obj_8267BC00 *o)
{
  Hdr_8267BC00 *h = &o->h;
  h->f8 = 0;
  h->fc = 1;
  h->f10 = 0;
  h->f14 = 0;
  o->f20 = 0x2000;
  o->f24 = 0x2000;
  o->f18 = 0;
  o->f1c = 0x10;
  o->f28 = -1;
  o->f2c = 0;
  o->f30 = 0;
  o->f34 = 0;
  { Ln_8267BC00 *l = (Ln_8267BC00 *)&o->f40; l->n = l; l->p = l; }
  fn_8267ADA8(o->sub48, 0);
  o->f68 = 0;
  o->f6c = 0;
  memset(&o->f18, 0, 0x28);
  return o;
}
