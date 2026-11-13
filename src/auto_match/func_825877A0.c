typedef struct Node_825877A0 { struct Node_825877A0 *next; struct Node_825877A0 *prev; unsigned int key; } Node_825877A0;
typedef struct { int pad0; Node_825877A0 *head; unsigned int size; int pad[6]; unsigned int buckets; float maxload; } Map_825877A0;
extern void fn_82587028(Map_825877A0 *, unsigned int);
extern void fn_825873E0(void *, Map_825877A0 *, void *, Node_825877A0 *);
void fn_825877A0(Map_825877A0 *m)
{
  unsigned int n = m->buckets;
  __int64 tmp;
  if (m->maxload < (float)m->size / (float)n) {
    int i = 0;
    do {
      if (n >= 0x1fffffff) break;
      i = i + 1;
      n = n << 1;
    } while (i < 3);
    fn_82587028(m, n);
    if (m->head->next != m->head) {
      Node_825877A0 *last = m->head->prev;
      Node_825877A0 *node;
      do {
        node = m->head->next;
        fn_825873E0(&tmp, m, &node->key, node);
      } while (node != last);
    }
  }
}
