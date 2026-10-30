typedef struct Obj_82799EB8 { struct { int pad; void (*f4)(struct Obj_82799EB8 *, int); } *vt; int pad; int f8; char pad2[0x131]; unsigned char f13d; } Obj_82799EB8;
extern void fn_827977F8(int);
extern void fn_82799958(int, const char *, unsigned, int, int, int, int, int, int);
extern unsigned strlen(const char *);

void fn_82799EB8(Obj_82799EB8 *o, const char *s, unsigned len, int a, int b, int c, int d, int e, int f)
{
  fn_827977F8(o->f8);
  if (len == 0xffffffff) {
    len = strlen(s);
  }
  fn_82799958(o->f8, s, len, b, (o->f13d >> 2) & 1, a, c, d, e);
  o->vt->f4(o, 0x106);
}
