typedef struct Item_82FFFF50 {
  int f0;
  int owner;
} Item_82FFFF50;

typedef struct Obj_82FFFF50 {
  char pad0[0xc];
  int owner;               /* 0x0c */
  char pad10[0x2d];
  unsigned char flags;     /* 0x3d */
  char pad3e[0x26];
  Item_82FFFF50 *item;     /* 0x64 */
} Obj_82FFFF50;

extern void *lbl_831BC768;
extern void *fn_82FA5060(void *heap, unsigned int size);
extern Item_82FFFF50 *fn_83027128(void *mem);

int fn_82FFFF50(Obj_82FFFF50 *o)
{
  int r = 1;
  if (o->item == 0) {
    void *mem;
    Item_82FFFF50 *item;
    o->flags |= 1;
    mem = fn_82FA5060(lbl_831BC768, 0x50);
    item = mem ? fn_83027128(mem) : 0;
    if (item == 0)
      r = 0x34;
    else {
      item->owner = o->owner;
      o->item = item;
    }
  }
  return r;
}
