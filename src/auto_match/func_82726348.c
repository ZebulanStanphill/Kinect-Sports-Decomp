typedef struct { int a, b, c, d, e; } Sub_82726348;
typedef struct { void *vt; int f4; int f8; Sub_82726348 sub; } Obj_82726348;
extern unsigned int lbl_82010CE4;
void fn_82726348(Obj_82726348 *o)
{
  int i;
  int *p = &o->sub.a;
  o->f4 = 1;
  o->vt = &lbl_82010CE4;
  o->f8 = 0x18;
  for (i = 0; i < 5; i++) p[i] = 0;
}
