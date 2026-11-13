typedef struct { char pad0[0xc]; struct Item_8279A8D8 **items; unsigned int count; } Mgr_8279A8D8;
typedef struct { char pad[8]; Mgr_8279A8D8 *mgr; } Obj_8279A8D8;
typedef struct { char pad[0x16]; unsigned short flags; } Inner_8279A8D8;
typedef struct Item_8279A8D8 { char pad[0xc]; Inner_8279A8D8 *inner; } Item_8279A8D8;
int fn_8279A8D8(Obj_8279A8D8 *param_1)
{
  Mgr_8279A8D8 *m = param_1->mgr;
  unsigned int n = m->count;
  unsigned int i = 0;
  Item_8279A8D8 *it;
  if (m->count == 0) return 0;
  do {
    if (i < m->count) it = m->items[i]; else it = 0;
    if (it->inner->flags & 0x600) return 1;
    i++;
  } while (i < n);
  return 0;
}
