typedef struct Info_82D82D60 { char pad[0x20]; short v20; } Info_82D82D60;
typedef struct Item_82D82D60 { char pad[0xc]; Info_82D82D60 *info; } Item_82D82D60;
typedef struct Arr_82D82D60 { Item_82D82D60 **data; unsigned short size; unsigned short capFlags; } Arr_82D82D60;
typedef struct Owner_82D82D60 {
  char pad[0xcc];
  int cur;
  char pad2[0xe8 - 0xd0];
  char state;
  char pad3[0x208 - 0xe9];
  Arr_82D82D60 arr;
} Owner_82D82D60;
extern void fn_82D909F0(int a, Owner_82D82D60 *o, int b);
extern void fn_82DAF6D0(Info_82D82D60 *i, Item_82D82D60 *it);
extern void fn_82DAFB58(int i, Item_82D82D60 *it);
extern void fn_83081A78(Arr_82D82D60 *a, int n);

void fn_82D82D60(int ctx, Item_82D82D60 *item, Owner_82D82D60 *o)
{
  Arr_82D82D60 *arr = &o->arr;
  Info_82D82D60 *info;

  if (arr->size == (arr->capFlags & 0x3fff)) {
    fn_83081A78(arr, 4);
  }
  arr->data[arr->size] = item;
  arr->size = arr->size + 1;
  info = item->info;
  if (info->v20 == -1 && o->state != 5) {
    fn_82DAF6D0(info, item);
    fn_82DAFB58(o->cur, item);
  } else if (o->cur != (int)info && o->state != 5) {
    fn_82D909F0(ctx, o, **(int **)((char *)info + 0x48));
  }
}
