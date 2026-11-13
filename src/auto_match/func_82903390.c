typedef struct { int pad0[2]; unsigned int count; int pad1[2]; int *items; } Mgr_82903390;
typedef struct { char pad[8]; Mgr_82903390 *mgr; } Obj_82903390;
typedef struct { char pad[0x68]; void *f68; } Item_82903390;

int fn_82903390(Obj_82903390 *param_1,unsigned int *param_2,unsigned int param_3)
{
  unsigned int i;
  for (i = 0; i < param_3; i++) {
    Mgr_82903390 *m = param_1->mgr; unsigned int idx = param_2[i]; Item_82903390 *it = idx < m->count ? (Item_82903390 *)m->items[idx] : 0;
    if (it == 0 || it->f68 == 0) return 0;
  }
  return 1;
}
