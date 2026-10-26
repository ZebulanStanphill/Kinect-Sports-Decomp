extern void fn_82BE51E8(void *p);
extern char lbl_820EAF14[];
typedef struct { int a, b, c, d, e; } Sub;

void **fn_82BEB750(void **param_1)
{
  Sub *s;
  fn_82BE51E8(param_1);
  *param_1 = lbl_820EAF14;
  s = (Sub *)(param_1 + 5);
  s->a = 0;
  s->b = 0;
  s->c = 0;
  s->d = 0;
  s->e = 0x10;
  return param_1;
}
