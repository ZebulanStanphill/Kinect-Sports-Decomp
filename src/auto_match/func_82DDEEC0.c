typedef struct Obj_82DDEEC0 { char pad[0x40]; unsigned char f40; char pad41[3]; void *f44; } Obj_82DDEEC0;
typedef struct Arg_82DDEEC0 { char pad[0x20]; unsigned int f20; } Arg_82DDEEC0;
typedef struct Tmp_82DDEEC0 { char pad[0x44]; int z; } Tmp_82DDEEC0;
extern unsigned char lbl_8323E418;
extern void fn_830B1CB0(unsigned char *);
extern void fn_82DDEB98(Obj_82DDEEC0 *, int, int, int, Tmp_82DDEEC0 *);
extern void fn_82DDE248(Obj_82DDEEC0 *, Tmp_82DDEEC0 *, unsigned int);

unsigned char *fn_82DDEEC0(unsigned char *out, Obj_82DDEEC0 *o, Arg_82DDEEC0 *a, int p4, int p5, int p6)
{
  Tmp_82DDEEC0 t;
  unsigned int v;
  if (lbl_8323E418 == 0) {
    fn_830B1CB0(&lbl_8323E418);
    if (lbl_8323E418 == 0) {
      *out = 0;
      return out;
    }
  }
  o->f44 = a;
  v = a->f20;
  fn_82DDEB98(o, p5, p4, p6, &t);
  o->f40 = 0;
  t.z = 0;
  fn_82DDE248(o, &t, v);
  *out = o->f40;
  return out;
}
