typedef struct Obj_82F603F8 {
  int pad0;
  unsigned char enabled;
  unsigned char pad5[3];
  unsigned int cap;
  unsigned int count;
  int pad10[3];
  void **items;
} Obj_82F603F8;

typedef struct Item_82F603F8 {
  void (**vt)(void *);
} Item_82F603F8;

int fn_82F603F8(Obj_82F603F8 *self, Item_82F603F8 *item)
{
  int hr;

  hr = 0;
  RtlEnterCriticalSection((char *)self + 0xd4);
  if (self->enabled != 0 && self->count < self->cap) {
    if (item != 0) {
      self->items[self->count] = item;
      self->count = self->count + 1;
      item->vt[1](item);
    } else {
      hr = 0x82240403;
    }
  } else {
    hr = 0x82240404;
  }
  RtlLeaveCriticalSection((char *)self + 0xd4);
  return hr;
}
