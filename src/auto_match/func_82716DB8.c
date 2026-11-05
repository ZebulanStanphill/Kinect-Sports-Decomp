typedef struct { unsigned char type; char pad[3]; unsigned char flag; char pad2[11]; } Val_82716DB8;
typedef struct {
  void *vt0;
  char pad4[0x10 - 4];
  void *vt10;
  char pad14[0x34 - 0x14];
  void *vt34;
} Obj_82716DB8;

extern void *fn_82716738(void *, void *);
extern void fn_82696330(void *);
extern void fn_826A1CC8(void *, void *, const char *, void *, void *);
extern void fn_826BF638(void *, void *, void *, void *, void *);
extern void fn_826C1FF8(void *, void *, unsigned, void *, void *);
extern char lbl_8200F5DC[];
extern char lbl_8200F6C8[];
extern char lbl_8200F6CC[];
extern char lbl_8200F7A0[];

Obj_82716DB8 *fn_82716DB8(Obj_82716DB8 *p, unsigned *a2)
{
  unsigned char f0, f1, f2, f3, f4, f5, f6;
  Val_82716DB8 v0, v1, v2, v3, v4, v5;
  void *sub;

  fn_82716738(p, a2);
  p->vt0 = lbl_8200F6CC;
  p->vt10 = lbl_8200F7A0;
  p->vt34 = lbl_8200F6C8;
  f0 = 1;
  sub = &p->vt10;
  fn_826BF638(&p->vt34, p, a2, lbl_8200F5DC, &f0);
  v0.flag = 1;
  f1 = 2;
  v0.type = 2;
  fn_826C1FF8(sub, a2, *a2 + 0x1e8, &v0, &f1);
  fn_82696330(&v0);
  f2 = 2;
  v1.type = 10;
  fn_826A1CC8(sub, a2, "blendMode", &v1, &f2);
  fn_82696330(&v1);
  f3 = 2;
  v2.type = 10;
  fn_826A1CC8(sub, a2, "enabled", &v2, &f3);
  fn_82696330(&v2);
  f4 = 2;
  v3.type = 10;
  fn_826A1CC8(sub, a2, "scale9Grid", &v3, &f4);
  fn_82696330(&v3);
  f5 = 2;
  v4.type = 10;
  fn_826A1CC8(sub, a2, "tabIndex", &v4, &f5);
  fn_82696330(&v4);
  f6 = 2;
  v5.type = 10;
  fn_826A1CC8(sub, a2, "trackAsMenu", &v5, &f6);
  fn_82696330(&v5);
  return p;
}
