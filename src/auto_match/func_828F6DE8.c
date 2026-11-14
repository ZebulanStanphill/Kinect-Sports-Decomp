typedef struct Item_828F6DE8 {
  int key;
  int x4;
  void *obj;
  int xc;
  int x10;
} Item_828F6DE8;

typedef struct Desc_828F6DE8 {
  int type;
  int pad4;
  int value;
  int padc[5];
} Desc_828F6DE8;

extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void *fn_82930318(unsigned int size);
extern void *fn_82930940(void *mem, Desc_828F6DE8 *desc);
extern void fn_828F59D0(Item_828F6DE8 *item, int flags);
extern int fn_828F6C70(void *self, Item_828F6DE8 *item);

static __forceinline Item_828F6DE8 *construct(Item_828F6DE8 *p, int key)
{
  p->key = key;
  p->x4 = 0;
  p->obj = 0;
  p->xc = 0;
  p->x10 = 0;
  return p;
}

int fn_828F6DE8(void *self, int key, int value)
{
  Item_828F6DE8 *item;
  void *m;

  m = fn_8265C940(0x14, 0x24810000);
  item = m != 0 ? construct((Item_828F6DE8 *)m, key) : 0;
  if (item == 0)
    return 0x8007000e;
  {
    Desc_828F6DE8 desc;
    void *obj;
    desc.type = 2;
    desc.value = value;
    m = fn_82930318(0x30);
    obj = m != 0 ? fn_82930940(m, &desc) : 0;
    item->obj = obj;
    if (obj == 0) {
      fn_828F59D0(item, 1);
      return 0x8007000e;
    }
  }
  return fn_828F6C70(self, item);
}
