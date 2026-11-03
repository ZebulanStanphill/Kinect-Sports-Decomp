typedef struct Itf_8243B890 Itf_8243B890;
typedef struct { void *f0, *f4, *f8, *fc, *f10, *f14; void (*f18)(Itf_8243B890 *); } ItfVT_8243B890;
struct Itf_8243B890 { ItfVT_8243B890 *vt; };
typedef struct Vec_8243B890 { Itf_8243B890 **first; Itf_8243B890 **last; } Vec_8243B890;
typedef struct In_8243B890 {
  char pad0[0x1c4];
  Vec_8243B890 v;
  char pad1cc[0x1d4 - 0x1cc];
  int i1d4;
  char pad1d8[0x1f0 - 0x1d8];
  char blk[0x20];
  float f210;
} In_8243B890;
typedef struct Obj_8243B890 { char pad[0x40]; In_8243B890 *in; } Obj_8243B890;
static __forceinline int vsize(Vec_8243B890 *v) { return v->last - v->first; }
extern int fn_8243E5C8();
extern float lbl_821CC160;

void fn_8243B890(Obj_8243B890 *o)
{
  unsigned i;
  fn_8243E5C8(o->in->blk);
  o->in->f210 = lbl_821CC160;
  o->in->i1d4 = -1;
  for (i = 0; i < (unsigned)vsize(&o->in->v); i++) {
    Vec_8243B890 *v = &o->in->v;
    v->first[i]->vt->f18(v->first[i]);
  }
}
