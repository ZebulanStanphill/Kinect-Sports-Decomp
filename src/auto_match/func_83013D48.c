extern void RtlInitializeCriticalSection(void *cs);
extern unsigned int lbl_8217D040;
typedef struct { int a, b, c; } Sub;
typedef struct {
  void *vt;
  Sub s;
  int cs[7];
} Obj;
static void Sub_init(Sub *s) { s->a = 0; s->b = 0; s->c = 0; }
Obj *fn_83013D48(Obj *param_1)
{
  param_1->vt = &lbl_8217D040;
  Sub_init(&param_1->s);
  RtlInitializeCriticalSection(param_1->cs);
  return param_1;
}
