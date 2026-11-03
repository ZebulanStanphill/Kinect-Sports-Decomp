typedef struct Itf_82879CD8 Itf_82879CD8;
typedef struct { void *f0; int (*f4)(Itf_82879CD8 *); } ItfVT_82879CD8;
struct Itf_82879CD8 { ItfVT_82879CD8 *vt; };
typedef struct Obj_82879CD8 {
  char pad0[0x4c];
  unsigned w4c;
  char pad50[4];
  Itf_82879CD8 *i54;
  char pad58[0x78 - 0x58];
  unsigned char b78;
} Obj_82879CD8;
extern int fn_82877BA8();
extern int fn_82878D48();
extern int fn_82868758();
extern unsigned fn_82874908();
extern int fn_82879968(Obj_82879CD8 *, unsigned);

int fn_82879CD8(Obj_82879CD8 *o)
{
  unsigned u;
  o->b78 = 0;
  fn_82877BA8((char *)o + 0x58, o);
  fn_82878D48(o, 0);
  fn_82868758();
  u = fn_82874908();
  if (o->w4c != u && fn_82879968(o, u) < 0) return 0xa0200000;
  if (o->i54 != 0 && o->i54->vt->f4(o->i54) < 0) return 0xa0200000;
  return 0x20200000;
}
