typedef struct {
  int p0;
  unsigned key;       /* 4 */
  char pad8[0x18];
  double val;         /* 0x20 */
  char pad28[0x14];
  unsigned flags;     /* 0x3c */
} Item_82964CB0;
typedef struct { char pad[0x14]; Item_82964CB0 **items; } Ctx_82964CB0;

int fn_82964CB0(int i, int j, Ctx_82964CB0 *c)
{
  Item_82964CB0 *a = c->items[i];
  Item_82964CB0 *b = c->items[j];
  double da, db;
  if (a->key < b->key) {
    return -1;
  }
  if (a->key > b->key) {
    return 1;
  }
  if ((a->flags & 0x80000) != 0) {
    da = -a->val;
  } else {
    da = a->val;
  }
  db = b->val;
  if ((b->flags & 0x80000) != 0) {
    db = -db;
  }
  if (da < db) {
    return -1;
  }
  if (da > db) {
    return 1;
  }
  return 0;
}
