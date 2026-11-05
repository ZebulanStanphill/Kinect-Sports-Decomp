typedef struct Itf_82932878 Itf_82932878;
struct Itf_82932878 { struct { int pad; void *(*f4)(Itf_82932878 *); } *vt; };
typedef struct Src_82932878 {
  char pad0[0x10];
  int f10, f14, f18, f1c, f20, f24, f28, f2c;
  Itf_82932878 *i30, *i34, *i38, *i3c, *i40, *i44, *i48;
  unsigned f4c;
  void *p50, *p54;
} Src_82932878;
typedef struct New_82932878 {
  void *vt;
  int f4, f8, fc, f10, f14, f18, f1c, f20, f24, f28, f2c;
  void *o30, *o34, *o38, *o3c, *o40, *o44, *o48;
  int f4c;
  void *p50, *p54;
} New_82932878;
extern int *fn_82934160(void);
extern New_82932878 *fn_829301D0(int, int, int);
extern void *fn_829302D0(int, int);
extern void *memcpy(void *, const void *, unsigned);
extern char lbl_8202F170[];
New_82932878 *fn_82932878(Src_82932878 *s)
{
  New_82932878 *n;
  New_82932878 *m;
  int *h = fn_82934160();
  m = fn_829301D0(*h, 0x58, 0x10);
  if (m != 0) {
    m->f4 = 0xb;
    m->f8 = 0;
    m->fc = 0;
    m->vt = lbl_8202F170;
    m->f10 = 0;
    m->f14 = 0;
    m->f28 = 0;
    m->f2c = 0;
    m->o30 = 0;
    m->o34 = 0;
    m->o38 = 0;
    m->o3c = 0;
    m->o40 = 0;
    m->o48 = 0;
    m->f4c = 0;
    m->p50 = 0;
    m->p54 = 0;
    m->o44 = 0;
    m->f18 = -1;
    m->f1c = -1;
    m->f20 = -1;
    m->f24 = -1;
    n = m;
  } else {
    n = 0;
  }
  if (n == 0) return 0;
    n->f10 = s->f10;
  n->f14 = s->f14;
  n->f28 = s->f28;
  n->f2c = s->f2c;
  n->f4c = s->f4c;
  n->f18 = s->f18;
  n->f1c = s->f1c;
  n->f20 = s->f20;
  n->f24 = s->f24;
  if (s->i30 != 0) {
    n->o30 = s->i30->vt->f4(s->i30);
    if (n->o30 == 0) return 0;
  }
  if (s->i34 != 0) {
    n->o34 = s->i34->vt->f4(s->i34);
    if (n->o34 == 0) return 0;
  }
  if (s->i38 != 0) {
    n->o38 = s->i38->vt->f4(s->i38);
    if (n->o38 == 0) return 0;
  }
  if (s->i3c != 0) {
    n->o3c = s->i3c->vt->f4(s->i3c);
    if (n->o3c == 0) return 0;
  }
  if (s->i40 != 0) {
    n->o40 = s->i40->vt->f4(s->i40);
    if (n->o40 == 0) return 0;
  }
  if (s->i48 != 0) {
    n->o48 = s->i48->vt->f4(s->i48);
    if (n->o48 == 0) return 0;
  }
  if (s->i44 != 0) {
    n->o44 = s->i44->vt->f4(s->i44);
    if (n->o44 == 0) return 0;
  }
  if (s->f4c != 0) {
    n->p50 = fn_829302D0(s->f4c << 2, 0x10);
    if (n->p50 == 0) return 0;
    n->p54 = fn_829302D0(s->f14 << 2, 0x10);
    if (n->p54 == 0) return 0;
    memcpy(n->p50, s->p50, s->f4c << 2);
    memcpy(n->p54, s->p54, s->f14 << 2);
  }
  return n;
}
