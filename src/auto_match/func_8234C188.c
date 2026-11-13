typedef struct { unsigned px; unsigned rep; } SP_8234C188;
typedef struct { char pad[0x118]; unsigned px1; unsigned rep1; char pad2[0x144 - 0x120]; unsigned px2; unsigned rep2; } Obj_8234C188;
extern SP_8234C188 *fn_8234D618(SP_8234C188 *, void *);
extern void fn_822315A0(unsigned);

void fn_8234C188(Obj_8234C188 *o, void *a)
{
  struct { SP_8234C188 A, B, Z; } L;
  SP_8234C188 *r;
  unsigned px, rep, old;
  r = fn_8234D618(&L.A, a);
  px = 0;
  rep = 0;
  if (&L.Z != r) {
    unsigned *pr = &r->rep;
    rep = *pr;
    *pr = 0;
    px = r->px;
    r->px = 0;
  }
  old = o->rep1;
  o->rep1 = rep;
  o->px1 = px;
  if (old != 0) fn_822315A0(old);
  if (L.A.rep != 0) fn_822315A0(L.A.rep);
  r = fn_8234D618(&L.B, a);
  px = 0;
  rep = 0;
  if (&L.Z != r) {
    unsigned *pr = &r->rep;
    rep = *pr;
    *pr = 0;
    px = r->px;
    r->px = 0;
  }
  old = o->rep2;
  o->rep2 = rep;
  o->px2 = px;
  if (old != 0) fn_822315A0(old);
  if (L.B.rep != 0) fn_822315A0(L.B.rep);
}
