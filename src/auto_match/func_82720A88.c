extern void fn_826959C8(void *);
extern void *fn_826A7398(int);
extern void *fn_826957D0(void *, int);
extern double fn_826972E0(void *, int);
extern void fn_82681898(void *, double);

typedef struct { int pad[3]; unsigned int f0c; int rest[5]; } Ent_82720A88;
typedef struct VT_82720A88 { int pad[0xd0 / 4]; unsigned int (*fd0)(void *); } VT_82720A88;
typedef struct Mgr_82720A88 {
  VT_82720A88 *vt;
  int pad[0x944 / 4 - 1];
  Ent_82720A88 ents[4];
} Mgr_82720A88;
typedef struct Obj_82720A88 {
  int pad0;
  unsigned char *p4;
  int pad8[4];
  int f18;
  int f1c;
} Obj_82720A88;

void fn_82720A88(Obj_82720A88 *o)
{
  unsigned char *p = o->p4;
  Mgr_82720A88 *m;
  unsigned int n;
  Ent_82720A88 *e;

  fn_826959C8(p);
  *p = 0;
  m = (Mgr_82720A88 *)fn_826A7398(o->f18);
  n = 0;
  if (o->f1c > 0) {
    int k = o->f18;
    n = (int)fn_826972E0(fn_826957D0(o, 0), k);
  }
  if (n < m->vt->fd0(m)) {
    if (n >= 4) {
      e = 0;
    } else {
      e = &m->ents[n];
    }
    fn_82681898(o->p4, (double)e->f0c);
  }
}
