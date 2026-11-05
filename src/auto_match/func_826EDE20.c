extern int *fn_8267BED0(void *, int, void *);
extern void fn_826EBEB0(void *, void *);
extern void fn_826EC4B0(void *, int);
typedef struct { int a; int b; int c; } Rec_826EDE20;
typedef struct { int a, b, c, d, e; } Tmp_826EDE20;
typedef struct {
  char pad0[0x14]; unsigned char m14; unsigned char m15; char pad1[0x50 - 0x16];
  char sub[0x18];
  Rec_826EDE20 *r;
} Obj_826EDE20;
void fn_826EDE20(Obj_826EDE20 *o, int p2)
{
  int a50;
  Tmp_826EDE20 t;
  if (o->r == 0) {
    Rec_826EDE20 *r;
    Rec_826EDE20 *m;
    a50 = 2;
    m = (Rec_826EDE20 *)fn_8267BED0(o, 0xc, &a50);
    if (m != 0) {
      r = m;
      r->a = 0;
      r->b = 0;
      r->c = 0;
    } else r = 0;
    o->r = r;
  }
  t.a = 0; t.b = 0; t.c = 0; t.d = 0;
  t.e = o->r->b;
  fn_826EC4B0(o->r, p2);
  fn_826EBEB0(o->sub, &t);
  o->m15 = o->m14 == 0;
}
