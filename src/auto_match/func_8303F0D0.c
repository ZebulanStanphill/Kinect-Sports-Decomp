extern void fn_8302B7D0(void *p);
extern unsigned int lbl_8217D914;
typedef struct { int a, b, c; } Sub;
typedef struct {
  void *vt;
  int pad[6];
  Sub s;
} Obj;
static void Sub_init(Sub *s) { s->a = 0; s->b = 0; s->c = 0; }
Obj *fn_8303F0D0(Obj *param_1)
{
  fn_8302B7D0(param_1);
  param_1->vt = &lbl_8217D914;
  Sub_init(&param_1->s);
  return param_1;
}
