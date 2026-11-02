typedef unsigned int U32;
typedef struct Node_82587858 { struct Node_82587858 *next; struct Node_82587858 *prev; U32 key; } Node_82587858;
typedef struct { int pad0; Node_82587858 *head; U32 size; int pad[6]; U32 buckets; float maxload; } Map_82587858;
extern void fn_82587028(Map_82587858 *, U32);
extern void fn_825875C0(void *, Map_82587858 *, void *, Node_82587858 *);
void fn_82587858(Map_82587858 *m)
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
      Node_82587858 *last = m->head->prev;
      Node_82587858 *node;
      do {
        node = m->head->next;
        fn_825875C0(&tmp, m, &node->key, node);
      } while (node != last);
    }
  }
}
