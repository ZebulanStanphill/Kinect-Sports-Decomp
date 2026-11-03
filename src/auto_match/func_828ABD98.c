typedef struct Obj_828ABD98 Obj_828ABD98;
typedef struct VT_828ABD98 { int pad[5]; void (*f14)(Obj_828ABD98 *, void *, int); } VT_828ABD98;
struct Obj_828ABD98 { VT_828ABD98 *vt; };
extern int fn_828E9D60(void *, int);
extern int fn_828E9D90(void *);

int fn_828ABD98(Obj_828ABD98 *o, void *s, unsigned char flag)
{
  int a, b, d;
  a = fn_828E9D90(s);
  o->vt->f14(o, s, 0);
  b = fn_828E9D90(s);
  d = b - a;
  if (flag != 0) {
    fn_828E9D60(s, a);
  }
  return d;
}
