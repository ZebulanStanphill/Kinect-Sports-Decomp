typedef struct Sub_828CFA88 {
  unsigned char a, b, c, d;
  unsigned short e; short e2;
  int sub[6];
  unsigned char f78;
} Sub_828CFA88;
typedef struct Obj_828CFA88 {
  char pad[0x58];
  Sub_828CFA88 s;
  int f7c, f80, f84;
  char pad2[0x10];
  unsigned long long f98, fa0, fa8;
} Obj_828CFA88;
extern void fn_828AC4E8(void *);
void fn_828CFA88(Obj_828CFA88 *o)
{
  Sub_828CFA88 *p;
  o->f80 = 0;
  p = &o->s;
  o->f7c = 1;
  p->a = 0;
  p->b = 0;
  p->c = 0;
  fn_828AC4E8(p->sub);
  p->e = 0xffff;
  p->f78 = 0xff;
  o->f84 = 0;
  o->f98 = 0;
  o->fa0 = 0;
  o->fa8 = 0;
}
