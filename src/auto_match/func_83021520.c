extern void fn_83008328(void *p);
extern unsigned int lbl_8217C594;
typedef struct { int a, b, c, d; } Sub;
typedef struct {
  void *vt;
  int pad[3];
  Sub s;
} Obj;
static void Sub_init(Sub *s) { s->a = 0; s->b = 0; s->c = 0; s->d = 0; }
Obj *fn_83021520(Obj *param_1)
{
  fn_83008328(param_1);
  param_1->vt = &lbl_8217C594;
  Sub_init(&param_1->s);
  return param_1;
}
