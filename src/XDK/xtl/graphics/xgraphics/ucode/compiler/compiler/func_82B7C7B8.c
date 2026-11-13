typedef struct Item_82B7C7B8 {
  char pad0[0x28];
  unsigned char flag;
} Item_82B7C7B8;
typedef struct Obj_82B7C7B8 {
  char pad0[0x5a4];
  Item_82B7C7B8 *items[16];
  char pad1[0x858 - 0x5a4 - 16 * 4];
  unsigned int flags;
} Obj_82B7C7B8;

void fn_82B7C7B8(Obj_82B7C7B8 *o)
{
  int i;
  for (i = 1; i <= 3; i++) {
    o->items[i]->flag = (unsigned char)(o->flags >> 14) & 1;
    o->items[i]->flag = (unsigned char)(o->flags >> 14) & 1;
    o->items[i]->flag = (unsigned char)(o->flags >> 14) & 1;
  }
}
