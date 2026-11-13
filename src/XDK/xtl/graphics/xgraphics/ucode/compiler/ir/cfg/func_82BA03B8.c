extern int fn_82B7BD28(void *a, int n);
typedef struct { int type; int a; int b; void *src; } Obj;

Obj *fn_82BA03B8(Obj *o, void *src)
{
  o->src = src;
  o->a = 0;
  o->type = 2;
  o->b = fn_82B7BD28(src, 8);
  return o;
}
