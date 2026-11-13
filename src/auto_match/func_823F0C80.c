extern void fn_822315A0(unsigned);
extern void fn_822D79D8(void *, int);
extern int fn_822D7FE0();
extern unsigned fn_8265C9E0(int);
extern void fn_828E2B28(void *, void *);
extern void fn_828E9D40(int);
extern void fn_828E9D90(int);
typedef struct Iface Iface;
typedef struct { char pad[0x10]; void (*f10)(Iface *, int, int *); void (*f14)(Iface *, int, int *); } IVT;
struct Iface { IVT *vt; };
typedef struct Cb Cb;
typedef struct { char pad[4]; void (*f4)(Cb *, int, int); } CVT;
struct Cb { CVT *vt; };
typedef struct { char pad[0x48]; Cb *cb; char pad2[0x68 - 0x4c]; Iface *a; char pad3[0x70 - 0x6c]; Iface *b; } Obj;
typedef struct { int first; unsigned second; } Pair;
void fn_823F0C80(Obj *self, int param_2, int param_3)
{
  Pair pr;
  int o1, o2;
  int h, h2;
  unsigned mem;
  Cb *cb;
  mem = fn_8265C9E0(0x28);
  if (mem != 0) h = fn_822D7FE0();
  else h = 0;
  pr.first = 0;
  pr.second = 0;
  fn_822D79D8(&pr, h);
  self->a->vt->f10(self->a, pr.first, &param_2);
  self->b->vt->f10(self->b, pr.first, &param_3);
  if (self->cb != 0) {
    fn_828E9D90(pr.first);
    fn_828E9D40(pr.first);
    h2 = pr.first;
    self->a->vt->f14(self->a, h2, &o1);
    self->b->vt->f14(self->b, h2, &o2);
    cb = self->cb;
    if (cb != 0) cb->vt->f4(cb, o1, o2);
  }
  fn_828E2B28(self, &pr);
  if (pr.second != 0) fn_822315A0(pr.second);
}
