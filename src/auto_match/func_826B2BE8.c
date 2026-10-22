typedef struct RC { int pad[2]; unsigned int ref; int pad2; char body[1]; } RC;
typedef struct Obj { char pad[0x7c]; unsigned char lvl; char pad2[0xc8 - 0x7d]; int *items; int count; } Obj;
extern void fn_826824B0(RC *p);
extern void fn_826B1D88(void *p, int a, int b, int f);

static void Use(RC *p, Obj *o, int a, int b)
{
  if (p != 0) {
    fn_826B1D88(p->body, a, b, o->lvl > 6);
    fn_826824B0(p);
  }
}

void fn_826B2BE8(Obj *o, int a, int b)
{
  int *e;
  int v;

  e = &o->items[o->count - 1];
  v = *e;
  if (v != 0)
    ((RC *)v)->ref = (((RC *)v)->ref + 1) & 0x8fffffff;
  Use((RC *)*e, o, a, b);
}
