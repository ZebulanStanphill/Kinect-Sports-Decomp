typedef unsigned int U32;
typedef struct Node_825E7D78 { struct Node_825E7D78 *next; struct Node_825E7D78 *prev; U32 key; } Node_825E7D78;
typedef struct { int pad0; Node_825E7D78 *head; U32 size; int pad[6]; U32 buckets; float maxload; } Map_825E7D78;
extern void fn_82587028(Map_825E7D78 *, U32);
extern void fn_825E7BF0(void *, Map_825E7D78 *, void *, Node_825E7D78 *);
void fn_825E7D78(Map_825E7D78 *m)
{
  U32 n = m->buckets;
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
      Node_825E7D78 *last = m->head->prev;
      Node_825E7D78 *node;
      do {
        node = m->head->next;
        fn_825E7BF0(&tmp, m, &node->key, node);
      } while (node != last);
    }
  }
}
