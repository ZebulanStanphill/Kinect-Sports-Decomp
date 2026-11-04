typedef struct Rect_82717BD0 { float l, t, r, b; } Rect_82717BD0;
typedef struct Buf30_82717BD0 { char b[0x18]; } Buf30_82717BD0;
typedef struct F6_82717BD0 { float a, b, c, d, e, f; } F6_82717BD0;
typedef struct Out_82717BD0 { char b[0x10]; } Out_82717BD0;
struct Obj_82717BD0;
typedef struct Vt_82717BD0 {
  int p0, p1;
  unsigned char (*f8)(void *);
  int pad1[0x28 / 4 - 3];
  Rect_82717BD0 *(*f28)(Rect_82717BD0 *, struct Obj_82717BD0 *, Buf30_82717BD0 *);
  int pad2;
  unsigned char (*f30)(void *, Out_82717BD0 *, unsigned char);
} Vt_82717BD0;
typedef struct Ent_82717BD0 { char pad0[0x3c]; unsigned f3c; char pad1[8]; unsigned char f48; char pad2[3]; } Ent_82717BD0;
typedef struct Items_82717BD0 { char pad[0x18]; Ent_82717BD0 *data; unsigned count; } Items_82717BD0;
typedef struct Child_82717BD0 { Vt_82717BD0 *vt; char pad[0x40]; F6_82717BD0 f44; } Child_82717BD0;
typedef struct Obj_82717BD0 {
  Vt_82717BD0 *vt; char pad0[0x62]; unsigned char f66; char pad1[0x25]; struct { unsigned :20; unsigned bit:1; unsigned :11; } fl;
  char pad2[0xc]; Items_82717BD0 *items; char pad3[4]; Child_82717BD0 **kids;
} Obj_82717BD0;
extern void fn_8268CC00(void *);
extern void fn_8268D008(F6_82717BD0 *, Out_82717BD0 *, float *);
unsigned char fn_82717BD0(Obj_82717BD0 *self, float *pt, unsigned char flags)
{
  unsigned i;
  Buf30_82717BD0 buf;
  Rect_82717BD0 rt;
  Rect_82717BD0 *r;
  Out_82717BD0 out;
  F6_82717BD0 tmp;
  Items_82717BD0 *items;
  if ((unsigned char)self->fl.bit == 0 && ((flags & 2) == 0 || self->vt->f8(self) != 0)) {
    if ((self->f66 & 1) == 0) {
      unsigned char ok;
      fn_8268CC00(&buf);
      r = self->vt->f28(&rt, self, &buf);
      if (pt[0] > r->r || pt[0] < r->l || pt[1] > r->b || pt[1] < r->t) ok = 0; else ok = 1;
      if (!ok) return 0;
      if ((flags & 1) == 0) return 1;
    }
    items = self->items;
    i = 0;
    if (items->count > 0) {
      do {
        Ent_82717BD0 *e = items->data + i;
        if (e->f3c != 0x40000 && (e->f48 & 1) != 0) {
          Child_82717BD0 *k = self->kids[i];
          if (k != 0 && ((flags & 2) == 0 || k->vt->f8(k) != 0)) {
            tmp.a = k->f44.a; tmp.b = k->f44.b; tmp.c = k->f44.c; tmp.d = k->f44.d; tmp.e = k->f44.e; tmp.f = k->f44.f;
            fn_8268D008(&tmp, &out, pt);
            if (k->vt->f30(k, &out, flags) != 0) return 1;
          }
        }
        items = self->items;
        i++;
      } while (i < items->count);
    }
  }
  return 0;
}
