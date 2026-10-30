
typedef struct Item_82553980 { int b[0x34]; } Item_82553980;
typedef struct Pool_82553980 {
  unsigned char pad0[0x420];
  Item_82553980 items[80];
  int slot[80];
  int count;
} Pool_82553980;

void fn_82553980(Pool_82553980 *o, int h)
{
  int idx;
  int n;
  int j;

  idx = o->slot[h];
  n = --o->count;
  if (idx != n) {
    o->items[idx] = o->items[n];
  }
  j = 0;
  while (o->slot[j] != o->count) {
    j++;
  }
  o->slot[j] = idx;
  o->slot[h] = o->count;
}
