typedef struct Obj_82FF6520 { int a, b; int f8; } Obj_82FF6520;
typedef struct Ent_82FF6520 { unsigned key; Obj_82FF6520 *value; } Ent_82FF6520;
typedef struct Map_82FF6520 { int pad; Ent_82FF6520 *begin; Ent_82FF6520 *end; } Map_82FF6520;
static int ne_82FF6520(Ent_82FF6520 *a, Ent_82FF6520 *b) { return a != b; }
static Obj_82FF6520 **find_82FF6520(Map_82FF6520 *m, unsigned key)
{
  Ent_82FF6520 *e;
  for (e = m->begin; e != m->end && e->key != key; e++) {}
  return ne_82FF6520(e, m->end) ? &e->value : 0;
}
int fn_82FF6520(Map_82FF6520 *m, unsigned key)
{
  Obj_82FF6520 **p = find_82FF6520(m, key);
  if (p != 0) return (*p)->f8;
  return 0;
}
