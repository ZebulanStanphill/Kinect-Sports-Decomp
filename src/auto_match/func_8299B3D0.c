typedef struct List_8299B3D0 { int pad; unsigned int count; int *items; } List_8299B3D0;
typedef struct Ent_8299B3D0 { int pad[3]; int a; int b; int pad2[9]; unsigned int key; } Ent_8299B3D0;
typedef struct Tab_8299B3D0 { int pad[5]; Ent_8299B3D0 **ents; } Tab_8299B3D0;
typedef struct Src_8299B3D0 { int pad[3]; int a; int b; } Src_8299B3D0;

unsigned int fn_8299B3D0(Tab_8299B3D0 *t, List_8299B3D0 **lists, unsigned int start, unsigned int end,
                         unsigned int key, Src_8299B3D0 *src, int *found)
{
  unsigned int ret = 0;
  unsigned int i;
  unsigned int j;
  *found = 0;
  for (i = start; i < end; i++) {
    List_8299B3D0 *l = lists[i];
    if (l != 0) {
      for (j = 0; j < l->count; j++) {
        unsigned int idx = l->items[j];
        Ent_8299B3D0 *e = t->ents[idx];
        if (idx == key || e->key == key) {
          e->a = src->a;
          e->b = src->b;
          *found = 1;
          ret = i;
        }
      }
    }
  }
  return ret;
}
