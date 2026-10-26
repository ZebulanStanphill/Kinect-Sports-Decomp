extern void fn_8267C4C8(void *o);
extern void fn_82687270(void *o);

typedef struct { int weak; void *ptr; } Ref;

Ref *fn_82759580(Ref *r, void *o)
{
  if (o != 0)
    fn_8267C4C8(o);
  if (r->weak == 0 && r->ptr != 0)
    fn_82687270(r->ptr);
  r->ptr = o;
  r->weak = 0;
  return r;
}
