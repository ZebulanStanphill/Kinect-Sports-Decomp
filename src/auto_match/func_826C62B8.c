extern void fn_8267C4C8(void *);
extern int fn_8268AE50(void *, void *);
extern void fn_8268B8E8(void *, void *);
extern void fn_8268C210(void *);
extern float lbl_82002AE0;
typedef struct Vt_826C62B8 { void *s[15]; void *(*f3c)(void *); } Vt;
typedef struct Mgr_826C62B8 { Vt *vt; } Mgr;
typedef struct Res_826C62B8 { int a, b, c; Mgr *mgr; } Res;
typedef struct Obj_826C62B8 { int rc; int f4; int f8; char sub[4]; float f10; Res *f14; void *f18; } Obj;
Obj * fn_826C62B8(Obj *o, int a, Res *r, void *d, int e, void *f)
{
  void *h;
  o->f4 = a;
  o->f8 = e;
  o->rc = 1;
  fn_8268C210(o->sub);
  o->f10 = lbl_82002AE0;
  if (r != 0) fn_8267C4C8(r);
  o->f14 = r;
  if (f != 0) fn_8267C4C8(f);
  o->f18 = f;
  if (d != 0) {
    h = r->mgr->vt->f3c(r->mgr);
    if (fn_8268AE50(h, d) != 0) fn_8268B8E8(o->sub, d);
  }
  return o;
}
