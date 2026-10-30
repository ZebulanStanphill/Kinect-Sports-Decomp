extern "C" {
extern void fn_8223A0D0(void *);
extern char lbl_8219689C[];
extern char lbl_821968A4[];
}
namespace vt2 {
extern "C" char lbl_821968A4[];
}
struct S { void *vb; };
struct Obj_82239CB0 {
  void *vt;
  int pad[9];
  S s;
};

extern "C" Obj_82239CB0 *fn_82239CB0(Obj_82239CB0 *p)
{
  S *s = &p->s;
  fn_8223A0D0(p);
  p->s.vb = lbl_821968A4;
  p->vt = lbl_8219689C;
  s->vb = vt2::lbl_821968A4;
  return p;
}
