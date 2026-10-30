extern unsigned int fn_824973B0(void *t, int *key);
typedef struct Node_82498F58 { struct Node_82498F58 *next; struct Node_82498F58 *prev; int key; } Node;
typedef struct { Node *lo; Node *hi; } Bucket;
typedef struct { int f0; Node *head; int f8; int fc; Bucket *vec; } Tab;
typedef struct { Node *cur; } It;
It * fn_82498F58(It *out, Tab *t, int *key)
{ unsigned i = fn_824973B0(t, key); Bucket *b = &t->vec[i];
  Node *end = t->head;
  Node *first = b->lo;
  Node *n;
  for (n = first; n != ((first == end) ? end : b->hi->next); n = n->next)
    if (n->key == *key) { out->cur = n; return out; }
  out->cur = end;
  return out;
}
