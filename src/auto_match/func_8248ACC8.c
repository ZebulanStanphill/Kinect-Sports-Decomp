typedef struct Obj Obj;
typedef struct { void *f0, *f4, *f8; void (*fc)(Obj *); } Vtbl;
struct Obj { Vtbl *vt; };
typedef struct { char pad[0x20]; int f20; } Sub;
typedef struct {
  int f0;
  int f4;
  int f8;
  Obj *fc;
  int f10;
  Sub *f14;
  char pad[0xa0 - 0x18];
  void *fa0;
  void *fa4;
} S;
extern void fn_8248D788(void *, int);

void fn_8248ACC8(S *s, int a)
{
  if (s->f4 != 0 && s->f8 == 0 && s->f14->f20 != 0) {
    s->fc->vt->fc(s->fc);
  }
  fn_8248D788(s->fa0, a);
  if (s->fa4 != 0) {
    fn_8248D788(s->fa4, a);
  }
}
