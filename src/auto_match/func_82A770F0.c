typedef struct Child_82A770F0 Child_82A770F0;
typedef struct { void *f0, *f4, *f8; void (*fc)(Child_82A770F0 *, int, int); void (*f10)(Child_82A770F0 *, int, int); } VT_82A770F0;
struct Child_82A770F0 { VT_82A770F0 *vt; };
typedef struct Obj_82A770F0 {
  char pad0[0xc];
  Child_82A770F0 *c0c;
  char pad10[0x100 - 0x10];
  Child_82A770F0 *c100;
} Obj_82A770F0;
void fn_82A770F0(Obj_82A770F0 *o, unsigned sel, int a, int b)
{
  if (sel == 0) {
    if (o->c0c == 0) return;
    o->c0c->vt->f10(o->c0c, a, b);
    return;
  }
  if (o->c100 == 0) return;
  o->c100->vt->f10(o->c100, a, b);
}
