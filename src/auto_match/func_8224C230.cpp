// Destructor body of a class with three embedded sub-objects (+0xf0, +0x9c,
// +0x48), destroyed in reverse order, then the base destructor.
extern "C" {
int fn_828974A8(void *);
int fn_8289D4C0(void *);
extern char lbl_82196CE0[];
extern char lbl_82197070[];
extern char lbl_82197080[];
extern char lbl_82197DE8[];
}
// the two sub-objects share a vtable that the linker merged: each store
// rebuilds the address
namespace v2 { extern "C" char lbl_82197080[]; }
static __forceinline void SubDtor(void **s, void *vt) { *s = vt; fn_8289D4C0(s); }

extern "C" void fn_8224C230(void **p)
{
  *p = lbl_82197DE8;
  SubDtor(p + 0x3c, lbl_82197080);
  SubDtor(p + 0x27, v2::lbl_82197080);
  SubDtor(p + 0x12, lbl_82196CE0);
  *p = lbl_82197070;
  fn_828974A8(p);
}
