typedef struct Node_82703B00 { struct Node_82703B00 *next; char pad[0x38]; unsigned int key; } Node_82703B00;
typedef struct { Node_82703B00 *head; Node_82703B00 *cur; Node_82703B00 *tail; } Bucket_82703B00;
typedef struct { Bucket_82703B00 b[6]; int version; } Tab_82703B00;
typedef struct { int version; Tab_82703B00 *tab; Node_82703B00 *cur; int bucket; unsigned int key; } Iter_82703B00;
extern void fn_82703910(Tab_82703B00 *, Node_82703B00 *);

Node_82703B00 *fn_82703B00(Iter_82703B00 *it)
{
  Tab_82703B00 *tab = it->tab;
  Node_82703B00 *node;
  Node_82703B00 *prev;
  if (tab->version != it->version) {
    it->bucket = 0;
    it->version = tab->version;
  }
  node = 0;
  while (it->bucket < 6) {
    prev = 0;
    for (node = tab->b[it->bucket].head; node != 0; node = node->next) {
      if (node->key == it->key) break;
      prev = node;
    }
    if (node != 0) {
      Bucket_82703B00 *bk;
      if (prev == 0) tab->b[it->bucket].head = node->next;
      else prev->next = node->next;
      if (node->next == 0) it->tab->b[it->bucket].tail = prev;
      bk = &it->tab->b[it->bucket];
      if (node == bk->cur) {
        if (node->next == 0) bk->cur = prev;
        else bk->cur = node->next;
      }
      node->next = 0;
      break;
    }
    it->bucket++;
  }
  if (it->cur != 0) fn_82703910(it->tab, it->cur);
  it->cur = node;
  return node;
}
