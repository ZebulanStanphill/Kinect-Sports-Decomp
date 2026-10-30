typedef struct Obj_82D9A4A8 {
  char pad0[0x8c];
  void * a8c;
  int a90;
  int a94;
  void * a98;
  int a9c;
  int aa0;
} Obj_82D9A4A8;
typedef struct Wr_82D9A4A8 Wr_82D9A4A8;
typedef struct Vt_82D9A4A8 { char pad[0x14]; void (*field)(Wr_82D9A4A8 *, int, const char *, void *, int, int); } Vt_82D9A4A8;
struct Wr_82D9A4A8 { Vt_82D9A4A8 *vt; };
extern int fn_82CFF8D0(void *, int);
extern void fn_82D93550(Obj_82D9A4A8 *, Wr_82D9A4A8 *, char *);
extern char lbl_8323E200[];

void fn_82D9A4A8(Obj_82D9A4A8 *o, Wr_82D9A4A8 *w)
{
  fn_82D93550(o, w, lbl_8323E200);
  if ((o->a94 & (int)0x80000000) == 0) {
    int h = fn_82CFF8D0(o->a8c, o->a94 << 2);
    w->vt->field(w, 3, "OvrlapLisPtr", o->a8c, o->a90 << 2, h);
  }
  if ((o->aa0 & (int)0x80000000) == 0) {
    int h = fn_82CFF8D0(o->a98, o->aa0 << 2);
    w->vt->field(w, 3, "PhantmLisPtr", o->a98, o->a9c << 2, h);
  }
}
