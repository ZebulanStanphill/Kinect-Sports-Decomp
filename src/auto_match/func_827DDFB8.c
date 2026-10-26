typedef struct { __int64 v[3]; } Sub;
typedef struct { int key; Sub val; } Pair;
typedef struct { int v[4]; } Out;
extern int fn_827D96A0(void *x);
extern Sub *fn_827D9630(Sub *dst, void *src);
extern void fn_827DE748(Out *out, void *map, Pair *p);

void fn_827DDFB8(void *map, void *x)
{
  Out out;
  Sub tmp;
  Pair p;
  int key = fn_827D96A0(x);
  Sub *t = fn_827D9630(&tmp, x);
  p.key = key;
  fn_827D9630(&p.val, t);
  fn_827DE748(&out, map, &p);
}
