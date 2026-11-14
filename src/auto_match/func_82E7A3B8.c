struct Item_82E7A3B8;
typedef struct ItemVt_82E7A3B8 {
  void *slots[0x27];
  int (*getEnabled)(struct Item_82E7A3B8 *self, unsigned int *out);
} ItemVt_82E7A3B8;
typedef struct Item_82E7A3B8 {
  ItemVt_82E7A3B8 *vt;
} Item_82E7A3B8;
typedef struct Obj_82E7A3B8 {
  char pad0[0x178];
  char sub178[0x68];
  unsigned int count1e0;
} Obj_82E7A3B8;
extern int fn_82E78690(void *list, unsigned int index, char **out);
extern int fn_82E78A40(Obj_82E7A3B8 *self, char *entry, Item_82E7A3B8 *item);
static __forceinline char *Lookup(Obj_82E7A3B8 *self, unsigned int index)
{
  char *entry;
  return fn_82E78690(self->sub178, index, &entry) ? entry : 0;
}
int fn_82E7A3B8(Obj_82E7A3B8 *self, unsigned int index, Item_82E7A3B8 *item)
{
  unsigned int enabled;
  char *e;
  int hr;

  enabled = 0;
  if (index >= self->count1e0) {
    return 0x80070057;
  }
  if (item == 0) {
    return 0x80070057;
  }
  hr = item->vt->getEnabled(item, &enabled);
  if (hr < 0) {
    return hr;
  }
  if (enabled == 0) {
    return 0x80070057;
  }
  e = Lookup(self, index);
  if (e == 0) {
    return 0x8000ffff;
  }
  return fn_82E78A40(self, e, item);
}
