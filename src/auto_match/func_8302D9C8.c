extern int fn_82FAF408();

typedef struct Item_8302D9C8 Item_8302D9C8;
typedef struct { void *s[11]; void (*f2c)(Item_8302D9C8 *, int); } ItemVt_8302D9C8;
struct Item_8302D9C8 { ItemVt_8302D9C8 *vt; };
typedef struct { unsigned int key; Item_8302D9C8 *val; } Pair_8302D9C8;
typedef struct { Pair_8302D9C8 *beg; Pair_8302D9C8 *end; } Map_8302D9C8;
typedef struct Obj_8302D9C8 Obj_8302D9C8;
typedef struct { void *s0; void *s1; void (*f8)(Obj_8302D9C8 *); } ObjVt_8302D9C8;
struct Obj_8302D9C8 {
  ObjVt_8302D9C8 *vt;
  char pad[0x78];
  Map_8302D9C8 map;
};

static __forceinline Item_8302D9C8 **Find_8302D9C8(Map_8302D9C8 *m, unsigned int key)
{
  Pair_8302D9C8 *p;
  unsigned int found;

  p = m->beg;
  while (p != m->end && p->key != key) {
    p++;
  }
  found = p != m->end;
  return found ? &p->val : 0;
}

int fn_8302D9C8(Obj_8302D9C8 *o, unsigned int key)
{
  Item_8302D9C8 **pp;
  Map_8302D9C8 *m = &o->map;
  unsigned char removed = 0;

  pp = Find_8302D9C8(m, key);
  if (pp != 0) {
    (*pp)->vt->f2c(*pp, 0);
    fn_82FAF408(m, key);
    removed = 1;
  }
  if (removed) {
    o->vt->f8(o);
  }
  return 1;
}
