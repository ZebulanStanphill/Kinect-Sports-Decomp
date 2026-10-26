extern void fn_828E2588(void *p);
extern unsigned int lbl_82026D70;
typedef struct { int a, b, c; } Sub;
typedef struct {
  void *vt;
  int v;
  int pad;
  Sub s;
} Obj;
static void Sub_init(Sub *s) { s->a = 0; s->b = 0; s->c = 0; }
Obj *fn_828E2620(Obj *param_1, int param_2, int param_3)
{
  param_1->v = param_3;
  param_1->vt = &lbl_82026D70;
  Sub_init(&param_1->s);
  fn_828E2588(param_1);
  return param_1;
}
