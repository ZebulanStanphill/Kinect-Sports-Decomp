extern void fn_82230218(void *, int, int, int);
extern void fn_828BDDA0(void *);
extern char lbl_82024190[];
extern char lbl_82024198[];

typedef struct { char buf[16]; int size, cap; } Str_828D15E0;
typedef struct Obj_828D15E0 {
  void *vt;
  char pad4[0x50 - 4];
  void *vt50;
  char pad54[0x80 - 0x54];
  unsigned char f80;
  char pad81[3];
  int f84, f88, f8c, f90;
  char pad94[4];
  unsigned __int64 f98;
  int fa0, fa4;
  Str_828D15E0 str;
  char padc0[4];
  unsigned char fc4, fc5, fc6;
} Obj_828D15E0;

Obj_828D15E0 *fn_828D15E0(Obj_828D15E0 *o, int a, int b, int c, int d, unsigned __int64 e, int f, int g,
                          unsigned char h, unsigned char i, int j, unsigned char k)
{
  Str_828D15E0 *s;
  fn_828BDDA0(o);
  o->f84 = a;
  o->f88 = b;
  o->f8c = c;
  o->f90 = d;
  o->vt = lbl_82024198;
  o->vt50 = lbl_82024190;
  o->f80 = 1;
  o->f98 = e;
  o->fa0 = f;
  o->fa4 = g;
  s = &o->str;
  s->cap = 0xf;
  s->size = 0;
  s->buf[0] = 0;
  fn_82230218(s, j, 0, -1);
  o->fc4 = h;
  o->fc5 = i;
  o->fc6 = k;
  return o;
}
