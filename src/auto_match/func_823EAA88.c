typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
  float vector4_f32[4];
} __vector4;

extern int fn_822315A0();
extern int fn_82251CE8();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern void *fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();

typedef struct { void **vt; } VObj_823EAA88;
typedef struct {
  char pad0[0x38];
  int f38;
  char pad3c[0x48 - 0x3c];
  unsigned f48;
  char pad4c[0x68 - 0x4c];
  VObj_823EAA88 *f68;
  char pad6c[4];
  VObj_823EAA88 *f70;
  char pad74[4];
  VObj_823EAA88 *f78;
} Sub_823EAA88;
typedef struct { char pad[0x28]; Sub_823EAA88 s; } Owner_823EAA88;
typedef struct { Owner_823EAA88 *owner; } Obj_823EAA88;

void fn_823EAA88(Obj_823EAA88 *o, int p2, void *p4, __vector4 v)
{
  Sub_823EAA88 *s;
  struct { int a; int b; struct { int first; void *second; } pr; __vector4 v; } in;
  void *mem;
  int h;
  s = &o->owner->s;
  in.a = p2;
  in.v = v;
  mem = fn_8265C9E0(0x28);
  if (mem != 0) {
    h = fn_822D7FE0(mem);
  } else {
    h = 0;
  }
  in.pr.first = 0;
  in.pr.second = 0;
  fn_822D79D8(&in.pr, h);
  ((void (*)(void *, int, void *))s->f68->vt[0x10 / 4])(s->f68, in.pr.first, &in.a);
  ((void (*)(void *, int, void *))s->f70->vt[0x10 / 4])(s->f70, in.pr.first, &in.v);
  ((void (*)(void *, int, void *))s->f78->vt[0x10 / 4])(s->f78, in.pr.first, p4);
  if (s->f48 != 0) {
    fn_828E9D90(in.pr.first);
    fn_828E9D40(in.pr.first);
    fn_82251CE8(s, in.pr.first, &s->f38);
  }
  fn_828E2B28(s, &in.pr);
  if (in.pr.second != 0) {
    fn_822315A0(in.pr.second);
  }
}
