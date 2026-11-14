typedef struct { unsigned int key; int a; int b; } Item_8268F7F8;
typedef struct {
  char pad[0x1c];
  Item_8268F7F8 items[0x20];  /* 0x1c */
  int count;                  /* 0x19c */
} Table_8268F7F8;

int fn_8268F7F8(Table_8268F7F8 *t, unsigned int key)
{
  int first = 0;
  int count = t->count;
  while (count > 0) {
    int half = count >> 1;
    int mid = first + half;
    if (t->items[mid].key < key) {
      first = mid + 1;
      count = count - half - 1;
    } else {
      count = half;
    }
  }
  return first;
}
