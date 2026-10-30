typedef struct Obj_82417870 Obj_82417870;
typedef struct Vt_82417870 { void (*dtor)(void *, int); char pad[0x20]; void (*f24)(void *); } Vt_82417870;
typedef struct Poly_82417870 { Vt_82417870 *vt; } Poly_82417870;
typedef struct Rec_82417870 { char pad[8]; void *f8; char pad2[0x1a0]; } Rec_82417870;
typedef struct Res_82417870 { char pad[0xc]; int f0c; void *f10; void *f14; } Res_82417870;
struct Obj_82417870 {
  int pad0; Poly_82417870 *owner; Rec_82417870 *recBegin; Rec_82417870 *recEnd;
  char pad1[0x10]; Poly_82417870 **v20; Poly_82417870 **v24; char pad2[0x60];
  Poly_82417870 **v88; Poly_82417870 **v8c; char pad3[0x10];
  Res_82417870 r0; char pad4[0x110 - 0xa0 - sizeof(Res_82417870)]; Res_82417870 r1;
};
extern void fn_824152E8(void *);
extern void fn_8253D5A0(void *, void *, void *);
extern void fn_8265CA20(void *);
extern void fn_82CE4118(void *);

static void release(Res_82417870 *r, void *a, void *b)
{
  if (r->f0c != 0 && r->f14 != 0) {
    fn_8253D5A0(a, b, r->f14);
    fn_82CE4118(r->f14);
    r->f14 = 0;
    fn_82CE4118(r->f10);
    r->f10 = 0;
  }
}

void fn_82417870(Obj_82417870 *o, void *a, void *b)
{
  Rec_82417870 *rec;
  Poly_82417870 **pp;
  Poly_82417870 *p;
  if (o->owner != 0)
    o->owner->vt->f24(o->owner);
  for (rec = o->recBegin; rec != o->recEnd; rec++) {
    void *m = rec->f8;
    if (m != 0) {
      fn_824152E8(m);
      fn_8265CA20(m);
    }
  }
  release(&o->r0, a, b);
  release(&o->r1, a, b);
  for (pp = o->v20; pp != o->v24; pp++) {
    p = *pp;
    if (p != 0)
      p->vt->dtor(p, 1);
  }
  for (pp = o->v88; pp != o->v8c; pp++) {
    p = *pp;
    if (p != 0)
      p->vt->dtor(p, 1);
  }
  p = o->owner;
  if (p != 0) {
    p->vt->dtor(p, 1);
    o->owner = 0;
  }
}
