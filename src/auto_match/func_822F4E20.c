typedef struct Obj_822F4E20 Obj_822F4E20;
typedef struct VT_822F4E20 {
  int pad[5];
  float (*f14)(Obj_822F4E20 *);
} VT_822F4E20;
struct Obj_822F4E20 {
  VT_822F4E20 *vt;
};

typedef struct Ent_822F4E20 {
  char pad0[0x184];
  int f184;
} Ent_822F4E20;

typedef struct Track_822F4E20 {
  char pad0[0xf8];
  Obj_822F4E20 *second;
  Obj_822F4E20 *first;
} Track_822F4E20;

typedef struct Flags_822F4E20 {
  char pad0[0x24];
  Track_822F4E20 *track;
} Flags_822F4E20;

typedef struct Mid_822F4E20 {
  char pad0[0x83c];
  float *chances;
  int f840;
  int level;
} Mid_822F4E20;

typedef struct Rep_822F4E20 Rep_822F4E20;
typedef struct SP_822F4E20 {
  Obj_822F4E20 *ptr;
  Rep_822F4E20 *rep;
} SP_822F4E20;

typedef struct Top_822F4E20 {
  int f0;
  int f4;
  int f8;
  Flags_822F4E20 *flags;
  Mid_822F4E20 *mid;
  int f14;
  void *weak;
} Top_822F4E20;

typedef union FloatBits_822F4E20 {
  unsigned int u;
  float f;
} FloatBits_822F4E20;

extern unsigned int lbl_83265A28;
extern const float lbl_821CA45C[2];
extern SP_822F4E20 *fn_822F9B78(SP_822F4E20 *out, void *weak);
extern void fn_822315A0(Rep_822F4E20 *r);
extern int fn_824CCFC8(Track_822F4E20 *t);

static __forceinline float Random01(void)
{
  FloatBits_822F4E20 bits;

  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  bits.u = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
  return bits.f - lbl_821CA45C[1];
}

float fn_822F4E20(Top_822F4E20 *p, int which, Ent_822F4E20 *e)
{
  Track_822F4E20 *t;
  Obj_822F4E20 *o;
  float r;

  t = p->flags->track;
  if (t != 0) {
    if (which != 0) {
      o = t->second;
    } else {
      o = t->first;
    }
    if (o != 0 && fn_824CCFC8(t) != 0) {
      return o->vt->f14(o);
    }
    return 0.0f;
  } else {
    SP_822F4E20 sp;
    if (e->f184 != 0) {
      Mid_822F4E20 *m = p->mid;
      float chance = m->chances[m->level + 100];
      if (Random01() < chance) {
        return lbl_821CA45C[1];
      }
    }
    o = fn_822F9B78(&sp, p->weak)->ptr;
    r = o->vt->f14(o);
    if (sp.rep != 0) {
      fn_822315A0(sp.rep);
    }
  }
  return r;
}
