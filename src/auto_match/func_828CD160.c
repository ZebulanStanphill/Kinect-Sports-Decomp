typedef struct { char pad[0xc0]; unsigned char flag; } Item_828CD160;
typedef struct { Item_828CD160 **first; Item_828CD160 **last; Item_828CD160 **end; } Vec_828CD160;
typedef struct { int pad; Vec_828CD160 v; } Obj_828CD160;
extern void fn_8265CA20(void *);

void fn_828CD160(Obj_828CD160 *o)
{
  Vec_828CD160 *v = &o->v;
  unsigned i;
  unsigned char one = 1;
  for (i = 0; i < (unsigned)(v->last - v->first); i++) { if (o->v.first[i] != 0) o->v.first[i]->flag = 1; }
  if (v->first != 0) fn_8265CA20(v->first);
  v->first = 0;
  v->last = 0;
  v->end = 0;
}
