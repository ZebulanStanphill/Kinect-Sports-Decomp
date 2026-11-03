typedef struct Node_8259BB38 { struct Node_8259BB38 *next; int pad; unsigned key; } Node_8259BB38;
typedef struct { Node_8259BB38 *first; Node_8259BB38 *last; } Bucket_8259BB38;
typedef struct {
  int pad0;
  Node_8259BB38 *head;
  int pad8[2];
  Bucket_8259BB38 *buckets;
  int pad14[3];
  unsigned mask;
  unsigned nbuckets;
} Hash_8259BB38;

extern unsigned fn_8256DBA0(Hash_8259BB38 *, unsigned *);

Node_8259BB38 **fn_8259BB38(Node_8259BB38 **out, Hash_8259BB38 *h, unsigned *key)
{
  unsigned mask;
  unsigned b;
  Node_8259BB38 *head;
  Node_8259BB38 *first;
  Node_8259BB38 *it;
  Node_8259BB38 *end;
  Node_8259BB38 *res;
  Node_8259BB38 **pp;

  mask = h->mask;
  b = fn_8256DBA0(h, key) & mask;
  if (h->nbuckets <= b) {
    b = b - (mask >> 1) - 1;
  }
  head = h->head;
  first = h->buckets[b].first;
  it = first;
  while (it != (first == head ? head : h->buckets[b].last->next)) {
    unsigned k = it->key;
    if (*key <= k) {
      if (*key < k) {
        res = head;
        pp = &res;
      } else {
        pp = &it;
      }
      *out = *pp;
      return out;
    }
    it = it->next;
  }
  *out = head;
  return out;
}
