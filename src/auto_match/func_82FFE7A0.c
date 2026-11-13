typedef struct Node_82FFE7A0 { struct Node_82FFE7A0 *next; unsigned int key; int value; } Node_82FFE7A0;
typedef struct Hash_82FFE7A0 { int heap; Node_82FFE7A0 *buckets[193]; int count; } Hash_82FFE7A0;
extern int *fn_82FFE528(Hash_82FFE7A0 *h, unsigned int key, unsigned int index);

int *fn_82FFE7A0(Hash_82FFE7A0 *h, unsigned int key, unsigned char *found)
{
  unsigned int i = key % 193;
  Node_82FFE7A0 *n;
  int *v;

  for (n = h->buckets[i]; n != 0; n = n->next) {
    if (n->key == key) {
      break;
    }
  }
  v = n ? &n->value : 0;
  if (v != 0) {
    *found = 1;
    return v;
  }
  *found = 0;
  return fn_82FFE528(h, key, i);
}
