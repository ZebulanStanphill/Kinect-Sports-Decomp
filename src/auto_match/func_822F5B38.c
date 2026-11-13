typedef struct Obj_822F5B38 Obj_822F5B38;
typedef struct VT_822F5B38 {
  int pad[6];
  float (*f18)(Obj_822F5B38 *);
  int pad1c[8];
  unsigned int (*f3c)(Obj_822F5B38 *);
} VT_822F5B38;
struct Obj_822F5B38 {
  VT_822F5B38 *vt;
};

typedef struct Ent_822F5B38 {
  char pad0[0x178];
  float f178;
  char pad17c[8];
  int f184;
  char pad188[4];
  int f18c;
  char pad190[0x10];
  int f1a0;
} Ent_822F5B38;

typedef struct Mid_822F5B38 {
  char pad0[0x1e4];
  Ent_822F5B38 *ent;
  char pad1e8[0xf8];
  Obj_822F5B38 *obj;
} Mid_822F5B38;

typedef struct Cfg_822F5B38 {
  char pad0[0x14];
  float f14;
  float f18;
  float f1c;
  float f20;
} Cfg_822F5B38;

typedef struct Flags_822F5B38 {
  char pad0[0x24];
  int f24;
} Flags_822F5B38;

typedef struct Rep_822F5B38 Rep_822F5B38;
typedef struct SP_822F5B38 {
  Obj_822F5B38 *ptr;
  Rep_822F5B38 *rep;
} SP_822F5B38;

typedef struct Top_822F5B38 {
  int f0;
  int f4;
  int f8;
  Flags_822F5B38 *flags;
  Mid_822F5B38 *mid;
  Cfg_822F5B38 *cfg;
  void *weak;
} Top_822F5B38;

extern SP_822F5B38 *fn_822F9B78(SP_822F5B38 *out, void *weak);
extern void fn_822315A0(Rep_822F5B38 *r);

double fn_822F5B38(Top_822F5B38 *p)
{
  Ent_822F5B38 *e;
  float r;
  float a;

  if (p->flags->f24 != 0) {
    e = p->mid->ent;
    if (p->mid->obj->vt->f3c(p->mid->obj) == 0) {
      return p->cfg->f14;
    } else if (e->f184 != 0) {
      return p->cfg->f1c;
    } else if (e->f1a0 == 0 || e->f18c == 0) {
      a = p->cfg->f1c;
      return (p->cfg->f20 - a) * e->f178 + a;
    } else {
      return p->cfg->f18;
    }
  } else {
    SP_822F5B38 sp;
    Obj_822F5B38 *o;
    o = fn_822F9B78(&sp, p->weak)->ptr;
    r = o->vt->f18(o);
    if (sp.rep != 0) {
      fn_822315A0(sp.rep);
    }
  }
  return r;
}
