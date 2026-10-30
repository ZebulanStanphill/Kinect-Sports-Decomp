struct Wr_82D49B98;
typedef struct {
  void *v0, *v1, *v2;
  void (*f3)(struct Wr_82D49B98 *, const char *, int, int);
  void *v4;
  void (*f5)(struct Wr_82D49B98 *, int, const char *, void *, int, void *);
} Vt_82D49B98;
typedef struct Wr_82D49B98 { Vt_82D49B98 *vt; } Wr_82D49B98;
typedef struct {
  int pad0[2];
  void *a8; int ac; int c10;
  void *a14; int c18; int c1c;
  void *a20; int c24; int c28;
} Mesh_82D49B98;
typedef struct { char pad[0x18]; Mesh_82D49B98 *m; int c1c; } Obj_82D49B98;
extern void *fn_82CFF8D0(void *, unsigned);
extern int fn_82D48E18(void *, void *, void *);
extern char lbl_8323C614[];

void fn_82D49B98(Obj_82D49B98 *o, Wr_82D49B98 *w)
{
  Mesh_82D49B98 *m = o->m;
  if ((m->c1c & (int)0x80000000) == 0) {
    void *r = fn_82CFF8D0(m->a14, m->c1c << 2);
    w->vt->f5(w, 3, "Stream", m->a14, m->c18 << 2, r);
  }
  m = o->m;
  if ((m->c28 & (int)0x80000000) == 0) {
    void *r = fn_82CFF8D0(m->a20, m->c28 << 2);
    w->vt->f5(w, 3, "Stream", m->a20, m->c24 << 2, r);
  }
  m = o->m;
  if ((m->c10 & (int)0x80000000) == 0) {
    void *r = fn_82CFF8D0(m->a8, m->c10 << 2);
    w->vt->f5(w, 3, "Stream", m->a8, m->ac << 2, r);
  }
  w->vt->f3(w, "DisplayMesh", o->c1c, 0);
  fn_82D48E18(o, w, lbl_8323C614);
}
