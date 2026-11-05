struct Object_8265C238 { void *vt; int m4; unsigned char m8; };
extern "C" char lbl_820014D4[];
namespace v2 { extern "C" char lbl_820014D4[]; }
extern "C" void fn_8265C168(Object_8265C238 *);

extern "C" Object_8265C238 *fn_8265C238(Object_8265C238 *p)
{
  p->m4 = 0;
  p->vt = lbl_820014D4;
  p->m8 = 0;
  fn_8265C168(p);
  p->vt = v2::lbl_820014D4;
  return p;
}
