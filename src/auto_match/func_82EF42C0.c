extern int fn_82E58050();
extern unsigned int lbl_8215FDD0;
extern unsigned int lbl_821605A0;
typedef struct { int v[4]; } V4;
extern V4 lbl_820ED068;
typedef struct { void *vt; void *vt2; int a8; int ac; V4 v; char pad[0x48 - 0x20]; int a48, a4c, a50, a54, a58; } Obj;

Obj *fn_82EF42C0(Obj *o)
{
  fn_82E58050();
  o->vt = &lbl_821605A0;
  o->vt2 = &lbl_8215FDD0;
  o->a8 = 1;
  o->v = lbl_820ED068;
  o->a48 = 0;
  o->a4c = 0;
  o->a50 = 0;
  o->a54 = 0;
  o->a58 = 0;
  o->v = lbl_820ED068;
  return o;
}
