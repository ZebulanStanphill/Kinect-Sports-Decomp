typedef struct Ent_82BABDA0 { int a; unsigned char ok; char pad[7]; } Ent_82BABDA0;
typedef struct Obj_82BABDA0 Obj_82BABDA0;
typedef struct Mgr_82BABDA0 { char pad[0xab0]; int hb0; } Mgr_82BABDA0;
struct Obj_82BABDA0 {
  char pad0[0x10];
  int f10;
  char pad14[0x3c];
  int f50;
  char pad54[0x90];
  unsigned fe4_hi : 30;
  unsigned fe4_f : 1;
  unsigned fe4_lo : 1;
  char pade8[4];
  Obj_82BABDA0 *fec;
  char padf0[0x2c8];
  Mgr_82BABDA0 *f3b8;
};
extern Ent_82BABDA0 lbl_820E7F98[];
extern unsigned char fn_82BABD38();
extern int fn_82BD09F0(int, Obj_82BABDA0 *);

static __forceinline unsigned char Ok(Obj_82BABDA0 *p)
{
  unsigned char r;
  if (p->f10 == 0 || (unsigned char)p->fe4_f != 0 || lbl_820E7F98[p->f50].ok == 0)
    r = 0;
  else
    r = 1;
  return r;
}

unsigned char fn_82BABDA0(Obj_82BABDA0 *o)
{
  int r;
  unsigned char c = fn_82BABD38();
  if (c != 0) {
    if (Ok(o)) {
      Obj_82BABDA0 *o2 = o->fec;
      if (Ok(o2)) {
        int h = o->f3b8->hb0;
        int a = fn_82BD09F0(h, o2);
        int b = fn_82BD09F0(h, o);
        if (b == a) { r = 1; goto done; }
      }
    }
  }
  r = 0;
done:
  return (unsigned char)r;
}
