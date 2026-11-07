typedef struct Unknown_82E3AFE8 Unknown_82E3AFE8;
typedef struct UnknownVtbl_82E3AFE8 {
  int (*QueryInterface)(Unknown_82E3AFE8 *self, const void *iid, void *out);
  unsigned int (*AddRef)(Unknown_82E3AFE8 *self);
  unsigned int (*Release)(Unknown_82E3AFE8 *self);
  int (*Next)(Unknown_82E3AFE8 *self, unsigned int count, Unknown_82E3AFE8 **items, unsigned int *fetched);
  void *slot4;
  int (*Reset)(Unknown_82E3AFE8 *self);
  void *slot6[3];
  int (*GetEnumerator)(Unknown_82E3AFE8 *self, const void *iid, Unknown_82E3AFE8 **out);
} UnknownVtbl_82E3AFE8;
struct Unknown_82E3AFE8 { UnknownVtbl_82E3AFE8 *vt; };

typedef struct Counter_82E3AFE8 {
  char pad[0x64];
  int total;
} Counter_82E3AFE8;

extern char lbl_82154C58[];
extern char lbl_82154B18[];
extern int fn_82E5C7D8(Unknown_82E3AFE8 *item, unsigned short *id);
extern int fn_82E59550(Unknown_82E3AFE8 *obj, unsigned short id, int unk, int *count);

int fn_82E3AFE8(Counter_82E3AFE8 *self, Unknown_82E3AFE8 *src)
{
  int hr;
  Unknown_82E3AFE8 *obj;
  Unknown_82E3AFE8 *list;
  Unknown_82E3AFE8 *item;
  unsigned int fetched;
  unsigned short id;
  int count;

  if (src == 0) {
    return 0x80070057;
  }
  self->total = 0;
  obj = 0;
  list = 0;
  item = 0;
  hr = src->vt->QueryInterface(src, lbl_82154C58, &obj);
  if (hr >= 0) {
    hr = src->vt->GetEnumerator(src, lbl_82154B18, &list);
    if (hr >= 0) {
      hr = list->vt->Reset(list);
      if (hr >= 0) {
        fetched = 0;
        while (list->vt->Next(list, 1, &item, &fetched) == 0) {
          id = 0;
          hr = fn_82E5C7D8(item, &id);
          if (item != 0) {
            item->vt->Release(item);
            item = 0;
          }
          if (hr < 0) {
            break;
          }
          count = 0;
          hr = fn_82E59550(obj, id, 1, &count);
          if (hr < 0) {
            break;
          }
          self->total += count;
        }
      }
    }
  }
  if (obj != 0) {
    obj->vt->Release(obj);
    obj = 0;
  }
  if (list != 0) {
    list->vt->Release(list);
    list = 0;
  }
  if (item != 0) {
    item->vt->Release(item);
  }
  return hr;
}
