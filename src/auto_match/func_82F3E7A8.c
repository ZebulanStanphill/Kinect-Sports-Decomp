typedef struct { int v[4]; } Quad_82F3E7A8;

typedef struct {
  void *vt0;
  void *vt1;
  int pad8[2];
  Quad_82F3E7A8 q10;
  __int64 i20;
  char pad28[0x48 - 0x28];
  int f48;
  unsigned short f4c;
  short pad4e;
  Quad_82F3E7A8 q50;
  __int64 i60;
} Obj_82F3E7A8;

extern void fn_82F3E710(Obj_82F3E7A8 *);
extern char lbl_82162E90[];
extern char lbl_82162E78[];
extern Quad_82F3E7A8 lbl_8202E618;
extern Quad_82F3E7A8 lbl_821549B8;

Obj_82F3E7A8 *fn_82F3E7A8(Obj_82F3E7A8 *o)
{
  fn_82F3E710(o);
  o->vt0 = lbl_82162E90;
  o->vt1 = lbl_82162E78;
  o->f48 = 1;
  o->f4c = 0x101;
  o->q50 = lbl_8202E618;
  o->i60 = 0;
  o->q10 = lbl_821549B8;
  o->i20 = 0x32;
  return o;
}
