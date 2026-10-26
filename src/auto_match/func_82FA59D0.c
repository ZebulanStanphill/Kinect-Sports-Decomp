typedef struct { unsigned int a; unsigned int b; } Sub;
typedef struct { unsigned int vt; unsigned int off; } Obj;

void fn_82FA59D0(Obj *param_1)
{
  Sub *s = (Sub *)((char *)param_1 + (param_1->off & ~3u) + 4);
  s->b &= ~2u;
  param_1->off &= ~1u;
}
