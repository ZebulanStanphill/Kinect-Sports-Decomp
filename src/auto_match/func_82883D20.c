typedef unsigned int uint;
extern void fn_8265CA20(void *p);

typedef struct Entry { void *p; int a; int b; } Entry;
typedef struct Queue {
  int f0;
  Entry **items;
  uint cap;
  uint head;
  uint count;
} Queue;

void fn_82883D20(Queue *q)
{
  Entry *e;

  if (q->count != 0) {
    e = q->items[q->head];
    if (e->p != 0) {
      fn_8265CA20(e->p);
    }
    e->p = 0;
    e->a = 0;
    e->b = 0;
    q->head++;
    if (q->cap <= q->head) {
      q->head = 0;
    }
    q->count--;
    if (q->count == 0) {
      q->head = 0;
    }
  }
}
