extern "C" {
extern void fn_828E34D8(void *);
extern char lbl_8219689C[];
extern char lbl_821968A4[];
}
namespace vt2 {
extern "C" char lbl_821968A4[];
}
struct S { void *vb; };
struct Obj_82233428 {
  void *vt;
  int pad[9];
  S s;
};

extern "C" Obj_82233428 *fn_82233428(Obj_82233428 *p)
{
  S *s = &p->s;
  fn_828E34D8(p);
  p->s.vb = lbl_821968A4;
  p->vt = lbl_8219689C;
  s->vb = vt2::lbl_821968A4;
  return p;
}
