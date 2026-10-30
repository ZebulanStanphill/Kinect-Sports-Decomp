typedef struct { int a; int b; int c; } Key_827B51A8;
typedef struct { int a; int b; int pad; int pad2; int c; int d; int e; } Ent_827B51A8;
typedef struct {
  char pad0[0x24];
  char sub[0x20];
  unsigned int n;
  char pad1[0x8];
  Ent_827B51A8 **pages;
} Obj_827B51A8;
extern void fn_8276FE30(void *, Key_827B51A8 *);
static void Visit(Obj_827B51A8 *o, Ent_827B51A8 *e)
{
  Key_827B51A8 k;
  int c = e->c;
  if (c != -1) {
    int a = e->a;
    int b = e->b;
    k.c = c;
    k.a = a;
    k.b = b;
    fn_8276FE30(&o->sub, &k);
  }
}
void fn_827B51A8(Obj_827B51A8 *o)
{
  unsigned int i;
  for (i = 0; i < o->n; i++) {
    Visit(o, &o->pages[i >> 8][i & 0xff]);
  }
}
