typedef struct Child_82A77090 Child_82A77090;
typedef struct { void *f0, *f4, *f8; void (*fc)(Child_82A77090 *, int, int); void (*f10)(Child_82A77090 *, int, int); } VT_82A77090;
struct Child_82A77090 { VT_82A77090 *vt; };
typedef struct Obj_82A77090 {
  char pad0[0xc];
  Child_82A77090 *c0c;
  char pad10[0x100 - 0x10];
  Child_82A77090 *c100;
} Obj_82A77090;
void fn_82A77090(Obj_82A77090 *o, unsigned sel, int a, int b)
{
  if (sel == 0) {
    if (o->c0c == 0) return;
    o->c0c->vt->fc(o->c0c, a, b);
    return;
  }
  if (o->c100 == 0) return;
  o->c100->vt->fc(o->c100, a, b);
}
