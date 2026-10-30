typedef struct Node_8259BA48 { struct Node_8259BA48 *next, *prev; int key; } Node_8259BA48;
typedef struct List_8259BA48 { Node_8259BA48 *head; int size; } List_8259BA48;
typedef struct Bucket_8259BA48 { Node_8259BA48 *first, *last; } Bucket_8259BA48;
typedef struct Table_8259BA48 {
  int pad0;
  List_8259BA48 list;
  int pad0c;
  Bucket_8259BA48 *buckets;
  int pad14[3];
  unsigned int mask;
  unsigned int maxidx;
} Table_8259BA48;
extern unsigned int fn_8256DBA0(Table_8259BA48 *t, int *key);
extern void fn_8265CA20(void *p);

static void List_erase(List_8259BA48 *l, Node_8259BA48 *n, Node_8259BA48 *next)
{
  if (n != l->head) {
    n->prev->next = next;
    n->next->prev = n->prev;
    fn_8265CA20(n);
    l->size = l->size - 1;
  }
}

Node_8259BA48 **fn_8259BA48(Node_8259BA48 **out, Table_8259BA48 *t, Node_8259BA48 *n)
{
  unsigned int mask = t->mask;
  unsigned int idx;
  Bucket_8259BA48 *b;
  Node_8259BA48 *next;
  Bucket_8259BA48 *bb;

  idx = fn_8256DBA0(t, &n->key) & mask;
  if (t->maxidx <= idx) {
    idx = idx - (mask >> 1) - 1;
  }
  bb = t->buckets;
  b = &bb[idx];
  if (b->last == n) {
    if (b->first == n) {
      b->first = t->list.head;
      t->buckets[idx].last = t->list.head;
    } else {
      b->last = n->prev;
    }
  } else if (b->first == n) {
    b->first = n->next;
  }
  next = n->next;
  List_erase(&t->list, n, next);
  *out = next;
  return out;
}
