typedef struct { int a, b; unsigned int flags; char pad[0x1c]; float v; } Obj;

void fn_829AE0D8(void *a, Obj *o, double v)
{
  if (a == 0) return;
  if (o == 0) return;
  o->v = (float)v;
  o->flags |= 1;
}
