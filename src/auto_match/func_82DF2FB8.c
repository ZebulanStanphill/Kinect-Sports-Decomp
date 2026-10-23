typedef struct Obj { char pad[0x74]; unsigned int flags; } Obj;
typedef struct Group { char pad[8]; Obj **items; int count; } Group;
typedef struct Mgr { char pad[0xc]; Group **groups; int count; } Mgr;
extern int fn_82CFBC28(unsigned int a, int b);

Obj *fn_82DF2FB8(Mgr *m, int key)
{
  int i, j;
  for (i = 0; i < m->count; i++) {
    Group *g = m->groups[i];
    for (j = 0; j < g->count; j++) {
      Obj *o = g->items[j];
      unsigned int h = o->flags & ~1u;
      if (h != 0 && fn_82CFBC28(h, key) == 0)
        return o;
    }
  }
  return 0;
}
