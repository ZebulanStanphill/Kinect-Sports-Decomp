typedef struct Obj_822F9698 Obj_822F9698;
typedef struct VT_822F9698 {
  int pad[15];
  unsigned int (*f3c)(Obj_822F9698 *);
} VT_822F9698;
struct Obj_822F9698 {
  VT_822F9698 *vt;
};

typedef struct Ent_822F9698 {
  char pad0[0x178];
  float f178;
  char pad17c[8];
  int f184;
  char pad188[4];
  int f18c;
  char pad190[0x10];
  int f1a0;
} Ent_822F9698;

typedef struct Mid_822F9698 {
  char pad0[0x1e4];
  Ent_822F9698 *ent;
  char pad1e8[0xf8];
  Obj_822F9698 *obj;
} Mid_822F9698;

typedef struct Cfg_822F9698 {
  char pad0[0x14];
  float f14;
  float f18;
  float f1c;
  float f20;
} Cfg_822F9698;

typedef struct Top_822F9698 {
  int f0;
  Mid_822F9698 *mid;
  int f8;
  Cfg_822F9698 *cfg;
} Top_822F9698;

extern float lbl_831CCC98[];

double fn_822F9698(Top_822F9698 *p)
{
  Ent_822F9698 *e;
  float r;
  float a;

  e = p->mid->ent;
  if (p->mid->obj->vt->f3c(p->mid->obj) == 0) {
    r = p->cfg->f14;
  } else if (e->f184 != 0) {
    r = p->cfg->f1c;
  } else if (e->f1a0 == 0 || e->f18c == 0) {
    a = lbl_831CCC98[2];
    r = (lbl_831CCC98[3] - a) * e->f178 + a;
  } else {
    r = p->cfg->f18;
  }
  return r;
}
