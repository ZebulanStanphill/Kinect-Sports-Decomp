typedef struct Sub_822D8440 { void *vt; int pad; char m[1]; } Sub_822D8440;
typedef struct Obj_822D8440 { void *vt; char pad0[0x5c - 4]; char str[0x30]; void *rc; Sub_822D8440 a; char pad1[0x14]; Sub_822D8440 b; } Obj_822D8440;
extern char lbl_821ADA68[];
extern char lbl_821C7FB8[];
extern void fn_82359C18(void *);
extern void fn_822315A0(void *);
extern void fn_82230300(void *, int, int);
extern void fn_822C71C8(void *);
static void DtorSub(Sub_822D8440 *s) { fn_82359C18(&s->m); s->vt = lbl_821C7FB8; }
void fn_822D8440(Obj_822D8440 *o)
{
  o->vt = lbl_821ADA68;
  DtorSub(&o->b);
  DtorSub(&o->a);
  if (o->rc != 0) fn_822315A0(o->rc);
  fn_82230300(o->str, 1, 0);
  fn_822C71C8(o);
}
