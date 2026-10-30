struct Del_82E30430;
struct DVt_82E30430 { void *s0, *s1; void (*f8)(Del_82E30430 *); };
struct Del_82E30430 { DVt_82E30430 *vt; };
struct Sub_82E30430 { void *vt; unsigned f4; };
struct Obj_82E30430 {
  void *vt;
  char pad4[0x4c - 4];
  void *vt4c;
  char pad50[0x54 - 0x50];
  char f54[0x90 - 0x54];
  Del_82E30430 *f90;
  Sub_82E30430 s94;
  char pad9c[0x100 - 0x9c];
  Sub_82E30430 s100;
  char pad108[0x16c - 0x108];
  Sub_82E30430 s16c;
  char pad174[0x1d8 - 0x174];
  Del_82E30430 *f1d8;
};
extern "C" void fn_82E2DEC8(Obj_82E30430 *);
extern "C" void fn_82E2FB40(void);
extern "C" void fn_82E50EA0(void *);
extern "C" void fn_82E569B0(Sub_82E30430 *, int);
extern "C" char lbl_8214C818[];
extern "C" char lbl_8214C830[];
extern "C" char lbl_82154D80[];
namespace v2 { extern "C" char lbl_82154D80[]; }
namespace v3 { extern "C" char lbl_82154D80[]; }


extern "C" void fn_82E30430(Obj_82E30430 *o)
{
  o->vt = lbl_8214C830;
  o->vt4c = lbl_8214C818;
  fn_82E2FB40();
  if (o->f1d8 != 0) {
    o->f1d8->vt->f8(o->f1d8);
    o->f1d8 = 0;
  }
  if (o->f90 != 0) {
    o->f90->vt->f8(o->f90);
    o->f90 = 0;
  }
  o->s16c.vt = lbl_82154D80;
  if (o->s16c.f4 == 0) fn_82E569B0(&o->s16c, 0);
  o->s100.vt = v2::lbl_82154D80;
  if (o->s100.f4 == 0) fn_82E569B0(&o->s100, 0);
  o->s94.vt = v3::lbl_82154D80;
  if (o->s94.f4 == 0) fn_82E569B0(&o->s94, 0);
  fn_82E50EA0(o->f54);
  fn_82E2DEC8(o);
}
