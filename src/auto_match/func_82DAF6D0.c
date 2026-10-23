typedef struct Item { int a, b, c; int d; } Item;
typedef struct Arr { Item **data; int size; } Arr;
typedef struct Obj {
  char pad0[0x25];
  unsigned char flags;
  char pad26[0x38 - 0x26];
  Arr arr;
} Obj;

static int Arr_indexOf(Arr *a, Item *t)
{
  int i = 0;
  if (0 < a->size) {
    Item **p = a->data;
    do {
      if (*p == t) return i;
      i++;
      p++;
    } while (i < a->size);
  }
  return -1;
}

void fn_82DAF6D0(Obj *o, Item *item)
{
  Arr *a = &o->arr;
  a->data[Arr_indexOf(a, item)] = 0;
  item->d = 0;
  o->flags = (o->flags & 0x33) | 0x44;
}
