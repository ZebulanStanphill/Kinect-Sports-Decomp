extern void fn_82240DB8(void *p, int a);
extern unsigned int lbl_821970C0;
typedef struct { int v; unsigned char b; } Sub;
typedef struct { void *vt; int pad; Sub s; } Obj;
static void Sub_init(Sub *s) { s->v = 0; s->b = 0; }
Obj *fn_82240688(Obj *param_1)
{
  fn_82240DB8(param_1, 1);
  Sub_init(&param_1->s);
  param_1->vt = &lbl_821970C0;
  return param_1;
}
