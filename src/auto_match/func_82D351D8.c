typedef struct Stk_82D351D8 { unsigned short *data; int n; } Stk_82D351D8;
typedef struct Obj_82D351D8 { char *tab; int f4; int f8; Stk_82D351D8 stk; } Obj_82D351D8;
extern void fn_82D34E10(Obj_82D351D8 *o, unsigned short a, int b, int c);

char *fn_82D351D8(Obj_82D351D8 *o, int a, int b, unsigned short *out)
{
  Stk_82D351D8 *s;
  if (o->stk.n == 0) fn_82D34E10(o, (unsigned short)(o->f4 + 0x80), a, b);
  s = &o->stk;
  *out = s->data[s->n - 1];
  s->n--;
  return o->tab + *out * 0x14;
}
