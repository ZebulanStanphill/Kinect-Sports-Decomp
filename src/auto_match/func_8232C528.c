extern void fn_822315A0(void *);
extern unsigned char fn_8223AAC0(void *);
struct Item_8232C528;
typedef struct VT_8232C528 { void *f0; void (*f4)(struct Item_8232C528 *); void (*f8)(struct Item_8232C528 *); } VT_8232C528;
typedef struct Item_8232C528 { VT_8232C528 *vt; int id; } Item_8232C528;
typedef struct Pair_8232C528 { Item_8232C528 *obj; void *rep; } Pair_8232C528;
typedef struct Obj_8232C528 {
  char pad[0x54]; Pair_8232C528 *begin; Pair_8232C528 *end; char pad2[8]; Item_8232C528 *cur; void *rep;
} Obj_8232C528;

void fn_8232C528(Obj_8232C528 *o, int id)
{
  int c;
  Pair_8232C528 *p, *end;
  Item_8232C528 *obj;
  void *rep;
  Item_8232C528 *nobj;
  void *nrep;
  void *old;
  c = (int)o->cur;
  if (c != 0) {
    if (((Item_8232C528 *)c)->id == id) return;
    ((Item_8232C528 *)c)->vt->f8((Item_8232C528 *)c);
  }
  p = o->begin;
  end = o->end;
  for (;;) {
    if (p == end) return;
    obj = p->obj;
    if (obj->id == id) break;
    p++;
  }
  rep = p->rep;
  nobj = 0;
  nrep = 0;
  if (rep != 0 && fn_8223AAC0(rep) != 0) {
    nrep = rep;
    nobj = obj;
  }
  old = o->rep;
  o->rep = nrep;
  o->cur = nobj;
  if (old != 0) fn_822315A0(old);
  o->cur->vt->f4(o->cur);
}
