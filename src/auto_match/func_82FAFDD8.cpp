extern "C" int fn_82FAFA90(void *);
extern "C" int fn_82FB05B8(void *);
extern "C" char lbl_8216D000[];
extern "C" char lbl_8216D160[];
extern "C" char lbl_8217C940[];
namespace v2 { extern "C" char lbl_8217C940[]; }

struct Obj_82FAFDD8 {
  void *vt;
  char pad[0x18];
  void *vt2;
};

extern "C" void fn_82FAFDD8(Obj_82FAFDD8 *o)
{
  o->vt = lbl_8216D160;
  o->vt2 = lbl_8217C940;
  fn_82FAFA90(o);
  o->vt = lbl_8216D000;
  o->vt2 = v2::lbl_8217C940;
  fn_82FB05B8(o);
}
