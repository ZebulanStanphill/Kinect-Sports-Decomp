typedef struct Val_8271D4A8 { unsigned char type; char pad[3]; unsigned char b4; char rest[11]; } Val_8271D4A8;
typedef struct Obj_8271D4A8 { void *vt; char pad[0xc]; void *vt2; char pad2[0x20]; unsigned f34; } Obj_8271D4A8;
extern void fn_82696330(Val_8271D4A8 *);
extern void fn_826A79D8(void *, unsigned *, const char *, Val_8271D4A8 *);
extern void fn_826C1FF8(void *, unsigned *, unsigned, Val_8271D4A8 *, unsigned char *);
extern void fn_826C35B8(Obj_8271D4A8 *, unsigned *, void (*)(void));
extern void fn_82720700(unsigned *, void *);
extern void fn_827521E8(void);
extern unsigned int lbl_8200FEC8;
extern unsigned int lbl_8200FF20;
extern char lbl_8200FEB0[];

Obj_8271D4A8 *fn_8271D4A8(Obj_8271D4A8 *o, unsigned *ctx, unsigned a3)
{
  Val_8271D4A8 a, b, c, d, e;
  unsigned char f1, f2;
  void *sub;
  fn_826C35B8(o, ctx, fn_827521E8);
  o->f34 = a3;
  o->vt = &lbl_8200FF20;
  sub = (char *)o + 0x10;
  o->vt2 = &lbl_8200FEC8;
  fn_82720700(ctx, sub);
  f1 = 0;
  a.type = 10;
  fn_826C1FF8(sub, ctx, *ctx + 0x1e0, &a, &f1);
  fn_82696330(&a);
  f2 = 0;
  b.type = 10;
  fn_826C1FF8(sub, ctx, *ctx + 0x1e4, &b, &f2);
  fn_82696330(&b);
  c.type = 10;
  fn_826A79D8(sub, ctx, "scaleMode", &c);
  fn_82696330(&c);
  d.type = 10;
  fn_826A79D8(sub, ctx, lbl_8200FEB0, &d);
  fn_82696330(&d);
  e.type = 2;
  e.b4 = 1;
  fn_826A79D8(sub, ctx, "showMenu", &e);
  fn_82696330(&e);
  return o;
}
