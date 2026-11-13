typedef struct Node_8256E120 { struct Node_8256E120 *next; struct Node_8256E120 *prev; unsigned int key; } Node_8256E120;
typedef struct { int pad0; Node_8256E120 *head; unsigned int size; int pad[6]; unsigned int buckets; float maxload; } Map_8256E120;
extern void fn_82587028(Map_8256E120 *, unsigned int);
extern void fn_8256DF78(void *, Map_8256E120 *, void *, Node_8256E120 *);
void fn_8256E120(Map_8256E120 *m)
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
      Node_8256E120 *last = m->head->prev;
      Node_8256E120 *node;
      do {
        node = m->head->next;
        fn_8256DF78(&tmp, m, &node->key, node);
      } while (node != last);
    }
  }
}
