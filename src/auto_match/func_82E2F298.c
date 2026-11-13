struct I_82E2F298;
typedef struct IVT_82E2F298 { int (*f0)(struct I_82E2F298 *, unsigned, unsigned *); } IVT_82E2F298;
typedef struct I_82E2F298 { IVT_82E2F298 *vt; } I_82E2F298;
typedef struct E_82E2F298 { unsigned short type; char p2[6]; I_82E2F298 *obj; } E_82E2F298;
typedef struct C_82E2F298 { int p0; int lock; } C_82E2F298;
extern void fn_82E50F00(void *, int);
extern void fn_82E51028(void *, int);
extern E_82E2F298 *fn_82E52428(void *, unsigned);

int fn_82E2F298(C_82E2F298 *c, unsigned key, unsigned arg, unsigned *out)
{
  int hr;
  E_82E2F298 *e;
  *out = 0;
  fn_82E50F00(&c->lock, 1);
  e = fn_82E52428(c, key);
  if (e != 0) {
    if (e->type == 0xd && e->obj != 0) hr = e->obj->vt->f0(e->obj, arg, out);
    else hr = 0xC00D36BD;
  } else {
    hr = 0xC00D36E6;
  }
  fn_82E51028(&c->lock, 1);
  return hr;
}
